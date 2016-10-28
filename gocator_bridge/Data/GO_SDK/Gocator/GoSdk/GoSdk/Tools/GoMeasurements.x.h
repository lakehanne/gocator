/** 
 * @file    GoMeasurements.x.h
 *
 * @internal
 * Copyright (C) 2015 by LMI Technologies Inc.
 * Licensed under the MIT License.
 * Redistributed files must retain the above copyright notice.
 */
#ifndef GO_SDK_MEASUREMENTS_X_H
#define GO_SDK_MEASUREMENTS_X_H

#include <kApi/Data/kXml.h>
kBeginHeader()

typedef struct GoRangePositionZClass
{
    GoMeasurementClass base;
} GoRangePositionZClass;

kDeclareClass(Go, GoRangePositionZ, GoMeasurement)

#define  GoRangePositionZ_Cast_(CONTEXT)    kCastClass_(GoRangePositionZ, CONTEXT)

GoFx(kStatus) GoRangePositionZ_VInit(GoRangePositionZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoRangeThicknessThicknessClass
{
    GoMeasurementClass base;
} GoRangeThicknessThicknessClass;

kDeclareClass(Go, GoRangeThicknessThickness, GoMeasurement)

#define  GoRangeThicknessThickness_Cast_(CONTEXT)    kCastClass_(GoRangeThicknessThickness, CONTEXT)

GoFx(kStatus) GoRangeThicknessThickness_VInit(GoRangeThicknessThickness measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileAreaAreaClass
{
    GoMeasurementClass base; 
} GoProfileAreaAreaClass; 

kDeclareClass(Go, GoProfileAreaArea, GoMeasurement)

#define  GoProfileAreaArea_Cast_(CONTEXT)    kCastClass_(GoProfileAreaArea, CONTEXT)

GoFx(kStatus) GoProfileAreaArea_VInit(GoProfileAreaArea measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileAreaCentroidXClass
{
    GoMeasurementClass base; 
} GoProfileAreaCentroidXClass; 

kDeclareClass(Go, GoProfileAreaCentroidX, GoMeasurement)

#define  GoProfileAreaCentroidX_Cast_(CONTEXT)    kCastClass_(GoProfileAreaCentroidX, CONTEXT)

GoFx(kStatus) GoProfileAreaCentroidX_VInit(GoProfileAreaCentroidX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileAreaCentroidZClass
{
    GoMeasurementClass base; 
} GoProfileAreaCentroidZClass; 

kDeclareClass(Go, GoProfileAreaCentroidZ, GoMeasurement)

#define  GoProfileAreaCentroidZ_Cast_(CONTEXT)    kCastClass_(GoProfileAreaCentroidZ, CONTEXT)

GoFx(kStatus) GoProfileAreaCentroidZ_VInit(GoProfileAreaCentroidZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileBoxXClass
{
    GoMeasurementClass base; 
} GoProfileBoxXClass; 

kDeclareClass(Go, GoProfileBoxX, GoMeasurement)

#define  GoProfileBoxX_Cast_(CONTEXT)    kCastClass_(GoProfileBoxX, CONTEXT)

GoFx(kStatus) GoProfileBoxX_VInit(GoProfileBoxX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileBoxZClass
{
    GoMeasurementClass base; 
} GoProfileBoxZClass; 

kDeclareClass(Go, GoProfileBoxZ, GoMeasurement)

#define  GoProfileBoxZ_Cast_(CONTEXT)    kCastClass_(GoProfileBoxZ, CONTEXT)

GoFx(kStatus) GoProfileBoxZ_VInit(GoProfileBoxZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileBoxWidthClass
{
    GoMeasurementClass base; 
} GoProfileBoxWidthClass; 

kDeclareClass(Go, GoProfileBoxWidth, GoMeasurement)

#define  GoProfileBoxWidth_Cast_(CONTEXT)    kCastClass_(GoProfileBoxWidth, CONTEXT)

GoFx(kStatus) GoProfileBoxWidth_VInit(GoProfileBoxWidth measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileBoxHeightClass
{
    GoMeasurementClass base; 
} GoProfileBoxHeightClass; 

kDeclareClass(Go, GoProfileBoxHeight, GoMeasurement)

#define  GoProfileBoxHeight_Cast_(CONTEXT)    kCastClass_(GoProfileBoxHeight, CONTEXT)

GoFx(kStatus) GoProfileBoxHeight_VInit(GoProfileBoxHeight measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileBoxGlobalXClass
{
    GoMeasurementClass base; 
} GoProfileBoxGlobalXClass; 

kDeclareClass(Go, GoProfileBoxGlobalX, GoMeasurement)

#define  GoProfileBoxGlobalX_Cast_(CONTEXT)    kCastClass_(GoProfileBoxGlobalX, CONTEXT)

GoFx(kStatus) GoProfileBoxGlobalX_VInit(GoProfileBoxGlobalX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileBridgeValueBridgeValueClass
{
    GoMeasurementClass base;
} GoProfileBridgeValueBridgeValueClass;

kDeclareClass(Go, GoProfileBridgeValueBridgeValue, GoMeasurement)

#define  GoProfileBridgeValueBridgeValue_Cast_(CONTEXT)    kCastClass_(GoProfileBridgeValueBridgeValue, CONTEXT)

GoFx(kStatus) GoProfileBridgeValueBridgeValue_VInit(GoProfileBridgeValueBridgeValue measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileBridgeValueAngleClass
{
    GoMeasurementClass base;
} GoProfileBridgeValueAngleClass;

kDeclareClass(Go, GoProfileBridgeValueAngle, GoMeasurement)

#define  GoProfileBridgeValueAngle_Cast_(CONTEXT)    kCastClass_(GoProfileBridgeValueAngle, CONTEXT)

GoFx(kStatus) GoProfileBridgeValueAngle_VInit(GoProfileBridgeValueAngle measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileCircleXClass
{
    GoMeasurementClass base; 
} GoProfileCircleXClass; 

kDeclareClass(Go, GoProfileCircleX, GoMeasurement)

#define  GoProfileCircleX_Cast_(CONTEXT)    kCastClass_(GoProfileCircleX, CONTEXT)

GoFx(kStatus) GoProfileCircleX_VInit(GoProfileCircleX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileCircleZClass
{
    GoMeasurementClass base; 
} GoProfileCircleZClass; 

kDeclareClass(Go, GoProfileCircleZ, GoMeasurement)

#define  GoProfileCircleZ_Cast_(CONTEXT)    kCastClass_(GoProfileCircleZ, CONTEXT)

GoFx(kStatus) GoProfileCircleZ_VInit(GoProfileCircleZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileCircleRadiusClass
{
    GoMeasurementClass base; 
} GoProfileCircleRadiusClass; 

kDeclareClass(Go, GoProfileCircleRadius, GoMeasurement)

#define  GoProfileCircleRadius_Cast_(CONTEXT)    kCastClass_(GoProfileCircleRadius, CONTEXT)

GoFx(kStatus) GoProfileCircleRadius_VInit(GoProfileCircleRadius measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileDimWidthClass
{
    GoMeasurementClass base; 
    kBool absolute;
} GoProfileDimWidthClass; 

kDeclareClass(Go, GoProfileDimWidth, GoMeasurement)

#define  GoProfileDimWidth_Cast_(CONTEXT)    kCastClass_(GoProfileDimWidth, CONTEXT)

GoFx(kStatus) GoProfileDimWidth_VInit(GoProfileDimWidth measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfileDimWidth_VRead(GoProfileDimWidth measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfileDimWidth_VWrite(GoProfileDimWidth measurement, kXml xml, kXmlItem item); 


typedef struct GoProfileDimHeightClass
{
    GoMeasurementClass base; 
    kBool absolute;
} GoProfileDimHeightClass; 

kDeclareClass(Go, GoProfileDimHeight, GoMeasurement)

#define  GoProfileDimHeight_Cast_(CONTEXT)    kCastClass_(GoProfileDimHeight, CONTEXT)

GoFx(kStatus) GoProfileDimHeight_VInit(GoProfileDimHeight measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfileDimHeight_VRead(GoProfileDimHeight measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfileDimHeight_VWrite(GoProfileDimHeight measurement, kXml xml, kXmlItem item); 


typedef struct GoProfileDimDistanceClass
{
    GoMeasurementClass base; 
} GoProfileDimDistanceClass; 

kDeclareClass(Go, GoProfileDimDistance, GoMeasurement)

#define  GoProfileDimDistance_Cast_(CONTEXT)    kCastClass_(GoProfileDimDistance, CONTEXT)

GoFx(kStatus) GoProfileDimDistance_VInit(GoProfileDimDistance measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileDimCenterXClass
{
    GoMeasurementClass base; 
} GoProfileDimCenterXClass; 

kDeclareClass(Go, GoProfileDimCenterX, GoMeasurement)

#define  GoProfileDimCenterX_Cast_(CONTEXT)    kCastClass_(GoProfileDimCenterX, CONTEXT)

GoFx(kStatus) GoProfileDimCenterX_VInit(GoProfileDimCenterX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileDimCenterZClass
{
    GoMeasurementClass base; 
} GoProfileDimCenterZClass; 

kDeclareClass(Go, GoProfileDimCenterZ, GoMeasurement)

#define  GoProfileDimCenterZ_Cast_(CONTEXT)    kCastClass_(GoProfileDimCenterZ, CONTEXT)

GoFx(kStatus) GoProfileDimCenterZ_VInit(GoProfileDimCenterZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfilePositionXClass
{
    GoMeasurementClass base; 
} GoProfilePositionXClass; 

kDeclareClass(Go, GoProfilePositionX, GoMeasurement)

#define  GoProfilePositionX_Cast_(CONTEXT)    kCastClass_(GoProfilePositionX, CONTEXT)

GoFx(kStatus) GoProfilePositionX_VInit(GoProfilePositionX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfilePositionZClass
{
    GoMeasurementClass base; 
} GoProfilePositionZClass; 

kDeclareClass(Go, GoProfilePositionZ, GoMeasurement)

#define  GoProfilePositionZ_Cast_(CONTEXT)    kCastClass_(GoProfilePositionZ, CONTEXT)

GoFx(kStatus) GoProfilePositionZ_VInit(GoProfilePositionZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileIntersectXClass
{
    GoMeasurementClass base; 
} GoProfileIntersectXClass; 

kDeclareClass(Go, GoProfileIntersectX, GoMeasurement)

#define  GoProfileIntersectX_Cast_(CONTEXT)    kCastClass_(GoProfileIntersectX, CONTEXT)

GoFx(kStatus) GoProfileIntersectX_VInit(GoProfileIntersectX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileIntersectZClass
{
    GoMeasurementClass base; 
} GoProfileIntersectZClass; 

kDeclareClass(Go, GoProfileIntersectZ, GoMeasurement)

#define  GoProfileIntersectZ_Cast_(CONTEXT)    kCastClass_(GoProfileIntersectZ, CONTEXT)

GoFx(kStatus) GoProfileIntersectZ_VInit(GoProfileIntersectZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileIntersectAngleClass
{
    GoMeasurementClass base; 
    kBool absolute;
} GoProfileIntersectAngleClass; 

kDeclareClass(Go, GoProfileIntersectAngle, GoMeasurement)

#define  GoProfileIntersectAngle_Cast_(CONTEXT)    kCastClass_(GoProfileIntersectAngle, CONTEXT)

GoFx(kStatus) GoProfileIntersectAngle_VInit(GoProfileIntersectAngle measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfileIntersectAngle_VRead(GoProfileIntersectAngle measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfileIntersectAngle_VWrite(GoProfileIntersectAngle measurement, kXml xml, kXmlItem item); 


typedef struct GoProfileLineStdDevClass
{
    GoMeasurementClass base; 
} GoProfileLineStdDevClass; 

kDeclareClass(Go, GoProfileLineStdDev, GoMeasurement)

#define  GoProfileLineStdDev_Cast_(CONTEXT)    kCastClass_(GoProfileLineStdDev, CONTEXT)

GoFx(kStatus) GoProfileLineStdDev_VInit(GoProfileLineStdDev measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileLineMinErrorClass
{
    GoMeasurementClass base; 
} GoProfileLineMinErrorClass; 

kDeclareClass(Go, GoProfileLineMinError, GoMeasurement)

#define  GoProfileLineMinError_Cast_(CONTEXT)    kCastClass_(GoProfileLineMinError, CONTEXT)

GoFx(kStatus) GoProfileLineMinError_VInit(GoProfileLineMinError measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileLineMaxErrorClass
{
    GoMeasurementClass base; 
} GoProfileLineMaxErrorClass; 

kDeclareClass(Go, GoProfileLineMaxError, GoMeasurement)

#define  GoProfileLineMaxError_Cast_(CONTEXT)    kCastClass_(GoProfileLineMaxError, CONTEXT)

GoFx(kStatus) GoProfileLineMaxError_VInit(GoProfileLineMaxError measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileLinePercentileClass
{
    GoMeasurementClass base; 
    k64f percent;
} GoProfileLinePercentileClass; 

kDeclareClass(Go, GoProfileLinePercentile, GoMeasurement)

#define  GoProfileLinePercentile_Cast_(CONTEXT)    kCastClass_(GoProfileLinePercentile, CONTEXT)

GoFx(kStatus) GoProfileLinePercentile_VInit(GoProfileLinePercentile measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfileLinePercentile_VRead(GoProfileLinePercentile measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfileLinePercentile_VWrite(GoProfileLinePercentile measurement, kXml xml, kXmlItem item); 


typedef struct GoProfilePanelGapClass
{
    GoMeasurementClass base; 
    GoProfileGapAxis axis;
} GoProfilePanelGapClass; 

kDeclareClass(Go, GoProfilePanelGap, GoMeasurement)

#define  GoProfilePanelGap_Cast_(CONTEXT)    kCastClass_(GoProfilePanelGap, CONTEXT)

GoFx(kStatus) GoProfilePanelGap_VInit(GoProfilePanelGap measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfilePanelGap_VRead(GoProfilePanelGap measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfilePanelGap_VWrite(GoProfilePanelGap measurement, kXml xml, kXmlItem item); 


typedef struct GoProfilePanelFlushClass
{
    GoMeasurementClass base; 
    kBool absolute;
} GoProfilePanelFlushClass; 

kDeclareClass(Go, GoProfilePanelFlush, GoMeasurement)

#define  GoProfilePanelFlush_Cast_(CONTEXT)    kCastClass_(GoProfilePanelFlush, CONTEXT)

GoFx(kStatus) GoProfilePanelFlush_VInit(GoProfilePanelFlush measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfilePanelFlush_VRead(GoProfilePanelFlush measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfilePanelFlush_VWrite(GoProfilePanelFlush measurement, kXml xml, kXmlItem item); 


typedef struct GoProfileGrooveXClass
{
    GoMeasurementClass base; 
    GoProfileGrooveLocation location;
    GoProfileGrooveSelectType selectType;
    k32u selectIndex;
} GoProfileGrooveXClass; 

kDeclareClass(Go, GoProfileGrooveX, GoMeasurement)

#define  GoProfileGrooveX_Cast_(CONTEXT)    kCastClass_(GoProfileGrooveX, CONTEXT)

GoFx(kStatus) GoProfileGrooveX_VInit(GoProfileGrooveX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfileGrooveX_VRead(GoProfileGrooveX measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfileGrooveX_VWrite(GoProfileGrooveX measurement, kXml xml, kXmlItem item); 


typedef struct GoProfileGrooveZClass
{
    GoMeasurementClass base; 
    GoProfileGrooveLocation location;
    GoProfileGrooveSelectType selectType;
    k32u selectIndex;
} GoProfileGrooveZClass; 

kDeclareClass(Go, GoProfileGrooveZ, GoMeasurement)

#define  GoProfileGrooveZ_Cast_(CONTEXT)    kCastClass_(GoProfileGrooveZ, CONTEXT)

GoFx(kStatus) GoProfileGrooveZ_VInit(GoProfileGrooveZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfileGrooveZ_VRead(GoProfileGrooveZ measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfileGrooveZ_VWrite(GoProfileGrooveZ measurement, kXml xml, kXmlItem item); 


typedef struct GoProfileGrooveWidthClass
{
    GoMeasurementClass base; 
    GoProfileGrooveSelectType selectType;
    k32u selectIndex;
} GoProfileGrooveWidthClass; 

kDeclareClass(Go, GoProfileGrooveWidth, GoMeasurement)

#define  GoProfileGrooveWidth_Cast_(CONTEXT)    kCastClass_(GoProfileGrooveWidth, CONTEXT)

GoFx(kStatus) GoProfileGrooveWidth_VInit(GoProfileGrooveWidth measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfileGrooveWidth_VRead(GoProfileGrooveWidth measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfileGrooveWidth_VWrite(GoProfileGrooveWidth measurement, kXml xml, kXmlItem item); 


typedef struct GoProfileGrooveDepthClass
{
    GoMeasurementClass base; 
    GoProfileGrooveSelectType selectType;
    k32u selectIndex;
} GoProfileGrooveDepthClass; 

kDeclareClass(Go, GoProfileGrooveDepth, GoMeasurement)

#define  GoProfileGrooveDepth_Cast_(CONTEXT)    kCastClass_(GoProfileGrooveDepth, CONTEXT)

GoFx(kStatus) GoProfileGrooveDepth_VInit(GoProfileGrooveDepth measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfileGrooveDepth_VRead(GoProfileGrooveDepth measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfileGrooveDepth_VWrite(GoProfileGrooveDepth measurement, kXml xml, kXmlItem item); 


typedef struct GoProfileStripXClass
{
    GoMeasurementClass base; 
    GoProfileStripLocation location;
    GoProfileStripSelectType selectType;
    k32u selectIndex;
} GoProfileStripXClass; 

kDeclareClass(Go, GoProfileStripX, GoMeasurement)

#define  GoProfileStripX_Cast_(CONTEXT)    kCastClass_(GoProfileStripX, CONTEXT)

GoFx(kStatus) GoProfileStripX_VInit(GoProfileStripX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfileStripX_VRead(GoProfileStripX measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfileStripX_VWrite(GoProfileStripX measurement, kXml xml, kXmlItem item); 

typedef struct GoProfileStripZClass
{
    GoMeasurementClass base; 
    GoProfileStripLocation location;
    GoProfileStripSelectType selectType;
    k32u selectIndex;
} GoProfileStripZClass; 

kDeclareClass(Go, GoProfileStripZ, GoMeasurement)

#define  GoProfileStripZ_Cast_(CONTEXT)    kCastClass_(GoProfileStripZ, CONTEXT)

GoFx(kStatus) GoProfileStripZ_VInit(GoProfileStripZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfileStripZ_VRead(GoProfileStripZ measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfileStripZ_VWrite(GoProfileStripZ measurement, kXml xml, kXmlItem item); 

typedef struct GoProfileStripWidthClass
{
    GoMeasurementClass base; 
    GoProfileStripSelectType selectType;
    k32u selectIndex;
} GoProfileStripWidthClass; 

kDeclareClass(Go, GoProfileStripWidth, GoMeasurement)

#define  GoProfileStripWidth_Cast_(CONTEXT)    kCastClass_(GoProfileStripWidth, CONTEXT)

GoFx(kStatus) GoProfileStripWidth_VInit(GoProfileStripWidth measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfileStripWidth_VRead(GoProfileStripWidth measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfileStripWidth_VWrite(GoProfileStripWidth measurement, kXml xml, kXmlItem item); 

typedef struct GoProfileStripHeightClass
{
    GoMeasurementClass base; 
    GoProfileStripLocation location;
    GoProfileStripSelectType selectType;
    k32u selectIndex;
} GoProfileStripHeightClass; 

kDeclareClass(Go, GoProfileStripHeight, GoMeasurement)

#define  GoProfileStripHeight_Cast_(CONTEXT)    kCastClass_(GoProfileStripHeight, CONTEXT)

GoFx(kStatus) GoProfileStripHeight_VInit(GoProfileStripHeight measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoProfileStripHeight_VRead(GoProfileStripHeight measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoProfileStripHeight_VWrite(GoProfileStripHeight measurement, kXml xml, kXmlItem item); 

typedef struct GoProfileXLineZClass
{
    GoMeasurementClass base;
} GoProfileXLineZClass;

kDeclareClass(Go, GoProfileXLineZ, GoMeasurement)

#define  GoProfileXLineZ_Cast_(CONTEXT)    kCastClass_(GoProfileXLineZ, CONTEXT)

GoFx(kStatus) GoProfileXLineZ_VInit(GoProfileXLineZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoProfileXLineValidityClass
{
    GoMeasurementClass base;
} GoProfileXLineValidityClass;

kDeclareClass(Go, GoProfileXLineValidity, GoMeasurement)

#define  GoProfileXLineValidity_Cast_(CONTEXT)    kCastClass_(GoProfileXLineValidity, CONTEXT)

GoFx(kStatus) GoProfileXLineValidity_VInit(GoProfileXLineValidity measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceBoxXClass
{
    GoMeasurementClass base; 
} GoSurfaceBoxXClass; 

kDeclareClass(Go, GoSurfaceBoxX, GoMeasurement)

#define  GoSurfaceBoxX_Cast_(CONTEXT)    kCastClass_(GoSurfaceBoxX, CONTEXT)

GoFx(kStatus) GoSurfaceBoxX_VInit(GoSurfaceBoxX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceBoxYClass
{
    GoMeasurementClass base; 
} GoSurfaceBoxYClass; 

kDeclareClass(Go, GoSurfaceBoxY, GoMeasurement)

#define  GoSurfaceBoxY_Cast_(CONTEXT)    kCastClass_(GoSurfaceBoxY, CONTEXT)

GoFx(kStatus) GoSurfaceBoxY_VInit(GoSurfaceBoxY measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceBoxZClass
{
    GoMeasurementClass base; 
} GoSurfaceBoxZClass; 

kDeclareClass(Go, GoSurfaceBoxZ, GoMeasurement)

#define  GoSurfaceBoxZ_Cast_(CONTEXT)    kCastClass_(GoSurfaceBoxZ, CONTEXT)

GoFx(kStatus) GoSurfaceBoxZ_VInit(GoSurfaceBoxZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);

typedef struct GoSurfaceBoxZAngleClass
{
    GoMeasurementClass base; 
} GoSurfaceBoxZAngleClass; 

kDeclareClass(Go, GoSurfaceBoxZAngle, GoMeasurement)

#define  GoSurfaceBoxZAngle_Cast_(CONTEXT)    kCastClass_(GoSurfaceBoxZAngle, CONTEXT)

GoFx(kStatus) GoSurfaceBoxZAngle_VInit(GoSurfaceBoxZAngle measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceBoxWidthClass
{
    GoMeasurementClass base; 
} GoSurfaceBoxWidthClass; 

kDeclareClass(Go, GoSurfaceBoxWidth, GoMeasurement)

#define  GoSurfaceBoxWidth_Cast_(CONTEXT)    kCastClass_(GoSurfaceBoxWidth, CONTEXT)

GoFx(kStatus) GoSurfaceBoxWidth_VInit(GoSurfaceBoxWidth measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceBoxLengthClass
{
    GoMeasurementClass base; 
} GoSurfaceBoxLengthClass; 

kDeclareClass(Go, GoSurfaceBoxLength, GoMeasurement)

#define  GoSurfaceBoxLength_Cast_(CONTEXT)    kCastClass_(GoSurfaceBoxLength, CONTEXT)

GoFx(kStatus) GoSurfaceBoxLength_VInit(GoSurfaceBoxLength measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceBoxHeightClass
{
    GoMeasurementClass base; 
} GoSurfaceBoxHeightClass; 

kDeclareClass(Go, GoSurfaceBoxHeight, GoMeasurement)

#define  GoSurfaceBoxHeight_Cast_(CONTEXT)    kCastClass_(GoSurfaceBoxHeight, CONTEXT)

GoFx(kStatus) GoSurfaceBoxHeight_VInit(GoSurfaceBoxHeight measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceBoxGlobalXClass
{
    GoMeasurementClass base; 
} GoSurfaceBoxGlobalXClass; 

kDeclareClass(Go, GoSurfaceBoxGlobalX, GoMeasurement)

#define  GoSurfaceBoxGlobalX_Cast_(CONTEXT)    kCastClass_(GoSurfaceBoxGlobalX, CONTEXT)

GoFx(kStatus) GoSurfaceBoxGlobalX_VInit(GoSurfaceBoxGlobalX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceBoxGlobalYClass
{
    GoMeasurementClass base; 
} GoSurfaceBoxGlobalYClass; 

kDeclareClass(Go, GoSurfaceBoxGlobalY, GoMeasurement)

#define  GoSurfaceBoxGlobalY_Cast_(CONTEXT)    kCastClass_(GoSurfaceBoxGlobalY, CONTEXT)

GoFx(kStatus) GoSurfaceBoxGlobalY_VInit(GoSurfaceBoxGlobalY measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceBoxGlobalZAngleClass
{
    GoMeasurementClass base; 
} GoSurfaceBoxGlobalZAngleClass; 

kDeclareClass(Go, GoSurfaceBoxGlobalZAngle, GoMeasurement)

#define  GoSurfaceBoxGlobalZAngle_Cast_(CONTEXT)    kCastClass_(GoSurfaceBoxGlobalZAngle, CONTEXT)

GoFx(kStatus) GoSurfaceBoxGlobalZAngle_VInit(GoSurfaceBoxGlobalZAngle measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceCountersunkHoleXClass
{
    GoMeasurementClass base; 
} GoSurfaceCountersunkHoleXClass; 

kDeclareClass(Go, GoSurfaceCountersunkHoleX, GoMeasurement)

#define  GoSurfaceCountersunkHoleX_Cast_(CONTEXT)    kCastClass_(GoSurfaceCountersunkHoleX, CONTEXT)

GoFx(kStatus) GoSurfaceCountersunkHoleX_VInit(GoSurfaceCountersunkHoleX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceCountersunkHoleXAngleClass
{
    GoMeasurementClass base; 
} GoSurfaceCountersunkHoleXAngleClass; 

kDeclareClass(Go, GoSurfaceCountersunkHoleXAngle, GoMeasurement)

#define  GoSurfaceCountersunkHoleXAngle_Cast_(CONTEXT)    kCastClass_(GoSurfaceCountersunkHoleXAngle, CONTEXT)

GoFx(kStatus) GoSurfaceCountersunkHoleXAngle_VInit(GoSurfaceCountersunkHoleXAngle measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceCountersunkHoleYClass
{
    GoMeasurementClass base; 
} GoSurfaceCountersunkHoleYClass; 

kDeclareClass(Go, GoSurfaceCountersunkHoleY, GoMeasurement)

#define  GoSurfaceCountersunkHoleY_Cast_(CONTEXT)    kCastClass_(GoSurfaceCountersunkHoleY, CONTEXT)

GoFx(kStatus) GoSurfaceCountersunkHoleY_VInit(GoSurfaceCountersunkHoleY measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceCountersunkHoleYAngleClass
{
    GoMeasurementClass base; 
} GoSurfaceCountersunkHoleYAngleClass; 

kDeclareClass(Go, GoSurfaceCountersunkHoleYAngle, GoMeasurement)

#define  GoSurfaceCountersunkHoleYAngle_Cast_(CONTEXT)    kCastClass_(GoSurfaceCountersunkHoleYAngle, CONTEXT)

GoFx(kStatus) GoSurfaceCountersunkHoleYAngle_VInit(GoSurfaceCountersunkHoleYAngle measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceCountersunkHoleZClass
{
    GoMeasurementClass base; 
} GoSurfaceCountersunkHoleZClass; 

kDeclareClass(Go, GoSurfaceCountersunkHoleZ, GoMeasurement)

#define  GoSurfaceCountersunkHoleZ_Cast_(CONTEXT)    kCastClass_(GoSurfaceCountersunkHoleZ, CONTEXT)

GoFx(kStatus) GoSurfaceCountersunkHoleZ_VInit(GoSurfaceCountersunkHoleZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceCountersunkHoleDepthClass
{
    GoMeasurementClass base; 
} GoSurfaceCountersunkHoleDepthClass; 

kDeclareClass(Go, GoSurfaceCountersunkHoleDepth, GoMeasurement)

#define  GoSurfaceCountersunkHoleDepth_Cast_(CONTEXT)    kCastClass_(GoSurfaceCountersunkHoleDepth, CONTEXT)

GoFx(kStatus) GoSurfaceCountersunkHoleDepth_VInit(GoSurfaceCountersunkHoleDepth measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceCountersunkHoleCounterboreDepthClass
{
    GoMeasurementClass base;
} GoSurfaceCountersunkHoleCounterboreDepthClass;

kDeclareClass(Go, GoSurfaceCountersunkHoleCounterboreDepth, GoMeasurement)

#define  GoSurfaceCountersunkHoleCounterboreDepth_Cast_(CONTEXT)    kCastClass_(GoSurfaceCountersunkHoleCounterboreDepth, CONTEXT)

GoFx(kStatus) GoSurfaceCountersunkHoleCounterboreDepth_VInit(GoSurfaceCountersunkHoleCounterboreDepth measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceCountersunkHoleOuterRadiusClass
{
    GoMeasurementClass base; 
} GoSurfaceCountersunkHoleOuterRadiusClass; 

kDeclareClass(Go, GoSurfaceCountersunkHoleOuterRadius, GoMeasurement)

#define  GoSurfaceCountersunkHoleOuterRadius_Cast_(CONTEXT)    kCastClass_(GoSurfaceCountersunkHoleOuterRadius, CONTEXT)

GoFx(kStatus) GoSurfaceCountersunkHoleOuterRadius_VInit(GoSurfaceCountersunkHoleOuterRadius measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceCountersunkHoleBevelAngleClass
{
    GoMeasurementClass base; 
} GoSurfaceCountersunkHoleBevelAngleClass; 

kDeclareClass(Go, GoSurfaceCountersunkHoleBevelAngle, GoMeasurement)

#define  GoSurfaceCountersunkHoleBevelAngle_Cast_(CONTEXT)    kCastClass_(GoSurfaceCountersunkHoleBevelAngle, CONTEXT)

GoFx(kStatus) GoSurfaceCountersunkHoleBevelAngle_VInit(GoSurfaceCountersunkHoleBevelAngle measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceCountersunkHoleBevelRadiusClass
{
    GoMeasurementClass base; 
} GoSurfaceCountersunkHoleBevelRadiusClass; 

kDeclareClass(Go, GoSurfaceCountersunkHoleBevelRadius, GoMeasurement)

#define  GoSurfaceCountersunkHoleBevelRadius_Cast_(CONTEXT)    kCastClass_(GoSurfaceCountersunkHoleBevelRadius, CONTEXT)

GoFx(kStatus) GoSurfaceCountersunkHoleBevelRadius_VInit(GoSurfaceCountersunkHoleBevelRadius measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceEllipseMajorClass
{
    GoMeasurementClass base; 
} GoSurfaceEllipseMajorClass; 

kDeclareClass(Go, GoSurfaceEllipseMajor, GoMeasurement)

#define  GoSurfaceEllipseMajor_Cast_(CONTEXT)    kCastClass_(GoSurfaceEllipseMajor, CONTEXT)

GoFx(kStatus) GoSurfaceEllipseMajor_VInit(GoSurfaceEllipseMajor measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceEllipseMinorClass
{
    GoMeasurementClass base; 
} GoSurfaceEllipseMinorClass; 

kDeclareClass(Go, GoSurfaceEllipseMinor, GoMeasurement)

#define  GoSurfaceEllipseMinor_Cast_(CONTEXT)    kCastClass_(GoSurfaceEllipseMinor, CONTEXT)

GoFx(kStatus) GoSurfaceEllipseMinor_VInit(GoSurfaceEllipseMinor measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceEllipseRatioClass
{
    GoMeasurementClass base; 
} GoSurfaceEllipseRatioClass; 

kDeclareClass(Go, GoSurfaceEllipseRatio, GoMeasurement)

#define  GoSurfaceEllipseRatio_Cast_(CONTEXT)    kCastClass_(GoSurfaceEllipseRatio, CONTEXT)

GoFx(kStatus) GoSurfaceEllipseRatio_VInit(GoSurfaceEllipseRatio measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceEllipseZAngleClass
{
    GoMeasurementClass base; 
} GoSurfaceEllipseZAngleClass; 

kDeclareClass(Go, GoSurfaceEllipseZAngle, GoMeasurement)

#define  GoSurfaceEllipseZAngle_Cast_(CONTEXT)    kCastClass_(GoSurfaceEllipseZAngle, CONTEXT)

GoFx(kStatus) GoSurfaceEllipseZAngle_VInit(GoSurfaceEllipseZAngle measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceHoleXClass
{
    GoMeasurementClass base; 
} GoSurfaceHoleXClass; 

kDeclareClass(Go, GoSurfaceHoleX, GoMeasurement)

#define  GoSurfaceHoleX_Cast_(CONTEXT)    kCastClass_(GoSurfaceHoleX, CONTEXT)

GoFx(kStatus) GoSurfaceHoleX_VInit(GoSurfaceHoleX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceHoleYClass
{
    GoMeasurementClass base; 
} GoSurfaceHoleYClass; 

kDeclareClass(Go, GoSurfaceHoleY, GoMeasurement)

#define  GoSurfaceHoleY_Cast_(CONTEXT)    kCastClass_(GoSurfaceHoleY, CONTEXT)

GoFx(kStatus) GoSurfaceHoleY_VInit(GoSurfaceHoleY measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceHoleZClass
{
    GoMeasurementClass base; 
} GoSurfaceHoleZClass; 

kDeclareClass(Go, GoSurfaceHoleZ, GoMeasurement)

#define  GoSurfaceHoleZ_Cast_(CONTEXT)    kCastClass_(GoSurfaceHoleZ, CONTEXT)

GoFx(kStatus) GoSurfaceHoleZ_VInit(GoSurfaceHoleZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceHoleRadiusClass
{
    GoMeasurementClass base; 
} GoSurfaceHoleRadiusClass; 

kDeclareClass(Go, GoSurfaceHoleRadius, GoMeasurement)

#define  GoSurfaceHoleRadius_Cast_(CONTEXT)    kCastClass_(GoSurfaceHoleRadius, CONTEXT)

GoFx(kStatus) GoSurfaceHoleRadius_VInit(GoSurfaceHoleRadius measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceOpeningXClass
{
    GoMeasurementClass base; 
} GoSurfaceOpeningXClass; 

kDeclareClass(Go, GoSurfaceOpeningX, GoMeasurement)

#define  GoSurfaceOpeningX_Cast_(CONTEXT)    kCastClass_(GoSurfaceOpeningX, CONTEXT)

GoFx(kStatus) GoSurfaceOpeningX_VInit(GoSurfaceOpeningX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceOpeningYClass
{
    GoMeasurementClass base; 
} GoSurfaceOpeningYClass; 

kDeclareClass(Go, GoSurfaceOpeningY, GoMeasurement)

#define  GoSurfaceOpeningY_Cast_(CONTEXT)    kCastClass_(GoSurfaceOpeningY, CONTEXT)

GoFx(kStatus) GoSurfaceOpeningY_VInit(GoSurfaceOpeningY measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceOpeningZClass
{
    GoMeasurementClass base; 
} GoSurfaceOpeningZClass; 

kDeclareClass(Go, GoSurfaceOpeningZ, GoMeasurement)

#define  GoSurfaceOpeningZ_Cast_(CONTEXT)    kCastClass_(GoSurfaceOpeningZ, CONTEXT)

GoFx(kStatus) GoSurfaceOpeningZ_VInit(GoSurfaceOpeningZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceOpeningWidthClass
{
    GoMeasurementClass base; 
} GoSurfaceOpeningWidthClass; 

kDeclareClass(Go, GoSurfaceOpeningWidth, GoMeasurement)

#define  GoSurfaceOpeningWidth_Cast_(CONTEXT)    kCastClass_(GoSurfaceOpeningWidth, CONTEXT)

GoFx(kStatus) GoSurfaceOpeningWidth_VInit(GoSurfaceOpeningWidth measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceOpeningLengthClass
{
    GoMeasurementClass base; 
} GoSurfaceOpeningLengthClass; 

kDeclareClass(Go, GoSurfaceOpeningLength, GoMeasurement)

#define  GoSurfaceOpeningLength_Cast_(CONTEXT)    kCastClass_(GoSurfaceOpeningLength, CONTEXT)

GoFx(kStatus) GoSurfaceOpeningLength_VInit(GoSurfaceOpeningLength measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceOpeningAngleClass
{
    GoMeasurementClass base; 
} GoSurfaceOpeningAngleClass; 

kDeclareClass(Go, GoSurfaceOpeningAngle, GoMeasurement)

#define  GoSurfaceOpeningAngle_Cast_(CONTEXT)    kCastClass_(GoSurfaceOpeningAngle, CONTEXT)

GoFx(kStatus) GoSurfaceOpeningAngle_VInit(GoSurfaceOpeningAngle measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfacePlaneXAngleClass
{
    GoMeasurementClass base; 
} GoSurfacePlaneXAngleClass; 

kDeclareClass(Go, GoSurfacePlaneXAngle, GoMeasurement)

#define  GoSurfacePlaneXAngle_Cast_(CONTEXT)    kCastClass_(GoSurfacePlaneXAngle, CONTEXT)

GoFx(kStatus) GoSurfacePlaneXAngle_VInit(GoSurfacePlaneXAngle measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfacePlaneYAngleClass
{
    GoMeasurementClass base; 
} GoSurfacePlaneYAngleClass; 

kDeclareClass(Go, GoSurfacePlaneYAngle, GoMeasurement)

#define  GoSurfacePlaneYAngle_Cast_(CONTEXT)    kCastClass_(GoSurfacePlaneYAngle, CONTEXT)

GoFx(kStatus) GoSurfacePlaneYAngle_VInit(GoSurfacePlaneYAngle measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfacePlaneZOffsetClass
{
    GoMeasurementClass base; 
} GoSurfacePlaneZOffsetClass; 

kDeclareClass(Go, GoSurfacePlaneZOffset, GoMeasurement)

#define  GoSurfacePlaneZOffset_Cast_(CONTEXT)    kCastClass_(GoSurfacePlaneZOffset, CONTEXT)

GoFx(kStatus) GoSurfacePlaneZOffset_VInit(GoSurfacePlaneZOffset measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfacePositionXClass
{
    GoMeasurementClass base; 
} GoSurfacePositionXClass; 

kDeclareClass(Go, GoSurfacePositionX, GoMeasurement)

#define  GoSurfacePositionX_Cast_(CONTEXT)    kCastClass_(GoSurfacePositionX, CONTEXT)

GoFx(kStatus) GoSurfacePositionX_VInit(GoSurfacePositionX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfacePositionYClass
{
    GoMeasurementClass base; 
} GoSurfacePositionYClass; 

kDeclareClass(Go, GoSurfacePositionY, GoMeasurement)

#define  GoSurfacePositionY_Cast_(CONTEXT)    kCastClass_(GoSurfacePositionY, CONTEXT)

GoFx(kStatus) GoSurfacePositionY_VInit(GoSurfacePositionY measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfacePositionZClass
{
    GoMeasurementClass base; 
} GoSurfacePositionZClass; 

kDeclareClass(Go, GoSurfacePositionZ, GoMeasurement)

#define  GoSurfacePositionZ_Cast_(CONTEXT)    kCastClass_(GoSurfacePositionZ, CONTEXT)

GoFx(kStatus) GoSurfacePositionZ_VInit(GoSurfacePositionZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


/**
 * @class   GoSurfaceRivetX
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents an X measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetX;

/**
 * @class   GoSurfaceRivetY
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a Y measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetY;

/**
 * @class   GoSurfaceRivetZ
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a Z measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetZ;

/**
 * @class   GoSurfaceRivetTiltAngle
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents an X angle measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetTiltAngle;

/**
 * @class   GoSurfaceRivetTiltDirection
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents an Y angle measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetTiltDirection;

/**
 * @class   GoSurfaceRivetRadius
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a radius measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetRadius;

/**
 * @class   GoSurfaceRivetTopOffsetMin
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a top offset minimum measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetTopOffsetMin;

/**
 * @class   GoSurfaceRivetTopOffsetMax
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a top offset maximum measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetTopOffsetMax;

/**
 * @class   GoSurfaceRivetTopOffsetMean
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a top offset mean measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetTopOffsetMean;

/**
 * @class   GoSurfaceRivetTopOffsetStdDev
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a top offset standard deviation measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetTopOffsetStdDev;

/**
 * @class   GoSurfaceRivetRadialHeightMin
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a radial height minimum measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetRadialHeightMin;

/** 
 * Gets the radius.
 *
 * @public                      @memberof GoSurfaceRivet
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialHeightMin object.
 * @return                      The surface location.
 */
GoFx(k64f) GoSurfaceRivetRadialHeightMin_Radius(GoSurfaceRivetRadialHeightMin measurement);

/** 
 * Sets the radius.
 *
 * @public                      @memberof GoSurfaceRivetRadialHeightMin
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialHeightMin object.
 * @param    value              The offset value to set.
 * @return                      Operation status.
 */
GoFx(kStatus) GoSurfaceRivetRadialHeightMin_SetRadius(GoSurfaceRivetRadialHeightMin measurement, k64f value);


/**
 * @class   GoSurfaceRivetRadialHeightMax
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a radial height maximum measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetRadialHeightMax;

/** 
 * Gets the radius.
 *
 * @public                      @memberof GoSurfaceRivet
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialHeightMax object.
 * @return                      The surface location.
 */
GoFx(k64f) GoSurfaceRivetRadialHeightMax_Radius(GoSurfaceRivetRadialHeightMax measurement);

/** 
 * Sets the radius.
 *
 * @public                      @memberof GoSurfaceRivetRadialHeightMax
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialHeightMax object.
 * @param    value              The offset value to set.
 * @return                      Operation status.
 */
GoFx(kStatus) GoSurfaceRivetRadialHeightMax_SetRadius(GoSurfaceRivetRadialHeightMax measurement, k64f value);


/**
 * @class   GoSurfaceRivetRadialHeightMean
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a radial height mean measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetRadialHeightMean;

/** 
 * Gets the radius.
 *
 * @public                      @memberof GoSurfaceRivet
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialHeightMean object.
 * @return                      The surface location.
 */
GoFx(k64f) GoSurfaceRivetRadialHeightMean_Radius(GoSurfaceRivetRadialHeightMean measurement);

/** 
 * Sets the radius.
 *
 * @public                      @memberof GoSurfaceRivetRadialHeightMean
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialHeightMean object.
 * @param    value              The offset value to set.
 * @return                      Operation status.
 */
GoFx(kStatus) GoSurfaceRivetRadialHeightMean_SetRadius(GoSurfaceRivetRadialHeightMean measurement, k64f value);

/**
 * @class   GoSurfaceRivetRadialHeightStdDev
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a radial height standard deviation measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetRadialHeightStdDev;

/** 
 * Gets the radius.
 *
 * @public                      @memberof GoSurfaceRivet
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialHeightStdDev object.
 * @return                      The surface location.
 */
GoFx(k64f) GoSurfaceRivetRadialHeightStdDev_Radius(GoSurfaceRivetRadialHeightStdDev measurement);

/** 
 * Sets the radius.
 *
 * @public                      @memberof GoSurfaceRivetRadialHeightStdDev
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialHeightStdDev object.
 * @param    value              The offset value to set.
 * @return                      Operation status.
 */
GoFx(kStatus) GoSurfaceRivetRadialHeightStdDev_SetRadius(GoSurfaceRivetRadialHeightStdDev measurement, k64f value);


/**
 * @class   GoSurfaceRivetRadialSlopeMin
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a radial slope minimum measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetRadialSlopeMin;

/** 
 * Gets the radius.
 *
 * @public                      @memberof GoSurfaceRivet
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialSlopeMin object.
 * @return                      The surface location.
 */
GoFx(k64f) GoSurfaceRivetRadialSlopeMin_Radius(GoSurfaceRivetRadialSlopeMin measurement);

/** 
 * Sets the radius.
 *
 * @public                      @memberof GoSurfaceRivetRadialSlopeMin
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialSlopeMin object.
 * @param    value              The offset value to set.
 * @return                      Operation status.
 */
GoFx(kStatus) GoSurfaceRivetRadialSlopeMin_SetRadius(GoSurfaceRivetRadialSlopeMin measurement, k64f value);


/**
 * @class   GoSurfaceRivetRadialSlopeMax
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a radial slope maximum measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetRadialSlopeMax;

/** 
 * Gets the radius.
 *
 * @public                      @memberof GoSurfaceRivet
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialSlopeMax object.
 * @return                      The surface location.
 */
GoFx(k64f) GoSurfaceRivetRadialSlopeMax_Radius(GoSurfaceRivetRadialSlopeMax measurement);

/** 
 * Sets the radius.
 *
 * @public                      @memberof GoSurfaceRivetRadialSlopeMax
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialSlopeMax object.
 * @param    value              The offset value to set.
 * @return                      Operation status.
 */
GoFx(kStatus) GoSurfaceRivetRadialSlopeMax_SetRadius(GoSurfaceRivetRadialSlopeMax measurement, k64f value);

/**
 * @class   GoSurfaceRivetRadialSlopeMean
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a radial slope mean measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetRadialSlopeMean;

/** 
 * Gets the radius.
 *
 * @public                      @memberof GoSurfaceRivet
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialSlopeMean object.
 * @return                      The surface location.
 */
GoFx(k64f) GoSurfaceRivetRadialSlopeMean_Radius(GoSurfaceRivetRadialSlopeMean measurement);

/** 
 * Sets the radius.
 *
 * @public                      @memberof GoSurfaceRivetRadialSlopeMean
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialSlopeMean object.
 * @param    value              The offset value to set.
 * @return                      Operation status.
 */
GoFx(kStatus) GoSurfaceRivetRadialSlopeMean_SetRadius(GoSurfaceRivetRadialSlopeMean measurement, k64f value);


/**
 * @class   GoSurfaceRivetRadialSlopeStdDev
 * @extends GoMeasurement
 * @ingroup GoSdk-SurfaceTools
 * @brief   Represents a radial slope standard deviation measurement for a Surface Rivet Tool.
 */
typedef GoMeasurement GoSurfaceRivetRadialSlopeStdDev;

/** 
 * Gets the radius.
 *
 * @public                      @memberof GoSurfaceRivet
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialSlopeStdDev object.
 * @return                      The surface location.
 */
GoFx(k64f) GoSurfaceRivetRadialSlopeStdDev_Radius(GoSurfaceRivetRadialSlopeStdDev measurement);

/** 
 * Sets the radius.
 *
 * @public                      @memberof GoSurfaceRivetRadialSlopeStdDev
 * @version                     Introduced in firmware 4.3.3.124
 * @param    measurement        GoSurfaceRivetRadialSlopeStdDev object.
 * @param    value              The offset value to set.
 * @return                      Operation status.
 */
GoFx(kStatus) GoSurfaceRivetRadialSlopeStdDev_SetRadius(GoSurfaceRivetRadialSlopeStdDev measurement, k64f value);


typedef struct GoSurfaceRivetXClass
{
    GoMeasurementClass base;
} GoSurfaceRivetXClass;

kDeclareClass(Go, GoSurfaceRivetX, GoMeasurement)

#define  GoSurfaceRivetX_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetX, CONTEXT)

GoFx(kStatus) GoSurfaceRivetX_VInit(GoSurfaceRivetX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceRivetYClass
{
    GoMeasurementClass base;
} GoSurfaceRivetYClass;

kDeclareClass(Go, GoSurfaceRivetY, GoMeasurement)

#define  GoSurfaceRivetY_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetY, CONTEXT)

GoFx(kStatus) GoSurfaceRivetY_VInit(GoSurfaceRivetY measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceRivetZClass
{
    GoMeasurementClass base;
} GoSurfaceRivetZClass;

kDeclareClass(Go, GoSurfaceRivetZ, GoMeasurement)

#define  GoSurfaceRivetZ_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetZ, CONTEXT)

GoFx(kStatus) GoSurfaceRivetZ_VInit(GoSurfaceRivetZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceRivetTiltAngleClass
{
    GoMeasurementClass base;
} GoSurfaceRivetTiltAngleClass;

kDeclareClass(Go, GoSurfaceRivetTiltAngle, GoMeasurement)

#define  GoSurfaceRivetTiltAngle_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetTiltAngle, CONTEXT)

GoFx(kStatus) GoSurfaceRivetTiltAngle_VInit(GoSurfaceRivetTiltAngle measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceRivetTiltDirectionClass
{
    GoMeasurementClass base;
} GoSurfaceRivetTiltDirectionClass;

kDeclareClass(Go, GoSurfaceRivetTiltDirection, GoMeasurement)

#define  GoSurfaceRivetTiltDirection_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetTiltDirection, CONTEXT)

GoFx(kStatus) GoSurfaceRivetTiltDirection_VInit(GoSurfaceRivetTiltDirection measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceRivetRadiusClass
{
    GoMeasurementClass base;
} GoSurfaceRivetRadiusClass;

kDeclareClass(Go, GoSurfaceRivetRadius, GoMeasurement)

#define  GoSurfaceRivetRadius_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetRadius, CONTEXT)

GoFx(kStatus) GoSurfaceRivetRadius_VInit(GoSurfaceRivetRadius measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);

typedef struct GoSurfaceRivetTopOffsetMinClass
{
    GoMeasurementClass base;
} GoSurfaceRivetTopOffsetMinClass;

kDeclareClass(Go, GoSurfaceRivetTopOffsetMin, GoMeasurement)

#define  GoSurfaceRivetTopOffsetMin_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetTopOffsetMin, CONTEXT)

GoFx(kStatus) GoSurfaceRivetTopOffsetMin_VInit(GoSurfaceRivetTopOffsetMin measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);

typedef struct GoSurfaceRivetTopOffsetMaxClass
{
    GoMeasurementClass base;
} GoSurfaceRivetTopOffsetMaxClass;

kDeclareClass(Go, GoSurfaceRivetTopOffsetMax, GoMeasurement)

#define  GoSurfaceRivetTopOffsetMax_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetTopOffsetMax, CONTEXT)

GoFx(kStatus) GoSurfaceRivetTopOffsetMax_VInit(GoSurfaceRivetTopOffsetMax measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);

typedef struct GoSurfaceRivetTopOffsetMeanClass
{
    GoMeasurementClass base;
} GoSurfaceRivetTopOffsetMeanClass;

kDeclareClass(Go, GoSurfaceRivetTopOffsetMean, GoMeasurement)

#define  GoSurfaceRivetTopOffsetMean_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetTopOffsetMean, CONTEXT)

GoFx(kStatus) GoSurfaceRivetTopOffsetMean_VInit(GoSurfaceRivetTopOffsetMean measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);

typedef struct GoSurfaceRivetTopOffsetStdDevClass
{
    GoMeasurementClass base;
} GoSurfaceRivetTopOffsetStdDevClass;

kDeclareClass(Go, GoSurfaceRivetTopOffsetStdDev, GoMeasurement)

#define  GoSurfaceRivetTopOffsetStdDev_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetTopOffsetStdDev, CONTEXT)

GoFx(kStatus) GoSurfaceRivetTopOffsetStdDev_VInit(GoSurfaceRivetTopOffsetStdDev measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);

typedef struct GoSurfaceRivetRadialHeightMinClass
{
    GoMeasurementClass base;
    k64f radius;
} GoSurfaceRivetRadialHeightMinClass;

kDeclareClass(Go, GoSurfaceRivetRadialHeightMin, GoMeasurement)

#define  GoSurfaceRivetRadialHeightMin_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetRadialHeightMin, CONTEXT)

GoFx(kStatus) GoSurfaceRivetRadialHeightMin_VInit(GoSurfaceRivetRadialHeightMin measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoSurfaceRivetRadialHeightMin_VRead(GoSurfaceRivetRadialHeightMin measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoSurfaceRivetRadialHeightMin_VWrite(GoSurfaceRivetRadialHeightMin measurement, kXml xml, kXmlItem item);

typedef struct GoSurfaceRivetRadialHeightMaxClass
{
    GoMeasurementClass base;
    k64f radius;
} GoSurfaceRivetRadialHeightMaxClass;

kDeclareClass(Go, GoSurfaceRivetRadialHeightMax, GoMeasurement)

#define  GoSurfaceRivetRadialHeightMax_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetRadialHeightMax, CONTEXT)

GoFx(kStatus) GoSurfaceRivetRadialHeightMax_VInit(GoSurfaceRivetRadialHeightMax measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoSurfaceRivetRadialHeightMax_VRead(GoSurfaceRivetRadialHeightMax measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoSurfaceRivetRadialHeightMax_VWrite(GoSurfaceRivetRadialHeightMax measurement, kXml xml, kXmlItem item);

typedef struct GoSurfaceRivetRadialHeightMeanClass
{
    GoMeasurementClass base;
    k64f radius;
} GoSurfaceRivetRadialHeightMeanClass;

kDeclareClass(Go, GoSurfaceRivetRadialHeightMean, GoMeasurement)

#define  GoSurfaceRivetRadialHeightMean_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetRadialHeightMean, CONTEXT)

GoFx(kStatus) GoSurfaceRivetRadialHeightMean_VInit(GoSurfaceRivetRadialHeightMean measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoSurfaceRivetRadialHeightMean_VRead(GoSurfaceRivetRadialHeightMean measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoSurfaceRivetRadialHeightMean_VWrite(GoSurfaceRivetRadialHeightMean measurement, kXml xml, kXmlItem item);

typedef struct GoSurfaceRivetRadialHeightStdDevClass
{
    GoMeasurementClass base;
    k64f radius;
} GoSurfaceRivetRadialHeightStdDevClass;

kDeclareClass(Go, GoSurfaceRivetRadialHeightStdDev, GoMeasurement)

#define  GoSurfaceRivetRadialHeightStdDev_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetRadialHeightStdDev, CONTEXT)

GoFx(kStatus) GoSurfaceRivetRadialHeightStdDev_VInit(GoSurfaceRivetRadialHeightStdDev measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoSurfaceRivetRadialHeightStdDev_VRead(GoSurfaceRivetRadialHeightStdDev measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoSurfaceRivetRadialHeightStdDev_VWrite(GoSurfaceRivetRadialHeightStdDev measurement, kXml xml, kXmlItem item);

typedef struct GoSurfaceRivetRadialSlopeMinClass
{
    GoMeasurementClass base;
    k64f radius;
} GoSurfaceRivetRadialSlopeMinClass;

kDeclareClass(Go, GoSurfaceRivetRadialSlopeMin, GoMeasurement)

#define  GoSurfaceRivetRadialSlopeMin_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetRadialSlopeMin, CONTEXT)

GoFx(kStatus) GoSurfaceRivetRadialSlopeMin_VInit(GoSurfaceRivetRadialSlopeMin measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoSurfaceRivetRadialSlopeMin_VRead(GoSurfaceRivetRadialSlopeMin measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoSurfaceRivetRadialSlopeMin_VWrite(GoSurfaceRivetRadialSlopeMin measurement, kXml xml, kXmlItem item);


typedef struct GoSurfaceRivetRadialSlopeMaxClass
{
    GoMeasurementClass base;
    k64f radius;
} GoSurfaceRivetRadialSlopeMaxClass;

kDeclareClass(Go, GoSurfaceRivetRadialSlopeMax, GoMeasurement)

#define  GoSurfaceRivetRadialSlopeMax_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetRadialSlopeMax, CONTEXT)

GoFx(kStatus) GoSurfaceRivetRadialSlopeMax_VInit(GoSurfaceRivetRadialSlopeMax measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoSurfaceRivetRadialSlopeMax_VRead(GoSurfaceRivetRadialSlopeMax measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoSurfaceRivetRadialSlopeMax_VWrite(GoSurfaceRivetRadialSlopeMax measurement, kXml xml, kXmlItem item);

typedef struct GoSurfaceRivetRadialSlopeMeanClass
{
    GoMeasurementClass base;
    k64f radius;
} GoSurfaceRivetRadialSlopeMeanClass;

kDeclareClass(Go, GoSurfaceRivetRadialSlopeMean, GoMeasurement)

#define  GoSurfaceRivetRadialSlopeMean_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetRadialSlopeMean, CONTEXT)

GoFx(kStatus) GoSurfaceRivetRadialSlopeMean_VInit(GoSurfaceRivetRadialSlopeMean measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoSurfaceRivetRadialSlopeMean_VRead(GoSurfaceRivetRadialSlopeMean measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoSurfaceRivetRadialSlopeMean_VWrite(GoSurfaceRivetRadialSlopeMean measurement, kXml xml, kXmlItem item);

typedef struct GoSurfaceRivetRadialSlopeStdDevClass
{
    GoMeasurementClass base;
    k64f radius;
} GoSurfaceRivetRadialSlopeStdDevClass;

kDeclareClass(Go, GoSurfaceRivetRadialSlopeStdDev, GoMeasurement)

#define  GoSurfaceRivetRadialSlopeStdDev_Cast_(CONTEXT)    kCastClass_(GoSurfaceRivetRadialSlopeStdDev, CONTEXT)

GoFx(kStatus) GoSurfaceRivetRadialSlopeStdDev_VInit(GoSurfaceRivetRadialSlopeStdDev measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoSurfaceRivetRadialSlopeStdDev_VRead(GoSurfaceRivetRadialSlopeStdDev measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoSurfaceRivetRadialSlopeStdDev_VWrite(GoSurfaceRivetRadialSlopeStdDev measurement, kXml xml, kXmlItem item);


typedef struct GoSurfaceStudBaseXClass
{
    GoMeasurementClass base; 
} GoSurfaceStudBaseXClass; 

kDeclareClass(Go, GoSurfaceStudBaseX, GoMeasurement)

#define  GoSurfaceStudBaseX_Cast_(CONTEXT)    kCastClass_(GoSurfaceStudBaseX, CONTEXT)

GoFx(kStatus) GoSurfaceStudBaseX_VInit(GoSurfaceStudBaseX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceStudBaseYClass
{
    GoMeasurementClass base; 
} GoSurfaceStudBaseYClass; 

kDeclareClass(Go, GoSurfaceStudBaseY, GoMeasurement)

#define  GoSurfaceStudBaseY_Cast_(CONTEXT)    kCastClass_(GoSurfaceStudBaseY, CONTEXT)

GoFx(kStatus) GoSurfaceStudBaseY_VInit(GoSurfaceStudBaseY measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceStudBaseZClass
{
    GoMeasurementClass base; 
} GoSurfaceStudBaseZClass; 

kDeclareClass(Go, GoSurfaceStudBaseZ, GoMeasurement)

#define  GoSurfaceStudBaseZ_Cast_(CONTEXT)    kCastClass_(GoSurfaceStudBaseZ, CONTEXT)

GoFx(kStatus) GoSurfaceStudBaseZ_VInit(GoSurfaceStudBaseZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceStudTipXClass
{
    GoMeasurementClass base; 
} GoSurfaceStudTipXClass; 

kDeclareClass(Go, GoSurfaceStudTipX, GoMeasurement)

#define  GoSurfaceStudTipX_Cast_(CONTEXT)    kCastClass_(GoSurfaceStudTipX, CONTEXT)

GoFx(kStatus) GoSurfaceStudTipX_VInit(GoSurfaceStudTipX measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceStudTipYClass
{
    GoMeasurementClass base; 
} GoSurfaceStudTipYClass; 

kDeclareClass(Go, GoSurfaceStudTipY, GoMeasurement)

#define  GoSurfaceStudTipY_Cast_(CONTEXT)    kCastClass_(GoSurfaceStudTipY, CONTEXT)

GoFx(kStatus) GoSurfaceStudTipY_VInit(GoSurfaceStudTipY measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceStudTipZClass
{
    GoMeasurementClass base; 
} GoSurfaceStudTipZClass; 

kDeclareClass(Go, GoSurfaceStudTipZ, GoMeasurement)

#define  GoSurfaceStudTipZ_Cast_(CONTEXT)    kCastClass_(GoSurfaceStudTipZ, CONTEXT)

GoFx(kStatus) GoSurfaceStudTipZ_VInit(GoSurfaceStudTipZ measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceStudRadiusClass
{
    GoMeasurementClass base; 
    k64f radiusOffset;
} GoSurfaceStudRadiusClass; 

kDeclareClass(Go, GoSurfaceStudRadius, GoMeasurement)

#define  GoSurfaceStudRadius_Cast_(CONTEXT)    kCastClass_(GoSurfaceStudRadius, CONTEXT)

GoFx(kStatus) GoSurfaceStudRadius_VInit(GoSurfaceStudRadius measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoSurfaceStudRadius_VRead(GoSurfaceStudRadius measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoSurfaceStudRadius_VWrite(GoSurfaceStudRadius measurement, kXml xml, kXmlItem item); 

typedef struct GoSurfaceVolumeVolumeClass
{
    GoMeasurementClass base; 
} GoSurfaceVolumeVolumeClass; 

kDeclareClass(Go, GoSurfaceVolumeVolume, GoMeasurement)

#define  GoSurfaceVolumeVolume_Cast_(CONTEXT)    kCastClass_(GoSurfaceVolumeVolume, CONTEXT)

GoFx(kStatus) GoSurfaceVolumeVolume_VInit(GoSurfaceVolumeVolume measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceVolumeAreaClass
{
    GoMeasurementClass base; 
} GoSurfaceVolumeAreaClass; 

kDeclareClass(Go, GoSurfaceVolumeArea, GoMeasurement)

#define  GoSurfaceVolumeArea_Cast_(CONTEXT)    kCastClass_(GoSurfaceVolumeArea, CONTEXT)

GoFx(kStatus) GoSurfaceVolumeArea_VInit(GoSurfaceVolumeArea measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);


typedef struct GoSurfaceVolumeThicknessClass
{
    GoMeasurementClass base; 
    GoSurfaceLocation location;
} GoSurfaceVolumeThicknessClass; 

kDeclareClass(Go, GoSurfaceVolumeThickness, GoMeasurement)

#define  GoSurfaceVolumeThickness_Cast_(CONTEXT)    kCastClass_(GoSurfaceVolumeThickness, CONTEXT)

GoFx(kStatus) GoSurfaceVolumeThickness_VInit(GoSurfaceVolumeThickness measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoSurfaceVolumeThickness_VRead(GoSurfaceVolumeThickness measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoSurfaceVolumeThickness_VWrite(GoSurfaceVolumeThickness measurement, kXml xml, kXmlItem item); 


typedef struct GoScriptOutputClass
{
    GoMeasurementClass base; 
} GoScriptOutputClass; 

kDeclareClass(Go, GoScriptOutput, GoMeasurement)

#define  GoScriptOutput_Cast_(CONTEXT)    kCastClass_(GoScriptOutput, CONTEXT)

GoFx(kStatus) GoScriptOutput_VInit(GoScriptOutput measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoScriptOutput_VRead(GoScriptOutput measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoScriptOutput_VWrite(GoScriptOutput measurement, kXml xml, kXmlItem item); 

typedef GoMeasurement GoExtMeasurement;

GoFx(const kChar*) GoExtMeasurement_Type(GoExtMeasurement measurement);
GoFx(kSize) GoExtMeasurement_CustomParameterCount(GoExtMeasurement measurement);
GoFx(GoExtParam) GoExtMeasurement_CustomParameterAt(GoExtMeasurement measurement, kSize index);

typedef struct GoExtMeasurementClass
{
    GoMeasurementClass base; 
    kArrayList customParameters;
    kText64 type;
} GoExtMeasurementClass; 

kDeclareClass(Go, GoExtMeasurement, GoMeasurement)

#define  GoExtMeasurement_Cast_(CONTEXT)    kCastClass_(GoExtMeasurement, CONTEXT)

GoFx(kStatus) GoExtMeasurement_VInit(GoExtMeasurement measurement, kType type, kObject sensor, kObject srcTool, kBool isFilterable, kAlloc alloc);
GoFx(kStatus) GoExtMeasurement_VRead(GoExtMeasurement measurement, kXml xml, kXmlItem item);
GoFx(kStatus) GoExtMeasurement_VWrite(GoExtMeasurement measurement, kXml xml, kXmlItem item); 
GoFx(kStatus) GoExtMeasurement_VRelease(GoExtMeasurement measurement);

GoFx(kStatus) GoMeasurements_ParseType(const kChar* toolName, const kChar* measurementName, kType* type);
GoFx(kStatus) GoMeasurements_FormatType(kType measurement, kChar* measurementName, kSize capacity);

kEndHeader()

#endif
