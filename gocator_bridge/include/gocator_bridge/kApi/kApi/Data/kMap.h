/** 
 * @file    kMap.h
 * @brief   Declares the kMap class. 
 *
 * @internal
 * Copyright (C) 2012-2014 by LMI Technologies Inc.
 * Licensed under the MIT License.
 * Redistributed files must retain the above copyright notice.
 */
#ifndef K_API_MAP_H
#define K_API_MAP_H

#include <kApi/kApiDef.h>

kBeginHeader()

/**
 * @class       kMap
 * @extends     kObject
 * @ingroup     kApi-Data
 * @brief       Represents a collection of key-value pairs stored in a hash table.
 * 
 * The kMap class represents a hash table of key-value pairs. The kMap constructor accepts kType arguments that determine 
 * the key type and value type. The map will automatically grow as new items are inserted. 
 * 
 * The following example illustrates how to construct a kMap instance, populate it, and access elements. 
 * 
@code {.c}
kStatus MapExample()
{
    kMap map = kNULL; 
    kText32 keys[] = { "one", "two", "three", "four", "five" }; 
    k32s values[] = { 1, 2, 3, 4, 5 }; 
    kSize i; 
    kMapItem it = kNULL;     //map iterator
    
    kTry
    {
        //create a map that can store small char-array keys and 32-bit integer values
        kTest(kMap_Construct(&map, kTypeOf(kText32), kTypeOf(k32s), 0, kNULL)); 
         
        //add some initial items to the map
        for (i = 0; i < kCountOf(keys); ++i)
        {
            kTest(kMap_Add(map, &keys[i], &values[i])); 
        }
         
        //print some information about the map and its items
        printf("Key type: %s\n", kType_Name(kMap_KeyType(map))); 
        printf("Value type: %s\n", kType_Name(kMap_ValueType(map))); 
        printf("Count: %u\n", (k32u) kMap_Count(map)); 
 
        it = kMap_First(map); 
        
        while (!kIsNull(it))
        {
            const kChar* key = kMap_Key(map, it); 
            k32s value = *(k32s*) kMap_Value(map, it); 

            it = kMap_Next(map, it); 
        }
    }
    kFinally
    {
         kObject_Destroy(map); 

         kEndFinally(); 
    }
   
    return kOK; 
} 
@endcode
 * 
 * For maps that contain key or value <em>objects</em> (e.g. kString) as opposed to <em>values</em> (e.g. kText32), 
 * the objects are not automatically destroyed when the map is destroyed. To recursively destroy both the map and its
 * keys/values, use kObject_Dispose. Similarly, kMap does not automatically dispose key/value objects when they are 
 * replaced or cleared from the map. 
 *
 @code {.c}
kStatus MapOfObjectsExample()
{
    kMap map = kNULL;    
    kMapItem it = kNULL;        //map iterator
    kString keyIn = kNULL;   
    kImage valueIn = kNULL; 
    
    kTry
    {
        //create a map that can store string keys and image values
        kTest(kMap_Construct(&map, kTypeOf(kString), kTypeOf(kImage), 0, kNULL)); 
         
        //add some initial items to the map
        kTest(kString_Construct(&keyIn, "one", kNULL)); 
        kTest(kImage_Construct(&valueIn, kTypeOf(k8u), 100, 100, kNULL));         
        kTest(kMap_Add(map, &keyIn, &valueIn)); 
        keyIn = valueIn = kNULL; 

        kTest(kString_Construct(&keyIn, "two", kNULL)); 
        kTest(kImage_Construct(&valueIn, kTypeOf(k8u), 200, 200, kNULL));         
        kTest(kMap_Add(map, &keyIn, &valueIn)); 
        keyIn = valueIn = kNULL; 

        kTest(kString_Construct(&keyIn, "three", kNULL)); 
        kTest(kImage_Construct(&valueIn, kTypeOf(k8u), 300, 300, kNULL));         
        kTest(kMap_Add(map, &keyIn, &valueIn)); 
        keyIn = valueIn = kNULL; 

        //print some information about the map and its items
        printf("Key type: %s\n", kType_Name(kMap_KeyType(map))); 
        printf("Value type: %s\n", kType_Name(kMap_ValueType(map))); 
        printf("Count: %u\n", (k32u) kMap_Count(map)); 
 
        it = kMap_First(map); 
        
        while (!kIsNull(it))
        {
            kString key = kMap_KeyAs_(map, it, kString); 
            kImage value = kMap_ValueAs_(map, it, kImage); 
            
            it = kMap_Next(map, it); 
        }
    }
    kFinally
    {
         //clean up temp variables, in case of error above
         kObject_Destroy(keyIn);          
         kObject_Destroy(valueIn);          

         //dispose map; will destroy internal key/value objects
         kObject_Dispose(map); 

         kEndFinally(); 
    }
   
    return kOK; 
} 
@endcode
 *
 * kMap supports the kObject_Clone, kObject_Dispose, and kObject_Size methods.
 *
 * kMap supports the kdat6 serialization protocol. 
 * 
 */
//typedef kObject kMap;   --forward-declared in kApiDef.x.h

/**
 * Represents a key-value pair within a map. 
 * @typedef kPointer kMapItem 
 * @relates kMap
*/
typedef kPointer kMapItem; 

/** 
 * Constructs a kMap object.
 *
 * @public                      @memberof kMap
 * @param   map                 Map object. 
 * @param   keyType             Type of map key.
 * @param   valueType           Type of map value.
 * @param   initialCapacity     Capacity initially reserved for map items. 
 * @param   allocator           Memory allocator. 
 * @return                      Operation status. 
 */
kFx(kStatus) kMap_Construct(kMap* map, kType keyType, kType valueType, kSize initialCapacity, kAlloc allocator);

/** 
 * Reallocates the map. 
 * 
 * Existing items are discarded. 
 *
 * @public                      @memberof kMap
 * @param   map                 Map object. 
 * @param   keyType             Type of map key.
 * @param   valueType           Type of map value.
 * @param   initialCapacity     Capacity initially reserved for map items. 
 * @return                      Operation status. 
 */
kFx(kStatus) kMap_Allocate(kMap map, kType keyType, kType valueType, kSize initialCapacity);

/** 
 * Performs a shallow copy of the source map.  
 *
 * Source key-value pairs are copied by value; if the source map contains objects, the object 
 * handles are copied but the objects are not cloned. 
 *
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   source      Map to be copied.
 * @return              Operation status. 
 */
kFx(kStatus) kMap_Assign(kMap map, kMap source);

/** 
 * Sets a custom key equality comparator. 
 *
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   function    Key equality function (or kNULL to unset). 
 * @return              Operation status. 
 */
kFx(kStatus) kMap_SetEqualsFx(kMap map, kEqualsFx function); 

/** 
 * Sets a custom hash code generator. 
 *
 * Calling this method will cause the existing map keys to be rehashed using 
 * using the new hash function. If changing both the equals function and the hash function, 
 * change equals first, then hash. 
 *
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   function    Hash code function (or kNULL to unset). 
 * @return              Operation status. 
 */
kFx(kSize) kMap_SetHashFx(kMap map, kHashFx function); 

/** 
 * Returns the key type. 
 *
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @return              Key type. 
 */
kFx(kType) kMap_KeyType(kMap map); 

/** 
 * Returns the value type. 
 *
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @return              Key type. 
 */
kFx(kType) kMap_ValueType(kMap map); 

/** 
 * Returns the count of map elements.  
 *
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @return              Count of elements. 
 */
kFx(kSize) kMap_Count(kMap map); 

/** 
 * Returns the number of elements for which space has been allocated.  
 *
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @return              Map capacity, in elements. 
 */
kFx(kSize) kMap_Capacity(kMap map); 

/** 
 * Finds the value associated with the given key. 
 * 
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   key         Pointer to key. 
 * @param   value       Optionally receives value (can be kNULL). 
 * @return              kOK if found; kERROR_NOT_FOUND if not found. 
 */
kFx(kStatus) kMap_Find(kMap map, const void* key, void* value);

/** 
 * Adds a new key-value pair. 
 * 
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   key         Pointer to key. 
 * @param   value       Pointer to value.
 * @return              kOK if added; kERROR_ALREADY_EXISTS if key already present. 
 */
kFx(kStatus) kMap_Add(kMap map, const void* key, const void* value); 

/** 
 * Adds or replaces a key-value pair. 
 * 
 * For object-based keys or values, the old objects are not automatically disposed. In this case, 
 * consider using kMap_Remove to first remove and dispose the existing item, then kMap_Add
 * to add the new item.
 * 
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   key         Pointer to key. 
 * @param   value       Pointer to value.
 * @return              Operation status.  
 */
kFx(kStatus) kMap_Replace(kMap map, const void* key, const void* value); 

/** 
 * Removes a key-value pair from the map. 
 * 
 * For object-based keys or values, the old objects are not automatically disposed. In this case, 
 * use the oldKey and/or oldValue parameters to receive the previous object(s) and then dispose 
 * them. 
 * 
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   key         Pointer to key. 
 * @param   oldKey      Optionally receives key (can be kNULL). 
 * @param   oldValue    Optionally receives value (can be kNULL). 
 * @return              kOK if removed; kERROR_NOT_FOUND if key not found. 
 */
kFx(kStatus) kMap_Remove(kMap map, const void* key, void* oldKey, void* oldValue); 

/** 
 * Ensures that capacity is reserved for at least the specified number of map items. 
 * 
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   capacity    Map capacity, in items.
 * @return              kOK if removed; kERROR_NOT_FOUND if key not found. 
 */
kFx(kStatus) kMap_Reserve(kMap map, kSize capacity); 

/** 
 * Sets the count of map items to zero. 
 *
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @return              Operation status. 
 */
kFx(kStatus) kMap_Clear(kMap map); 

/** 
 * Disposes any elements in the map and sets the count of map items to zero.
 *
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @return              Operation status. 
 */
kFx(kStatus) kMap_Purge(kMap map); 

/** 
 * Gets a reference to the first map item (key-value pair). 
 *
 * @public              @memberof kMap
 * @param   map         Map object.
 * @return              First map item, or kNULL.
 */
kFx(kMapItem) kMap_First(kMap map); 

/** 
 * Given a map item, gets a reference to the next map item. 
 *
 * @public              @memberof kMap
 * @param   map         Map object.
 * @param   item        Map item.
 * @return              Next map item, or kNULL.
 */
kFx(kMapItem) kMap_Next(kMap map, kMapItem item); 

/** 
 * Finds the map item associated with the given key. 
 * 
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   key         Pointer to key. 
 * @param   item        Optionally receives map item (can be kNULL). 
 * @return              kOK if found; kERROR_NOT_FOUND if not found. 
 */
kFx(kStatus) kMap_FindItem(kMap map, const void* key, kMapItem* item); 

/** 
 * Removes an item from the map. 
 * 
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   item        Map item. 
 * @return              Operation status. 
 */
kFx(kStatus) kMap_RemoveItem(kMap map, kMapItem item); 

/** 
 * Returns a pointer to the key associated with a map item. 
 *
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   item        Map item. 
 * @return              Pointer to key.
 */
kFx(const void*) kMap_Key(kMap map, kMapItem item); 

/** 
 * Returns a pointer to the value associated with a map item. 
 *
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   item        Map item. 
 * @return              Pointer to value.
 */
kFx(void*) kMap_Value(kMap map, kMapItem item); 

/** 
 * Sets the value associated with a map item. 
 *
 * @public              @memberof kMap
 * @param   map         Map object. 
 * @param   item        Map item. 
 * @param   value       Pointer to value to be copied into the map item.
 * @return              Operation status. 
 */
kFx(kStatus) kMap_SetValue(kMap map, kMapItem item, const void* value); 

/** @relates kMap @{ */

#define kMap_KeyType_(MAP)                      kxMap_KeyType_(MAP)                 ///< Macro version of kMap_KeyType.   
#define kMap_ValueType_(MAP)                    kxMap_ValueType_(MAP)               ///< Macro version of kMap_ValueType.   
#define kMap_Count_(MAP)                        kxMap_Count_(MAP)                   ///< Macro version of kMap_Count.   

/** Accesses a map item key and casts the key to the specified type.  */
#define kMap_KeyAs_(MAP, ITEM, TYPE)            kxMap_KeyAs_(MAP, ITEM, TYPE) 

/** Accesses a map item value and casts the value to the specified type.  */
#define kMap_ValueAs_(MAP, ITEM, TYPE)          kxMap_ValueAs_(MAP, ITEM, TYPE) 

/** @} */

kEndHeader()

#include <kApi/Data/kMap.x.h>

#endif
