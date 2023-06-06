
"use strict";

let GetSubMap = require('./GetSubMap.js')
let SaveMap = require('./SaveMap.js')
let FinalApproachPose = require('./FinalApproachPose.js')
let Acknowledgment = require('./Acknowledgment.js')
let ListMaps = require('./ListMaps.js')
let VisualLocRecognize = require('./VisualLocRecognize.js')
let ChangeMap = require('./ChangeMap.js')
let SafetyZone = require('./SafetyZone.js')
let SetSubMapFloor = require('./SetSubMapFloor.js')
let RegisterSync = require('./RegisterSync.js')
let GetNodes = require('./GetNodes.js')
let SetMapConfiguration = require('./SetMapConfiguration.js')
let GetPOI = require('./GetPOI.js')
let GetMapConfiguration = require('./GetMapConfiguration.js')
let SetPOI = require('./SetPOI.js')
let DisableEmergency = require('./DisableEmergency.js')
let ChangeSyncMap = require('./ChangeSyncMap.js')
let ChangeBuilding = require('./ChangeBuilding.js')
let RenameMap = require('./RenameMap.js')

module.exports = {
  GetSubMap: GetSubMap,
  SaveMap: SaveMap,
  FinalApproachPose: FinalApproachPose,
  Acknowledgment: Acknowledgment,
  ListMaps: ListMaps,
  VisualLocRecognize: VisualLocRecognize,
  ChangeMap: ChangeMap,
  SafetyZone: SafetyZone,
  SetSubMapFloor: SetSubMapFloor,
  RegisterSync: RegisterSync,
  GetNodes: GetNodes,
  SetMapConfiguration: SetMapConfiguration,
  GetPOI: GetPOI,
  GetMapConfiguration: GetMapConfiguration,
  SetPOI: SetPOI,
  DisableEmergency: DisableEmergency,
  ChangeSyncMap: ChangeSyncMap,
  ChangeBuilding: ChangeBuilding,
  RenameMap: RenameMap,
};
