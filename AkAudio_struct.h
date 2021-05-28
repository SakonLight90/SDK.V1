// Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8 {
	EndOfEvent,
	Marker,
	Duration,
	Starvation,
	MusicPlayStarted,
	MusicSyncBeat,
	MusicSyncBar,
	MusicSyncEntry,
	MusicSyncExit,
	MusicSyncGrid,
	MusicSyncUserCue,
	MusicSyncPoint,
	MIDIEvent,
	EAkCallbackType_MAX,
};

// Enum AkAudio.EAkResult
enum class EAkResult : uint8 {
	NotImplemented,
	Success,
	Fail,
	PartialSuccess,
	NotCompatible,
	AlreadyConnected,
	NameNotSet,
	InvalidFile,
	AudioFileHeaderTooLarge,
	MaxReached,
	InputsInUsed,
	OutputsInUsed,
	InvalidName,
	NameAlreadyInUse,
	InvalidID,
	IDNotFound,
	InvalidInstanceID,
	NoMoreData,
	NoSourceAvailable,
	StateGroupAlreadyExists,
	InvalidStateGroup,
	ChildAlreadyHasAParent,
	InvalidLanguage,
	CannotAddItseflAsAChild,
	Reserved1,
	Reserved2,
	Reserved3,
	Reserved4,
	Reserved5,
	UserNotInList,
	NoTransitionPoint,
	InvalidParameter,
	ParameterAdjusted,
	IsA3DSound,
	NotA3DSound,
	ElementAlreadyInList,
	PathNotFound,
	PathNoVertices,
	PathNotRunning,
	PathNotPaused,
	PathNodeAlreadyInList,
	PathNodeNotInList,
	VoiceNotFound,
	DataNeeded,
	NoDataNeeded,
	DataReady,
	NoDataReady,
	NoMoreSlotAvailable,
	SlotNotFound,
	ProcessingOnly,
	MemoryLeak,
	CorruptedBlockList,
	InsufficientMemory,
	Cancelled,
	UnknownBankID,
	IsProcessing,
	BankReadError,
	InvalidSwitchType,
	VoiceDone,
	UnknownEnvironment,
	EnvironmentInUse,
	UnknownObject,
	NoConversionNeeded,
	FormatNotReady,
	WrongBankVersion,
	DataReadyNoProcess,
	FileNotFound,
	DeviceNotReady,
	CouldNotCreateSecBuffer,
	BankAlreadyLoaded,
	Reserved6,
	RenderedFX,
	ProcessNeeded,
	ProcessDone,
	MemManagerNotInitialized,
	StreamMgrNotInitialized,
	SSEInstructionsNotSupported,
	Busy,
	UnsupportedChannelConfig,
	PluginMediaNotAvailable,
	MustBeVirtualized,
	CommandTooLarge,
	RejectedByFilter,
	InvalidCustomPlatformName,
	DLLCannotLoad,
	DLLPathNotFound,
	NoJavaVM,
	OpenSLError,
	PluginNotRegistered,
	DataAlignmentError,
	EAkResult_MAX,
};

// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8 {
	Wall,
	Ceiling,
	Floor,
	EReflectionFilterBits_MAX,
};

// Enum AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8 {
	AkMidiCcNone,
	AkMidiCcBankSelectCoarse,
	AkMidiCcModWheelCoarse,
	AkMidiCcBreathCtrlCoarse,
	AkMidiCcCtrl3Coarse,
	AkMidiCcFootPedalCoarse,
	AkMidiCcPortamentoCoarse,
	AkMidiCcDataEntryCoarse,
	AkMidiCcVolumeCoarse,
	AkMidiCcBalanceCoarse,
	AkMidiCcCtrl9Coarse,
	AkMidiCcPanPositionCoarse,
	AkMidiCcExpressionCoarse,
	AkMidiCcEffectCtrl1Coarse,
	AkMidiCcEffectCtrl2Coarse,
	AkMidiCcCtrl14Coarse,
	AkMidiCcCtrl15Coarse,
	AkMidiCcGenSlider1,
	AkMidiCcGenSlider2,
	AkMidiCcGenSlider3,
	AkMidiCcGenSlider4,
	AkMidiCcCtrl20Coarse,
	AkMidiCcCtrl21Coarse,
	AkMidiCcCtrl22Coarse,
	AkMidiCcCtrl23Coarse,
	AkMidiCcCtrl24Coarse,
	AkMidiCcCtrl25Coarse,
	AkMidiCcCtrl26Coarse,
	AkMidiCcCtrl27Coarse,
	AkMidiCcCtrl28Coarse,
	AkMidiCcCtrl29Coarse,
	AkMidiCcCtrl30Coarse,
	AkMidiCcCtrl31Coarse,
	AkMidiCcBankSelectFine,
	AkMidiCcModWheelFine,
	AkMidiCcBreathCtrlFine,
	AkMidiCcCtrl3Fine,
	AkMidiCcFootPedalFine,
	AkMidiCcPortamentoFine,
	AkMidiCcDataEntryFine,
	AkMidiCcVolumeFine,
	AkMidiCcBalanceFine,
	AkMidiCcCtrl9Fine,
	AkMidiCcPanPositionFine,
	AkMidiCcExpressionFine,
	AkMidiCcEffectCtrl1Fine,
	AkMidiCcEffectCtrl2Fine,
	AkMidiCcCtrl14Fine,
	AkMidiCcCtrl15Fine,
	AkMidiCcCtrl20Fine,
	AkMidiCcCtrl21Fine,
	AkMidiCcCtrl22Fine,
	AkMidiCcCtrl23Fine,
	AkMidiCcCtrl24Fine,
	AkMidiCcCtrl25Fine,
	AkMidiCcCtrl26Fine,
	AkMidiCcCtrl27Fine,
	AkMidiCcCtrl28Fine,
	AkMidiCcCtrl29Fine,
	AkMidiCcCtrl30Fine,
	AkMidiCcCtrl31Fine,
	AkMidiCcHoldPedal,
	AkMidiCcPortamentoOnOff,
	AkMidiCcSustenutoPedal,
	AkMidiCcSoftPedal,
	AkMidiCcLegatoPedal,
	AkMidiCcHoldPedal2,
	AkMidiCcSoundVariation,
	AkMidiCcSoundTimbre,
	AkMidiCcSoundReleaseTime,
	AkMidiCcSoundAttackTime,
	AkMidiCcSoundBrightness,
	AkMidiCcSoundCtrl6,
	AkMidiCcSoundCtrl7,
	AkMidiCcSoundCtrl8,
	AkMidiCcSoundCtrl9,
	AkMidiCcSoundCtrl10,
	AkMidiCcGeneralButton1,
	AkMidiCcGeneralButton2,
	AkMidiCcGeneralButton3,
	AkMidiCcGeneralButton4,
	AkMidiCcReverbLevel,
	AkMidiCcTremoloLevel,
	AkMidiCcChorusLevel,
	AkMidiCcCelesteLevel,
	AkMidiCcPhaserLevel,
	AkMidiCcDataButtonP1,
	AkMidiCcDataButtonM1,
	AkMidiCcNonRegisterCoarse,
	AkMidiCcNonRegisterFine,
	AkMidiCcAllSoundOff,
	AkMidiCcAllControllersOff,
	AkMidiCcLocalKeyboard,
	AkMidiCcAllNotesOff,
	AkMidiCcOmniModeOff,
	AkMidiCcOmniModeOn,
	AkMidiCcOmniMonophonicOn,
	AkMidiCcOmniPolyphonicOn,
	EAkMidiCcValues_MAX,
};

// Enum AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint8 {
	AkMidiEventTypeNone,
	AkMidiEventTypeInvalid,
	AkMidiEventTypeNoteOff,
	AkMidiEventTypeNoteOn,
	AkMidiEventTypeNoteAftertouch,
	AkMidiEventTypeController,
	AkMidiEventTypeProgramChange,
	AkMidiEventTypeChannelAftertouch,
	AkMidiEventTypePitchBend,
	AkMidiEventTypeSysex,
	AkMidiEventTypeEscape,
	AkMidiEventTypeMeta,
	EAkMidiEventType_MAX,
};

// Enum AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8 {
	Log3,
	Sine,
	Log1,
	InvSCurve,
	Linear,
	SCurve,
	Exp1,
	SineRecip,
	Exp3,
	LastFadeCurve,
	Constant,
	EAkCurveInterpolation_MAX,
};

// Enum AkAudio.AkActionOnEventType
enum class AkActionOnEventType : uint8 {
	Stop,
	Pause,
	Resume,
	Break,
	ReleaseEnvelope,
	AkActionOnEventType_MAX,
};

// Enum AkAudio.AkMultiPositionType
enum class AkMultiPositionType : uint8 {
	SingleSource,
	MultiSources,
	MultiDirections,
	AkMultiPositionType_MAX,
};

// Enum AkAudio.AkChannelConfiguration
enum class AkChannelConfiguration : uint8 {
	Ak_Parent,
	Ak_LFE,
	Ak_1_1,
	Ak_2_1,
	Ak_2_2,
	Ak_3_1,
	Ak_3_2,
	Ak_4_1,
	Ak_4_2,
	Ak_5_1,
	Ak_5_2,
	Ak_7_2,
	Ak_5_1_3,
	Ak_7_1_3,
	Ak_7_1_5,
	Ak_Auro_9_2,
	Ak_Auro_10_2,
	Ak_Auro_11_2,
	Ak_Auro_13_2,
	Ak_Ambisonics_1st_order,
	Ak_Ambisonics_2nd_order,
	Ak_Ambisonics_3rd_order,
	Ak_MAX,
};

// Enum AkAudio.AkAcousticPortalState
enum class AkAcousticPortalState : uint8 {
	Closed,
	Open,
	AkAcousticPortalState_MAX,
};

// Enum AkAudio.PanningRule
enum class PanningRule : uint8 {
	PanningRule_Speakers,
	PanningRule_Headphones,
	PanningRule_MAX,
};

// ScriptStruct AkAudio.AKWaapiJsonObject
// Size: 0x10 (Inherited: 0x00)
struct FAKWaapiJsonObject {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkWaapiSubscriptionId
// Size: 0x08 (Inherited: 0x00)
struct FAkWaapiSubscriptionId {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// Size: 0x01 (Inherited: 0x00)
struct FAkAmbSoundCheckpointRecord {
	bool bCurrentlyPlaying; // 0x00(0x01)
};

// ScriptStruct AkAudio.AkSegmentInfo
// Size: 0x24 (Inherited: 0x00)
struct FAkSegmentInfo {
	int32_t CurrentPosition; // 0x00(0x04)
	int32_t PreEntryDuration; // 0x04(0x04)
	int32_t ActiveDuration; // 0x08(0x04)
	int32_t PostExitDuration; // 0x0c(0x04)
	int32_t RemainingLookAheadTime; // 0x10(0x04)
	float BeatDuration; // 0x14(0x04)
	float BarDuration; // 0x18(0x04)
	float GridDuration; // 0x1c(0x04)
	float GridOffset; // 0x20(0x04)
};

// ScriptStruct AkAudio.AkMidiEventBase
// Size: 0x02 (Inherited: 0x00)
struct FAkMidiEventBase {
	enum class EAkMidiEventType Type; // 0x00(0x01)
	char Chan; // 0x01(0x01)
};

// ScriptStruct AkAudio.AkMidiProgramChange
// Size: 0x03 (Inherited: 0x02)
struct FAkMidiProgramChange : FAkMidiEventBase {
	char ProgramNum; // 0x02(0x01)
};

// ScriptStruct AkAudio.AkMidiChannelAftertouch
// Size: 0x03 (Inherited: 0x02)
struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	char Value; // 0x02(0x01)
};

// ScriptStruct AkAudio.AkMidiNoteAftertouch
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	char Note; // 0x02(0x01)
	char Value; // 0x03(0x01)
};

// ScriptStruct AkAudio.AkMidiPitchBend
// Size: 0x08 (Inherited: 0x02)
struct FAkMidiPitchBend : FAkMidiEventBase {
	char ValueLsb; // 0x02(0x01)
	char ValueMsb; // 0x03(0x01)
	int32_t FullValue; // 0x04(0x04)
};

// ScriptStruct AkAudio.AkMidiCc
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiCc : FAkMidiEventBase {
	enum class EAkMidiCcValues Cc; // 0x02(0x01)
	char Value; // 0x03(0x01)
};

// ScriptStruct AkAudio.AkMidiNoteOnOff
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiNoteOnOff : FAkMidiEventBase {
	char Note; // 0x02(0x01)
	char Velocity; // 0x03(0x01)
};

// ScriptStruct AkAudio.AkMidiGeneric
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiGeneric : FAkMidiEventBase {
	char Param1; // 0x02(0x01)
	char Param2; // 0x03(0x01)
};

// ScriptStruct AkAudio.AkBoolPropertyToControl
// Size: 0x10 (Inherited: 0x00)
struct FAkBoolPropertyToControl {
	struct FString ItemProperty; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkPropertyToControl
// Size: 0x10 (Inherited: 0x00)
struct FAkPropertyToControl {
	struct FString ItemProperty; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkWwiseItemToControl
// Size: 0x40 (Inherited: 0x00)
struct FAkWwiseItemToControl {
	struct FAkWwiseObjectDetails ItemPicked; // 0x00(0x30)
	struct FString ItemPath; // 0x30(0x10)
};

// ScriptStruct AkAudio.AkWwiseObjectDetails
// Size: 0x30 (Inherited: 0x00)
struct FAkWwiseObjectDetails {
	struct FString ItemName; // 0x00(0x10)
	struct FString ItemPath; // 0x10(0x10)
	struct FString ItemId; // 0x20(0x10)
};

// ScriptStruct AkAudio.AkPoly
// Size: 0x10 (Inherited: 0x00)
struct FAkPoly {
	struct UAkAcousticTexture* Texture; // 0x00(0x08)
	bool EnableSurface; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct AkAudio.AkWaapiFieldNames
// Size: 0x10 (Inherited: 0x00)
struct FAkWaapiFieldNames {
	struct FString FieldName; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkWaapiUri
// Size: 0x10 (Inherited: 0x00)
struct FAkWaapiUri {
	struct FString Uri; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// Size: 0x20 (Inherited: 0x00)
struct FAkAudioEventTrackKey {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAkAudioEventSection* Section; // 0x20(0x08)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAkAudioRTPCSection* Section; // 0x20(0x08)
};

// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneFloatChannelSerializationHelper {
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x00(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<int32_t> Times; // 0x08(0x10)
	struct TArray<struct FMovieSceneFloatValueSerializationHelper> Values; // 0x18(0x10)
	float DefaultValue; // 0x28(0x04)
	bool bHasDefaultValue; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
// Size: 0x1c (Inherited: 0x00)
struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x00(0x04)
	enum class ERichCurveInterpMode InterpMode; // 0x04(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FMovieSceneTangentDataSerializationHelper Tangent; // 0x08(0x14)
};

// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x00(0x04)
	float LeaveTangent; // 0x04(0x04)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ArriveTangentWeight; // 0x0c(0x04)
	float LeaveTangentWeight; // 0x10(0x04)
};

