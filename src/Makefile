# Can also be libj2735.so
TARGET = libj2735.a
all: $(TARGET) 

ASN_MODULE_SOURCES=	\
	AlaCarte.c	\
	BasicSafetyMessage.c	\
	VehicleDataV2VI.c	\
	TestDataFrameV2VI.c	\
	BasicSafetyMessageVerbose.c	\
	CommonSafetyRequest.c	\
	EmergencyVehicleAlert.c	\
	IntersectionCollision.c	\
	MapData.c	\
	NMEA-Corrections.c	\
	ProbeDataManagement.c	\
	ProbeVehicleData.c	\
	RoadSideAlert.c	\
	RTCM-Corrections.c	\
	SignalRequestMsg.c	\
	SignalStatusMessage.c	\
	SPAT.c	\
	TravelerInformation.c	\
	AccelerationSet4Way.c	\
	AccelSteerYawRateConfidence.c	\
	AllInclusive.c	\
	AntennaOffsetSet.c	\
	Approach.c	\
	ApproachObject.c	\
	BarrierLane.c	\
	BrakeSystemStatus.c	\
	BSMblob.c	\
	BumperHeights.c	\
	Circle.c	\
	ConfidenceSet.c	\
	ConnectsTo.c	\
	CrosswalkLane.c	\
	DataParameters.c	\
	DDate.c	\
	DDateTime.c	\
	DFullTime.c	\
	DMonthDay.c	\
	DTime.c	\
	DYearMonth.c	\
	ExitService.c	\
	FullPositionVector.c	\
	GenericSignage.c	\
	Intersection.c	\
	IntersectionState.c	\
	J1939data.c	\
	MovementState.c	\
	NodeList.c	\
	Offsets.c	\
	PathHistory.c	\
	PathHistoryPointType-01.c	\
	PathHistoryPointType-02.c	\
	PathHistoryPointType-03.c	\
	PathHistoryPointType-04.c	\
	PathHistoryPointType-05.c	\
	PathHistoryPointType-06.c	\
	PathHistoryPointType-07.c	\
	PathHistoryPointType-08.c	\
	PathHistoryPointType-09.c	\
	PathHistoryPointType-10.c	\
	PathPrediction.c	\
	Position3D.c	\
	PositionalAccuracy.c	\
	PositionConfidenceSet.c	\
	RegionList.c	\
	RegionOffsets.c	\
	RegionPointSet.c	\
	RoadSignID.c	\
	RTCMHeader.c	\
	RTCMmsg.c	\
	RTCMPackage.c	\
	Sample.c	\
	ShapePointSet.c	\
	SignalControlZone.c	\
	SignalRequest.c	\
	Snapshot.c	\
	SnapshotDistance.c	\
	SnapshotTime.c	\
	SpecialLane.c	\
	SpeedandHeadingandThrottleConfidence.c	\
	SpeedLimit.c	\
	TransmissionAndSpeed.c	\
	ValidRegion.c	\
	VehicleComputedLane.c	\
	VehicleIdent.c	\
	VehicleReferenceLane.c	\
	VehicleSafetyExtension.c	\
	VehicleSize.c	\
	VehicleStatus.c	\
	VehicleStatusRequest.c	\
	WiperStatus.c	\
	WorkZone.c	\
	Acceleration.c	\
	AccelerationConfidence.c	\
	AmbientAirPressure.c	\
	AmbientAirTemperature.c	\
	AntiLockBrakeStatus.c	\
	ApproachNumber.c	\
	AuxiliaryBrakeStatus.c	\
	AxleLocation.c	\
	AxleWeight.c	\
	BarrierAttributes.c	\
	BrakeAppliedPressure.c	\
	BrakeAppliedStatus.c	\
	BrakeBoostApplied.c	\
	BumperHeightFront.c	\
	BumperHeightRear.c	\
	CargoWeight.c	\
	CodeWord.c	\
	CoefficientOfFriction.c	\
	ColorState.c	\
	Count.c	\
	CrosswalkLaneAttributes.c	\
	DDay.c	\
	DescriptiveName.c	\
	DHour.c	\
	DirectionOfUse.c	\
	DMinute.c	\
	DMonth.c	\
	DOffset.c	\
	DriveAxleLiftAirPressure.c	\
	DriveAxleLocation.c	\
	DriveAxleLubePressure.c	\
	DriveAxleTemperature.c	\
	DrivenLineOffset.c	\
	DrivingWheelAngle.c	\
	DSecond.c	\
	DSignalSeconds.c	\
	DSRCmsgID.c	\
	DYear.c	\
	Elevation.c	\
	ElevationConfidence.c	\
	EmergencyDetails.c	\
	EventFlags.c	\
	Extent.c	\
	ExteriorLights.c	\
	FurtherInfoID.c	\
	GPSstatus.c	\
	Heading.c	\
	HeadingConfidence.c	\
	HeadingSlice.c	\
	IntersectionID.c	\
	IntersectionStatusObject.c	\
	LaneCount.c	\
	LaneManeuverCode.c	\
	LaneNumber.c	\
	LaneSet.c	\
	LaneWidth.c	\
	Latitude.c	\
	LayerID.c	\
	LayerType.c	\
	LightbarInUse.c	\
	Location-quality.c	\
	Location-tech.c	\
	Longitude.c	\
	MinuteOfTheYear.c	\
	MinutesDuration.c	\
	MsgCount.c	\
	MsgCRC.c	\
	MultiVehicleResponse.c	\
	MUTCDCode.c	\
	NMEA-MsgType.c	\
	NMEA-Payload.c	\
	NMEA-Revision.c	\
	NTCIPVehicleclass.c	\
	ObjectCount.c	\
	ObstacleDirection.c	\
	ObstacleDistance.c	\
	Payload.c	\
	PayloadData.c	\
	PedestrianDetect.c	\
	PedestrianSignalState.c	\
	PositionConfidence.c	\
	PreemptState.c	\
	Priority.c	\
	PriorityState.c	\
	ProbeSegmentNumber.c	\
	RainSensor.c	\
	RequestedItem.c	\
	ResponseType.c	\
	RTCM-ID.c	\
	RTCM-Payload.c	\
	RTCM-Revision.c	\
	SignalLightState.c	\
	SignalReqScheme.c	\
	SignalState.c	\
	SignPrority.c	\
	SirenInUse.c	\
	SpecialLaneAttributes.c	\
	SpecialSignalState.c	\
	Speed.c	\
	SpeedConfidence.c	\
	StabilityControlStatus.c	\
	StateConfidence.c	\
	SteeringAxleLubePressure.c	\
	SteeringAxleTemperature.c	\
	SteeringWheelAngle.c	\
	SteeringWheelAngleConfidence.c	\
	SteeringWheelAngleRateOfChange.c	\
	SunSensor.c	\
	TemporaryID.c	\
	TermDistance.c	\
	TermTime.c	\
	ThrottleConfidence.c	\
	ThrottlePosition.c	\
	TimeConfidence.c	\
	TimeMark.c	\
	TireLeakageRate.c	\
	TireLocation.c	\
	TirePressure.c	\
	TirePressureThresholdDetection.c	\
	TireTemp.c	\
	TractionControlState.c	\
	TrailerWeight.c	\
	TransitPreEmptionRequest.c	\
	TransitStatus.c	\
	TransmissionState.c	\
	TravelerInfoType.c	\
	TxTime.c	\
	UniqueMSGID.c	\
	URL-Base.c	\
	URL-Link.c	\
	URL-Short.c	\
	VehicleHeight.c	\
	VehicleLaneAttributes.c	\
	VehicleLength.c	\
	VehicleMass.c	\
	VehicleRequestStatus.c	\
	VehicleStatusDeviceTypeTag.c	\
	VehicleType.c	\
	VehicleWidth.c	\
	VerticalAcceleration.c	\
	VerticalAccelerationThreshold.c	\
	VINstring.c	\
	WheelEndElectFault.c	\
	WheelSensorStatus.c	\
	WiperRate.c	\
	WiperStatusFront.c	\
	WiperStatusRear.c	\
	YawRate.c	\
	YawRateConfidence.c	\
	EssMobileFriction.c	\
	EssPrecipRate.c	\
	EssPrecipSituation.c	\
	EssPrecipYesNo.c	\
	EssSolarRadiation.c	\
	IncidentResponseEquipment.c	\
	ITIScodes.c	\
	ITIScodesAndText.c	\
	ITIStext.c	\
	ResponderGroupAffected.c	\
	VehicleGroupAffected.c

ASN_MODULE_HEADERS=	\
	AlaCarte.h	\
	BasicSafetyMessage.h	\
	VehicleDataV2VI.h	\
	TestDataFrameV2VI.h	\
	BasicSafetyMessageVerbose.h	\
	CommonSafetyRequest.h	\
	EmergencyVehicleAlert.h	\
	IntersectionCollision.h	\
	MapData.h	\
	NMEA-Corrections.h	\
	ProbeDataManagement.h	\
	ProbeVehicleData.h	\
	RoadSideAlert.h	\
	RTCM-Corrections.h	\
	SignalRequestMsg.h	\
	SignalStatusMessage.h	\
	SPAT.h	\
	TravelerInformation.h	\
	AccelerationSet4Way.h	\
	AccelSteerYawRateConfidence.h	\
	AllInclusive.h	\
	AntennaOffsetSet.h	\
	Approach.h	\
	ApproachObject.h	\
	BarrierLane.h	\
	BrakeSystemStatus.h	\
	BSMblob.h	\
	BumperHeights.h	\
	Circle.h	\
	ConfidenceSet.h	\
	ConnectsTo.h	\
	CrosswalkLane.h	\
	DataParameters.h	\
	DDate.h	\
	DDateTime.h	\
	DFullTime.h	\
	DMonthDay.h	\
	DTime.h	\
	DYearMonth.h	\
	ExitService.h	\
	FullPositionVector.h	\
	GenericSignage.h	\
	Intersection.h	\
	IntersectionState.h	\
	J1939data.h	\
	MovementState.h	\
	NodeList.h	\
	Offsets.h	\
	PathHistory.h	\
	PathHistoryPointType-01.h	\
	PathHistoryPointType-02.h	\
	PathHistoryPointType-03.h	\
	PathHistoryPointType-04.h	\
	PathHistoryPointType-05.h	\
	PathHistoryPointType-06.h	\
	PathHistoryPointType-07.h	\
	PathHistoryPointType-08.h	\
	PathHistoryPointType-09.h	\
	PathHistoryPointType-10.h	\
	PathPrediction.h	\
	Position3D.h	\
	PositionalAccuracy.h	\
	PositionConfidenceSet.h	\
	RegionList.h	\
	RegionOffsets.h	\
	RegionPointSet.h	\
	RoadSignID.h	\
	RTCMHeader.h	\
	RTCMmsg.h	\
	RTCMPackage.h	\
	Sample.h	\
	ShapePointSet.h	\
	SignalControlZone.h	\
	SignalRequest.h	\
	Snapshot.h	\
	SnapshotDistance.h	\
	SnapshotTime.h	\
	SpecialLane.h	\
	SpeedandHeadingandThrottleConfidence.h	\
	SpeedLimit.h	\
	TransmissionAndSpeed.h	\
	ValidRegion.h	\
	VehicleComputedLane.h	\
	VehicleIdent.h	\
	VehicleReferenceLane.h	\
	VehicleSafetyExtension.h	\
	VehicleSize.h	\
	VehicleStatus.h	\
	VehicleStatusRequest.h	\
	WiperStatus.h	\
	WorkZone.h	\
	Acceleration.h	\
	AccelerationConfidence.h	\
	AmbientAirPressure.h	\
	AmbientAirTemperature.h	\
	AntiLockBrakeStatus.h	\
	ApproachNumber.h	\
	AuxiliaryBrakeStatus.h	\
	AxleLocation.h	\
	AxleWeight.h	\
	BarrierAttributes.h	\
	BrakeAppliedPressure.h	\
	BrakeAppliedStatus.h	\
	BrakeBoostApplied.h	\
	BumperHeightFront.h	\
	BumperHeightRear.h	\
	CargoWeight.h	\
	CodeWord.h	\
	CoefficientOfFriction.h	\
	ColorState.h	\
	Count.h	\
	CrosswalkLaneAttributes.h	\
	DDay.h	\
	DescriptiveName.h	\
	DHour.h	\
	DirectionOfUse.h	\
	DMinute.h	\
	DMonth.h	\
	DOffset.h	\
	DriveAxleLiftAirPressure.h	\
	DriveAxleLocation.h	\
	DriveAxleLubePressure.h	\
	DriveAxleTemperature.h	\
	DrivenLineOffset.h	\
	DrivingWheelAngle.h	\
	DSecond.h	\
	DSignalSeconds.h	\
	DSRCmsgID.h	\
	DYear.h	\
	Elevation.h	\
	ElevationConfidence.h	\
	EmergencyDetails.h	\
	EventFlags.h	\
	Extent.h	\
	ExteriorLights.h	\
	FurtherInfoID.h	\
	GPSstatus.h	\
	Heading.h	\
	HeadingConfidence.h	\
	HeadingSlice.h	\
	IntersectionID.h	\
	IntersectionStatusObject.h	\
	LaneCount.h	\
	LaneManeuverCode.h	\
	LaneNumber.h	\
	LaneSet.h	\
	LaneWidth.h	\
	Latitude.h	\
	LayerID.h	\
	LayerType.h	\
	LightbarInUse.h	\
	Location-quality.h	\
	Location-tech.h	\
	Longitude.h	\
	MinuteOfTheYear.h	\
	MinutesDuration.h	\
	MsgCount.h	\
	MsgCRC.h	\
	MultiVehicleResponse.h	\
	MUTCDCode.h	\
	NMEA-MsgType.h	\
	NMEA-Payload.h	\
	NMEA-Revision.h	\
	NTCIPVehicleclass.h	\
	ObjectCount.h	\
	ObstacleDirection.h	\
	ObstacleDistance.h	\
	Payload.h	\
	PayloadData.h	\
	PedestrianDetect.h	\
	PedestrianSignalState.h	\
	PositionConfidence.h	\
	PreemptState.h	\
	Priority.h	\
	PriorityState.h	\
	ProbeSegmentNumber.h	\
	RainSensor.h	\
	RequestedItem.h	\
	ResponseType.h	\
	RTCM-ID.h	\
	RTCM-Payload.h	\
	RTCM-Revision.h	\
	SignalLightState.h	\
	SignalReqScheme.h	\
	SignalState.h	\
	SignPrority.h	\
	SirenInUse.h	\
	SpecialLaneAttributes.h	\
	SpecialSignalState.h	\
	Speed.h	\
	SpeedConfidence.h	\
	StabilityControlStatus.h	\
	StateConfidence.h	\
	SteeringAxleLubePressure.h	\
	SteeringAxleTemperature.h	\
	SteeringWheelAngle.h	\
	SteeringWheelAngleConfidence.h	\
	SteeringWheelAngleRateOfChange.h	\
	SunSensor.h	\
	TemporaryID.h	\
	TermDistance.h	\
	TermTime.h	\
	ThrottleConfidence.h	\
	ThrottlePosition.h	\
	TimeConfidence.h	\
	TimeMark.h	\
	TireLeakageRate.h	\
	TireLocation.h	\
	TirePressure.h	\
	TirePressureThresholdDetection.h	\
	TireTemp.h	\
	TractionControlState.h	\
	TrailerWeight.h	\
	TransitPreEmptionRequest.h	\
	TransitStatus.h	\
	TransmissionState.h	\
	TravelerInfoType.h	\
	TxTime.h	\
	UniqueMSGID.h	\
	URL-Base.h	\
	URL-Link.h	\
	URL-Short.h	\
	VehicleHeight.h	\
	VehicleLaneAttributes.h	\
	VehicleLength.h	\
	VehicleMass.h	\
	VehicleRequestStatus.h	\
	VehicleStatusDeviceTypeTag.h	\
	VehicleType.h	\
	VehicleWidth.h	\
	VerticalAcceleration.h	\
	VerticalAccelerationThreshold.h	\
	VINstring.h	\
	WheelEndElectFault.h	\
	WheelSensorStatus.h	\
	WiperRate.h	\
	WiperStatusFront.h	\
	WiperStatusRear.h	\
	YawRate.h	\
	YawRateConfidence.h	\
	EssMobileFriction.h	\
	EssPrecipRate.h	\
	EssPrecipSituation.h	\
	EssPrecipYesNo.h	\
	EssSolarRadiation.h	\
	IncidentResponseEquipment.h	\
	ITIScodes.h	\
	ITIScodesAndText.h	\
	ITIStext.h	\
	ResponderGroupAffected.h	\
	VehicleGroupAffected.h

ASN_MODULE_HEADERS+=BOOLEAN.h
ASN_MODULE_SOURCES+=BOOLEAN.c
ASN_MODULE_HEADERS+=INTEGER.h
ASN_MODULE_HEADERS+=NativeEnumerated.h
ASN_MODULE_HEADERS+=IA5String.h
ASN_MODULE_SOURCES+=IA5String.c
ASN_MODULE_SOURCES+=INTEGER.c
ASN_MODULE_SOURCES+=NativeEnumerated.c
ASN_MODULE_HEADERS+=NativeInteger.h
ASN_MODULE_SOURCES+=NativeInteger.c
ASN_MODULE_HEADERS+=asn_SEQUENCE_OF.h
ASN_MODULE_SOURCES+=asn_SEQUENCE_OF.c
ASN_MODULE_HEADERS+=asn_SET_OF.h
ASN_MODULE_SOURCES+=asn_SET_OF.c
ASN_MODULE_HEADERS+=constr_CHOICE.h
ASN_MODULE_SOURCES+=constr_CHOICE.c
ASN_MODULE_HEADERS+=constr_SEQUENCE.h
ASN_MODULE_SOURCES+=constr_SEQUENCE.c
ASN_MODULE_HEADERS+=constr_SEQUENCE_OF.h
ASN_MODULE_SOURCES+=constr_SEQUENCE_OF.c
ASN_MODULE_HEADERS+=constr_SET_OF.h
ASN_MODULE_SOURCES+=constr_SET_OF.c
ASN_MODULE_HEADERS+=asn_application.h
ASN_MODULE_HEADERS+=asn_system.h
ASN_MODULE_HEADERS+=asn_codecs.h
ASN_MODULE_HEADERS+=asn_internal.h
ASN_MODULE_HEADERS+=OCTET_STRING.h
ASN_MODULE_SOURCES+=OCTET_STRING.c
ASN_MODULE_HEADERS+=BIT_STRING.h
ASN_MODULE_SOURCES+=BIT_STRING.c
ASN_MODULE_SOURCES+=asn_codecs_prim.c
ASN_MODULE_HEADERS+=asn_codecs_prim.h
ASN_MODULE_HEADERS+=ber_tlv_length.h
ASN_MODULE_SOURCES+=ber_tlv_length.c
ASN_MODULE_HEADERS+=ber_tlv_tag.h
ASN_MODULE_SOURCES+=ber_tlv_tag.c
ASN_MODULE_HEADERS+=ber_decoder.h
ASN_MODULE_SOURCES+=ber_decoder.c
ASN_MODULE_HEADERS+=der_encoder.h
ASN_MODULE_SOURCES+=der_encoder.c
ASN_MODULE_HEADERS+=constr_TYPE.h
ASN_MODULE_SOURCES+=constr_TYPE.c
ASN_MODULE_HEADERS+=constraints.h
ASN_MODULE_SOURCES+=constraints.c
ASN_MODULE_HEADERS+=xer_support.h
ASN_MODULE_SOURCES+=xer_support.c
ASN_MODULE_HEADERS+=xer_decoder.h
ASN_MODULE_SOURCES+=xer_decoder.c
ASN_MODULE_HEADERS+=xer_encoder.h
ASN_MODULE_SOURCES+=xer_encoder.c
ASN_MODULE_HEADERS+=per_support.h
ASN_MODULE_SOURCES+=per_support.c
ASN_MODULE_HEADERS+=per_decoder.h
ASN_MODULE_SOURCES+=per_decoder.c
ASN_MODULE_HEADERS+=per_encoder.h
ASN_MODULE_SOURCES+=per_encoder.c
ASN_MODULE_HEADERS+=per_opentype.h
ASN_MODULE_SOURCES+=per_opentype.c

CFLAGS += -Wall -I. -O #-g -DDEBUG
SHARED_FLAGS = -fPIC -shared

# Change compiler to transplant
#CROSS_COMPILE = arm-linux-gnueabihf-
CC = $(CROSS_COMPILE)gcc
AR = $(CROSS_COMPILE)ar

OBJS=${ASN_MODULE_SOURCES:.c=.o}

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

libj2735.a: $(OBJS)
	$(AR) rcs $@ $^
	mv $@ ../lib/$@

libj2735.so: $(OBJS) 
	$(CC) $(OBJS) $(CFLAGS) $(SHARED_FLAGS) -o $@
	mv $@ ../lib/$@

clean:
	rm -f $(OBJS) 
