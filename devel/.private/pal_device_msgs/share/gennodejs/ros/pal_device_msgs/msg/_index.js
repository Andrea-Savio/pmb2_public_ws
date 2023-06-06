
"use strict";

let Bumper = require('./Bumper.js');
let LedRainbowParams = require('./LedRainbowParams.js');
let LedFlowParams = require('./LedFlowParams.js');
let LedBlinkParams = require('./LedBlinkParams.js');
let LedGroup = require('./LedGroup.js');
let LedDataArrayParams = require('./LedDataArrayParams.js');
let LedPreProgrammedParams = require('./LedPreProgrammedParams.js');
let LedFixedColorParams = require('./LedFixedColorParams.js');
let LedEffectParams = require('./LedEffectParams.js');
let LedEffectViaTopicParams = require('./LedEffectViaTopicParams.js');
let LedFadeParams = require('./LedFadeParams.js');
let BatteryState = require('./BatteryState.js');
let LedProgressParams = require('./LedProgressParams.js');
let DoTimedLedEffectResult = require('./DoTimedLedEffectResult.js');
let DoTimedLedEffectAction = require('./DoTimedLedEffectAction.js');
let DoTimedLedEffectActionGoal = require('./DoTimedLedEffectActionGoal.js');
let DoTimedLedEffectActionFeedback = require('./DoTimedLedEffectActionFeedback.js');
let DoTimedLedEffectFeedback = require('./DoTimedLedEffectFeedback.js');
let DoTimedLedEffectGoal = require('./DoTimedLedEffectGoal.js');
let DoTimedLedEffectActionResult = require('./DoTimedLedEffectActionResult.js');

module.exports = {
  Bumper: Bumper,
  LedRainbowParams: LedRainbowParams,
  LedFlowParams: LedFlowParams,
  LedBlinkParams: LedBlinkParams,
  LedGroup: LedGroup,
  LedDataArrayParams: LedDataArrayParams,
  LedPreProgrammedParams: LedPreProgrammedParams,
  LedFixedColorParams: LedFixedColorParams,
  LedEffectParams: LedEffectParams,
  LedEffectViaTopicParams: LedEffectViaTopicParams,
  LedFadeParams: LedFadeParams,
  BatteryState: BatteryState,
  LedProgressParams: LedProgressParams,
  DoTimedLedEffectResult: DoTimedLedEffectResult,
  DoTimedLedEffectAction: DoTimedLedEffectAction,
  DoTimedLedEffectActionGoal: DoTimedLedEffectActionGoal,
  DoTimedLedEffectActionFeedback: DoTimedLedEffectActionFeedback,
  DoTimedLedEffectFeedback: DoTimedLedEffectFeedback,
  DoTimedLedEffectGoal: DoTimedLedEffectGoal,
  DoTimedLedEffectActionResult: DoTimedLedEffectActionResult,
};
