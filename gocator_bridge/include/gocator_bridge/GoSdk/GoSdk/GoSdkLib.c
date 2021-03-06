/** 
 * @file    GoSdkLib.c
 *
 * @internal
 * Copyright (C) 2015 by LMI Technologies Inc.
 * Licensed under the MIT License.
 * Redistributed files must retain the above copyright notice.
 */
#include <GoSdk/GoSdkLib.h>
#include <kApi/kApiLib.h>
#include <GoSdk/GoSdk.h>

#define GO_SDK_VERSION  kVersion_Stringify_(GO_SDK_VERSION_MAJOR, GO_SDK_VERSION_MINOR, GO_SDK_VERSION_RELEASE, GO_SDK_VERSION_BUILD)

kBeginAssembly(Go, GoSdk, GO_SDK_VERSION)

    //Dependencies
    kAddDependency(kApiLib)
  
    //Values        
    kAddType(GoAlignmentRef)
    kAddType(GoAlignmentState)
    kAddType(GoAlignmentStatus)
    kAddType(GoAlignmentTarget)
    kAddType(GoAlignmentType)
    kAddType(GoAnalogEvent)
    kAddType(GoAnalogTrigger)
    kAddType(GoAsciiOperation)
    kAddType(GoDataMessageType)
    kAddType(GoDataSource)
    kAddType(GoDigitalEvent)
    kAddType(GoDigitalPass)
    kAddType(GoDigitalSignal)
    kAddType(GoDiscoveryInfo)
    kAddType(GoDiscoveryInterface)
    kAddType(GoDiscoveryProperty)
    kAddType(GoEndianType)
    kAddType(GoEthernetProtocol)
    kAddType(GoExposureMode)
    kAddType(GoExtParamFloatOption)
    kAddType(GoExtParamIntOption)
    kAddType(GoExtParamType)
    kAddType(GoToolOption)
    kAddType(GoExtMeasurementType)
    kAddType(GoMeasurementOption)
    kAddType(GoFamily)
    kAddType(GoImplicitTriggerOverride)            
    kAddType(GoIndicator)
    kAddType(GoInputSource)
    kAddType(GoMeasurementData)
    kAddType(GoMode)
    kAddType(GoMultiplexBank)
    kAddType(GoOrientation)
    kAddType(GoOutputDelayDomain)
    kAddType(GoOutputSource)
    kAddType(GoPartFrameOfReference)
    kAddType(GoPartHeightThresholdDirection)
    kAddType(GoPatternSequenceType)            
    kAddType(GoPixelType)
    kAddType(GoProfileAreaType)            
    kAddType(GoProfileBaseline)        
    kAddType(GoProfileEdgeType)
    kAddType(GoProfileFeatureType)
    kAddType(GoProfileGapAxis)  
    kAddType(GoProfileGenerationStartTrigger)
    kAddType(GoProfileGenerationType)
    kAddType(GoProfileGrooveSelectType)       
    kAddType(GoProfileGrooveShape)
    kAddType(GoProfilePanelSide)
    kAddType(GoProfileStripBaseType)
    kAddType(GoProfileStripEdgeType)
    kAddType(GoReplayExportSourceType)
    kAddType(GoRole)
    kAddType(GoSeekDirection)
    kAddType(GoSelcomFormat)
    kAddType(GoSerialProtocol)
    kAddType(GoSerializerTypeInfo)
    kAddType(GoSpacingIntervalType)
    kAddType(GoStamp)
    kAddType(GoState)
    kAddType(GoSurfaceGenerationStartTrigger)
    kAddType(GoSurfaceGenerationType)
    kAddType(GoSurfaceLocation)
    kAddType(GoSurfaceOpeningType)
    kAddType(GoTrigger)
    kAddType(GoTriggerUnits)
    kAddType(GoUser) 
    kAddType(GoAddressInfo)

    //Non-Configuration classes
    kAddType(GoControl)   
    kAddType(GoDataSet)   
    kAddType(GoDiscovery)   
    kAddType(GoDiscoveryExtInfo)
    kAddType(GoReceiver)       
    kAddType(GoSensorInfo)
    kAddType(GoSerializer)
    kAddType(GoSystem)    

    //Configuration classes
    kAddType(GoAnalog)
    kAddType(GoDigital)
    kAddType(GoEthernet)
    kAddType(GoOutput)
    kAddType(GoLayout)
    kAddType(GoMaterial)
    kAddType(GoPartDetection)
    kAddType(GoPartMatching)
    kAddType(GoPartModel)
    kAddType(GoPartModelEdge)
    kAddType(GoProfileGeneration)
    kAddType(GoSensor)
    kAddType(GoSerial)
    kAddType(GoSetup)
    kAddType(GoSetupNode)
    kAddType(GoSurfaceGeneration)
    kAddType(GoTransform)
    
    //Message types
    kAddType(GoAlignMsg)
    kAddType(GoBoundingBoxMatchMsg)
    kAddType(GoDataMsg)
    kAddType(GoEdgeMatchMsg)
    kAddType(GoEllipseMatchMsg)
    kAddType(GoExposureCalMsg)
    kAddType(GoHealthMsg)
    kAddType(GoMeasurementMsg)
    kAddType(GoProfileIntensityMsg)
    kAddType(GoProfileMsg)
    kAddType(GoRangeIntensityMsg)
    kAddType(GoRangeMsg)
    kAddType(GoResampledProfileMsg)
    kAddType(GoStampMsg)
    kAddType(GoSurfaceIntensityMsg)
    kAddType(GoSurfaceMsg)
    kAddType(GoVideoMsg)

    //Profile measurement related classes
    kAddType(GoProfileEdge)
    kAddType(GoProfileFeature)
    kAddType(GoProfileLineRegion)
    kAddType(GoProfileRegion)

    //Surface measurement related classes
    kAddType(GoCylinderRegion)
    kAddType(GoRegion3d)
    kAddType(GoSurfaceFeature)
    kAddType(GoSurfaceRegion2d)

    //Tool list, base tool and measurement classes
    kAddType(GoMeasurement)
    kAddType(GoTools)
    kAddType(GoTool)
    kAddType(GoExtParam)
    kAddType(GoExtMeasurement)
    kAddType(GoExtTool)

    //Extensible tool parameter classes
    kAddType(GoExtParamBool)
    kAddType(GoExtParamInt)
    kAddType(GoExtParamFloat)
    kAddType(GoExtParamString)
    kAddType(GoExtParamProfileRegion)
    kAddType(GoExtParamSurfaceRegion2d)
    kAddType(GoExtParamSurfaceRegion3d)

    //Range tools and measurements
    kAddType(GoRangeTool)
    kAddType(GoRangePosition)
    kAddType(GoRangePositionZ)
    kAddType(GoRangeThickness)
    kAddType(GoRangeThicknessThickness)

    //GoProfile tools and measurements
    kAddType(GoProfileArea)
    kAddType(GoProfileAreaArea)
    kAddType(GoProfileAreaCentroidX)
    kAddType(GoProfileAreaCentroidZ)
    kAddType(GoProfileBox)
    kAddType(GoProfileBoxX)
    kAddType(GoProfileBoxZ)
    kAddType(GoProfileBoxWidth)
    kAddType(GoProfileBoxHeight)
    kAddType(GoProfileBoxGlobalX)
    kAddType(GoProfileBridgeValue)
    kAddType(GoProfileBridgeValueAngle)
    kAddType(GoProfileBridgeValueBridgeValue)
    kAddType(GoProfileCircle)
    kAddType(GoProfileCircleRadius)
    kAddType(GoProfileCircleX)
    kAddType(GoProfileCircleZ)
    kAddType(GoProfileDim)
    kAddType(GoProfileDimCenterX)
    kAddType(GoProfileDimCenterZ)
    kAddType(GoProfileDimDistance)    
    kAddType(GoProfileDimHeight)
    kAddType(GoProfileDimWidth)            
    kAddType(GoProfileGroove)
    kAddType(GoProfileGrooveDepth)
    kAddType(GoProfileGrooveWidth)
    kAddType(GoProfileGrooveX)
    kAddType(GoProfileGrooveZ)
    kAddType(GoProfileIntersect)
    kAddType(GoProfileIntersectAngle)
    kAddType(GoProfileIntersectX)    
    kAddType(GoProfileIntersectZ)    
    kAddType(GoProfileLine)
    kAddType(GoProfileLineMaxError)
    kAddType(GoProfileLineMinError)
    kAddType(GoProfileLinePercentile)
    kAddType(GoProfileLineStdDev)
    kAddType(GoProfilePanel)
    kAddType(GoProfilePanelFlush)
    kAddType(GoProfilePanelGap)
    kAddType(GoProfilePosition)
    kAddType(GoProfilePositionX)
    kAddType(GoProfilePositionZ)
    kAddType(GoProfileStrip)
    kAddType(GoProfileStripHeight)
    kAddType(GoProfileStripWidth)
    kAddType(GoProfileStripX)
    kAddType(GoProfileStripZ)
    kAddType(GoProfileTool)
    kAddType(GoProfileXLine)
    kAddType(GoProfileXLineZ)
    kAddType(GoProfileXLineValidity)

    //Surface tools and measurements
    kAddType(GoSurfaceBox)
    kAddType(GoSurfaceBoxGlobalX)
    kAddType(GoSurfaceBoxGlobalY)
    kAddType(GoSurfaceBoxGlobalZAngle)
    kAddType(GoSurfaceBoxHeight)
    kAddType(GoSurfaceBoxLength)
    kAddType(GoSurfaceBoxWidth)
    kAddType(GoSurfaceBoxX)
    kAddType(GoSurfaceBoxY)
    kAddType(GoSurfaceBoxZ)
    kAddType(GoSurfaceBoxZAngle)
    kAddType(GoSurfaceCountersunkHole)
    kAddType(GoSurfaceCountersunkHoleBevelAngle)
    kAddType(GoSurfaceCountersunkHoleBevelRadius)
    kAddType(GoSurfaceCountersunkHoleDepth)
    kAddType(GoSurfaceCountersunkHoleOuterRadius)
    kAddType(GoSurfaceCountersunkHoleX)
    kAddType(GoSurfaceCountersunkHoleXAngle)
    kAddType(GoSurfaceCountersunkHoleY)
    kAddType(GoSurfaceCountersunkHoleYAngle)
    kAddType(GoSurfaceCountersunkHoleZ)
    kAddType(GoSurfaceCountersunkHoleCounterboreDepth)
    kAddType(GoSurfaceEllipse)
    kAddType(GoSurfaceEllipseMajor)
    kAddType(GoSurfaceEllipseMinor)
    kAddType(GoSurfaceEllipseRatio)
    kAddType(GoSurfaceEllipseZAngle)
    kAddType(GoSurfaceHole)
    kAddType(GoSurfaceHoleRadius)
    kAddType(GoSurfaceHoleX)
    kAddType(GoSurfaceHoleY)
    kAddType(GoSurfaceHoleZ)
    kAddType(GoSurfaceOpening)
    kAddType(GoSurfaceOpeningAngle)
    kAddType(GoSurfaceOpeningLength)
    kAddType(GoSurfaceOpeningWidth)
    kAddType(GoSurfaceOpeningX)
    kAddType(GoSurfaceOpeningY)
    kAddType(GoSurfaceOpeningZ)
    kAddType(GoSurfacePlane)
    kAddType(GoSurfacePlaneXAngle)
    kAddType(GoSurfacePlaneYAngle)
    kAddType(GoSurfacePlaneZOffset)
    kAddType(GoSurfacePosition)
    kAddType(GoSurfacePositionX)
    kAddType(GoSurfacePositionY)
    kAddType(GoSurfacePositionZ)
    kAddType(GoSurfaceRivet)
    kAddType(GoSurfaceRivetX)
    kAddType(GoSurfaceRivetY)
    kAddType(GoSurfaceRivetZ)
    kAddType(GoSurfaceRivetTiltAngle)
    kAddType(GoSurfaceRivetTiltDirection)
    kAddType(GoSurfaceRivetRadius)
    kAddType(GoSurfaceRivetTopOffsetMin)
    kAddType(GoSurfaceRivetTopOffsetMax)
    kAddType(GoSurfaceRivetTopOffsetMean)
    kAddType(GoSurfaceRivetTopOffsetStdDev)
    kAddType(GoSurfaceRivetRadialHeightMin)
    kAddType(GoSurfaceRivetRadialHeightMax)
    kAddType(GoSurfaceRivetRadialHeightMean)
    kAddType(GoSurfaceRivetRadialHeightStdDev)
    kAddType(GoSurfaceRivetRadialSlopeMin)
    kAddType(GoSurfaceRivetRadialSlopeMax)
    kAddType(GoSurfaceRivetRadialSlopeMean)
    kAddType(GoSurfaceRivetRadialSlopeStdDev)
    kAddType(GoSurfaceStud)
    kAddType(GoSurfaceStudBaseX)
    kAddType(GoSurfaceStudBaseY)
    kAddType(GoSurfaceStudBaseZ)
    kAddType(GoSurfaceStudRadius)
    kAddType(GoSurfaceStudTipX)
    kAddType(GoSurfaceStudTipY)
    kAddType(GoSurfaceStudTipZ)
    kAddType(GoSurfaceTool)
    kAddType(GoSurfaceVolume)       
    kAddType(GoSurfaceVolumeArea)
    kAddType(GoSurfaceVolumeThickness)
    kAddType(GoSurfaceVolumeVolume)

    //Script tool and output
    kAddType(GoScript)
    kAddType(GoScriptOutput)

kEndAssembly()
