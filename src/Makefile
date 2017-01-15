default: libj2735.a
# Can also be libj2735.so

rebuild:
	$(MAKE) clean
	$(MAKE) regen-makefile
	$(MAKE)
	$(MAKE) clean
	$(MAKE) mk2

CFLAGS+=-Werror -Wall -I.. -I../../../../ieee1609/kernel/include/ -I../../../../cohda/kernel/include/

# Comment/uncomment the following line to disable/enable debugging
DEBUG = n
ifeq ($(DEBUG),y)
  # "-O" is needed to expand inlines
  CFLAGS += -O -g -DDEBUG 
else
CFLAGS += -O2
endif

# Change compiler to transplant
#CROSS_COMPILE = arm-linux-gnueabihf-
CC = $(CROSS_COMPILE)gcc
AR = $(CROSS_COMPILE)ar

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
ASN_CONVERTER_SOURCES+=converter-sample.c


lib_LTLIBRARIES=libsomething.la
libsomething_la_SOURCES=$(ASN_MODULE_SOURCES) $(ASN_MODULE_HEADERS)

# This file may be used as an input for make(3)
# Remove the lines below to convert it into a pure .am file
TARGET = dsrc-bsm
CFLAGS += -DPDU=BasicSafetyMessage -I.
OBJS=${ASN_MODULE_SOURCES:.c=.o} ${ASN_CONVERTER_SOURCES:.c=.o}

all: BasicSafetyMessage.c $(TARGET)

$(TARGET): ${OBJS}
	$(CC) $(CFLAGS) -o $(TARGET) ${OBJS} $(LDFLAGS) $(LIBS)

.SUFFIXES:
.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean: clean-extra
	rm -f $(TARGET)
	rm -f $(OBJS)

regen: regenerate-from-asn1-source

regenerate-from-asn1-source-ORIG:
	../../../../tools/asn1c/asn1c/asn1c -S ../../../../tools/asn1c/skeletons -pdu=BasicSafetyMessage -fcompound-names -fnative-types DSRC_R36_Source.ASN


LIB_OBJS=${ASN_MODULE_SOURCES:.c=.o}

ARCH ?= $(shell uname --machine)

libj2735.a: $(LIB_OBJS)
	$(AR) rcs $@ $^

SHARED_FLAG = -fPIC -shared

libj2735.so: $(ASN_MODULE_SOURCES) $(ASN_MODULE_HEADERS)
	$(CC) $(ASN_MODULE_SOURCES) $(CFLAGS) $(SHARED_FLAG) -o $@

clean-extra:
	rm -f libbsm.a
	rm -f $(LIB_OBJS)
	rm -f *.orig
	rm -f .Makefile.*.old

regenerate-from-asn1-source: regenerate-from-asn1-source-ORIG mangle

mangle:
	../MangleFiles.py --clobber --verbose -- ../MangleFiles.list

BasicSafetyMessage.c: ../sample.makefile.regen DSRC_R36_Source.ASN
	$(MAKE) regen-makefile
	@touch BasicSafetyMessage.c
	$(MAKE)

regen-makefile:
	cp Makefile .Makefile.$$.old
	ASN1CMDOPTS="-fcompound-names -fnative-types" \
	ASN1MODULES="DSRC_R36_Source.ASN" \
	ASN1PDU=BasicSafetyMessage \
	PROGNAME=dsrc-bsm \
	../sample.makefile.regen
	$(MAKE) mangle

check: ${TARGET} check-ber check-xer check-per
	@echo ================
	@echo All tests passed
	@echo ================

check-ber:
	@if test -f sample-BasicSafetyMessage-1.[db]er ; then \
	for f in sample-BasicSafetyMessage-*.[db]er; do \
	for b in 1 17 33 980 8192; do \
	echo "Recoding $$f into XER and back ($$b)..."; \
	./${TARGET} -b $$b -iber -oxer $$f > ./.tmp.1.$$$$ || exit 2; \
	./${TARGET} -b $$b -ixer -oxer ./.tmp.1.$$$$ > ./.tmp.2.$$$$ || exit 3; \
	diff ./.tmp.1.$$$$ ./.tmp.2.$$$$ || exit 4; \
	rm -f ./.tmp.[12].$$$$; \
	echo "Test junking $$f (please wait)..."; \
	./${TARGET} -J0.0001 -n 1000 -b $$b -iber -onull $$f || exit 5; \
	./${TARGET} -J0.001 -n 1000 -b $$b -iber -onull $$f || exit 6; \
	done; done; fi

check-xer:
	@if test -f sample-BasicSafetyMessage-1.xer ; then \
	for f in sample-BasicSafetyMessage-*.xer; do \
	for b in 1 17 33 980 8192; do \
	echo "Recoding $$f into DER and back ($$b)..."; \
	./${TARGET} -b $$b -ixer -oder $$f > ./.tmp.1.$$$$ || exit 2; \
	./${TARGET} -b $$b -iber -oxer ./.tmp.1.$$$$ > ./.tmp.2.$$$$ || exit 3; \
	diff $$f ./.tmp.2.$$$$ || exit 4; \
	rm -f ./.tmp.[12].$$$$; \
	echo "Test junking $$f (please wait)..."; \
	./${TARGET} -J0.0001 -n 1000 -b $$b -ixer -onull $$f || exit 5; \
	./${TARGET} -J0.001 -n 1000 -b $$b -ixer -onull $$f || exit 6; \
	done; done; fi

check-per:
	@if test -f sample-BasicSafetyMessage-1-nopad.per ; then \
	for f in sample-BasicSafetyMessage-[1-9]-nopad.per; do \
	for b in 1 17 33 980 8192; do \
	echo "Recoding non-padded $$f into DER into XER and back ($$b)..."; \
	./${TARGET} -b $$b -per-nopad -iper -oder $$f > ./.tmp.1.$$$$ || exit 2; \
	./${TARGET} -b $$b -iber -oxer ./.tmp.1.$$$$ > ./.tmp.2.$$$$ || exit 3; \
	./${TARGET} -b $$b -ixer -oder ./.tmp.2.$$$$ > ./.tmp.3.$$$$ || exit 4; \
	diff ./.tmp.1.$$$$ ./.tmp.3.$$$$ || exit 5; \
	rm -f ./.tmp.[123].$$$$; \
	echo "Test junking $$f (please wait)..."; \
	./${TARGET} -J0.0001 -n 1000 -b $$b -per-nopad -iper -onull $$f || exit 6; \
	./${TARGET} -J0.001 -n 1000 -b $$b -per-nopad -iper -onull $$f || exit 7; \
	done; done; fi
	@if test -f sample-BasicSafetyMessage-1.per ; then \
	for f in sample-*-[1-9].per; do \
	pdu=`echo $$f | sed -E -e "s/sample-([A-Za-z-]+)-[0-9].*/\\1/"`; \
	for b in 1 17 33 980 8192; do \
	echo "Recoding $$f into DER into XER and back ($$b)..."; \
	./${TARGET} -b $$b -p $$pdu -iper -oder $$f > ./.tmp.1.$$$$ || exit 3; \
	./${TARGET} -b $$b -p $$pdu -iber -oxer ./.tmp.1.$$$$ > ./.tmp.2.$$$$ || exit 4; \
	./${TARGET} -b $$b -p $$pdu -ixer -oper ./.tmp.2.$$$$ > ./.tmp.1.$$$$ || exit 5; \
	diff $$f ./.tmp.1.$$$$ || exit 6; \
	rm -f ./.tmp.[12].$$$$; \
	echo "Test junking $$f (please wait)..."; \
	./${TARGET} -J0.0001 -n 1000 -b $$b -iper -onull $$f || exit 7; \
	./${TARGET} -J0.001 -n 1000 -b $$b -iper -onull $$f || exit 8; \
	done; done; fi

distclean: clean
	rm -f $(ASN_MODULE_SOURCES)
	rm -f $(ASN_MODULE_HEADERS)
	rm -f $(ASN_CONVERTER_SOURCES) $(ASN_CONVERTER_HEADERS)
	rm -f Makefile.am.sample
	rm -f libbsm*.a

mk2:
	env ARCH=arm PATH=$(PATH):/opt/freescale/usr/local/gcc-4.1.2-glibc-2.5-nptl-3/arm-none-linux-gnueabi/bin CROSS_COMPILE="ccache arm-none-linux-gnueabi-" $(MAKE)

