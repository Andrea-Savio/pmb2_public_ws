
"use strict";

let ASREvent = require('./ASREvent.js');
let ASRStatus = require('./ASRStatus.js');
let ASRLangModelMngmt = require('./ASRLangModelMngmt.js');
let I18nText = require('./I18nText.js');
let TtsMark = require('./TtsMark.js');
let ASRSrvResponse = require('./ASRSrvResponse.js');
let TtsText = require('./TtsText.js');
let AudioPlayerState = require('./AudioPlayerState.js');
let ASRActivation = require('./ASRActivation.js');
let asrupdate = require('./asrupdate.js');
let DirectionOfArrival = require('./DirectionOfArrival.js');
let ASRLanguage = require('./ASRLanguage.js');
let Input = require('./Input.js');
let AudioDeviceDescription = require('./AudioDeviceDescription.js');
let actiontag = require('./actiontag.js');
let WebGuiEvent = require('./WebGuiEvent.js');
let InputArgument = require('./InputArgument.js');
let VoiceActivity = require('./VoiceActivity.js');
let ASRSrvRequest = require('./ASRSrvRequest.js');
let I18nArgument = require('./I18nArgument.js');
let EnablingSoundLocalisation = require('./EnablingSoundLocalisation.js');
let TTSstate = require('./TTSstate.js');
let audiosignal = require('./audiosignal.js');
let asrresult = require('./asrresult.js');
let ASRFileAction = require('./ASRFileAction.js');
let ASRFileResult = require('./ASRFileResult.js');
let SoundResult = require('./SoundResult.js');
let ASRFileActionFeedback = require('./ASRFileActionFeedback.js');
let TtsActionFeedback = require('./TtsActionFeedback.js');
let ASRFileActionGoal = require('./ASRFileActionGoal.js');
let AudioPlayActionGoal = require('./AudioPlayActionGoal.js');
let TtsActionGoal = require('./TtsActionGoal.js');
let ASRFileFeedback = require('./ASRFileFeedback.js');
let AudioPlayActionFeedback = require('./AudioPlayActionFeedback.js');
let AudioPlayFeedback = require('./AudioPlayFeedback.js');
let SoundAction = require('./SoundAction.js');
let TtsActionResult = require('./TtsActionResult.js');
let SoundActionFeedback = require('./SoundActionFeedback.js');
let TtsResult = require('./TtsResult.js');
let AudioPlayGoal = require('./AudioPlayGoal.js');
let ASRFileGoal = require('./ASRFileGoal.js');
let SoundActionGoal = require('./SoundActionGoal.js');
let SoundActionResult = require('./SoundActionResult.js');
let TtsFeedback = require('./TtsFeedback.js');
let AudioPlayActionResult = require('./AudioPlayActionResult.js');
let ASRFileActionResult = require('./ASRFileActionResult.js');
let TtsAction = require('./TtsAction.js');
let SoundFeedback = require('./SoundFeedback.js');
let SoundGoal = require('./SoundGoal.js');
let TtsGoal = require('./TtsGoal.js');
let AudioPlayAction = require('./AudioPlayAction.js');
let AudioPlayResult = require('./AudioPlayResult.js');

module.exports = {
  ASREvent: ASREvent,
  ASRStatus: ASRStatus,
  ASRLangModelMngmt: ASRLangModelMngmt,
  I18nText: I18nText,
  TtsMark: TtsMark,
  ASRSrvResponse: ASRSrvResponse,
  TtsText: TtsText,
  AudioPlayerState: AudioPlayerState,
  ASRActivation: ASRActivation,
  asrupdate: asrupdate,
  DirectionOfArrival: DirectionOfArrival,
  ASRLanguage: ASRLanguage,
  Input: Input,
  AudioDeviceDescription: AudioDeviceDescription,
  actiontag: actiontag,
  WebGuiEvent: WebGuiEvent,
  InputArgument: InputArgument,
  VoiceActivity: VoiceActivity,
  ASRSrvRequest: ASRSrvRequest,
  I18nArgument: I18nArgument,
  EnablingSoundLocalisation: EnablingSoundLocalisation,
  TTSstate: TTSstate,
  audiosignal: audiosignal,
  asrresult: asrresult,
  ASRFileAction: ASRFileAction,
  ASRFileResult: ASRFileResult,
  SoundResult: SoundResult,
  ASRFileActionFeedback: ASRFileActionFeedback,
  TtsActionFeedback: TtsActionFeedback,
  ASRFileActionGoal: ASRFileActionGoal,
  AudioPlayActionGoal: AudioPlayActionGoal,
  TtsActionGoal: TtsActionGoal,
  ASRFileFeedback: ASRFileFeedback,
  AudioPlayActionFeedback: AudioPlayActionFeedback,
  AudioPlayFeedback: AudioPlayFeedback,
  SoundAction: SoundAction,
  TtsActionResult: TtsActionResult,
  SoundActionFeedback: SoundActionFeedback,
  TtsResult: TtsResult,
  AudioPlayGoal: AudioPlayGoal,
  ASRFileGoal: ASRFileGoal,
  SoundActionGoal: SoundActionGoal,
  SoundActionResult: SoundActionResult,
  TtsFeedback: TtsFeedback,
  AudioPlayActionResult: AudioPlayActionResult,
  ASRFileActionResult: ASRFileActionResult,
  TtsAction: TtsAction,
  SoundFeedback: SoundFeedback,
  SoundGoal: SoundGoal,
  TtsGoal: TtsGoal,
  AudioPlayAction: AudioPlayAction,
  AudioPlayResult: AudioPlayResult,
};
