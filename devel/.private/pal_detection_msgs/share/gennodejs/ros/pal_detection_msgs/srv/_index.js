
"use strict";

let StopEnrollment = require('./StopEnrollment.js')
let SetDatabase = require('./SetDatabase.js')
let SelectTexturedObject = require('./SelectTexturedObject.js')
let Recognizer = require('./Recognizer.js')
let StartEnrollment = require('./StartEnrollment.js')
let AddTexturedObject = require('./AddTexturedObject.js')
let ChangeObjectRecognizerModel = require('./ChangeObjectRecognizerModel.js')

module.exports = {
  StopEnrollment: StopEnrollment,
  SetDatabase: SetDatabase,
  SelectTexturedObject: SelectTexturedObject,
  Recognizer: Recognizer,
  StartEnrollment: StartEnrollment,
  AddTexturedObject: AddTexturedObject,
  ChangeObjectRecognizerModel: ChangeObjectRecognizerModel,
};
