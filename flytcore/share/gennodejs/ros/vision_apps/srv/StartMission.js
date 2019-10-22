// Auto-generated. Do not edit!

// (in-package vision_apps.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class StartMissionRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.holding_time = null;
      this.holding_distance = null;
      this.from_origin = null;
      this.async = null;
    }
    else {
      if (initObj.hasOwnProperty('holding_time')) {
        this.holding_time = initObj.holding_time
      }
      else {
        this.holding_time = 0.0;
      }
      if (initObj.hasOwnProperty('holding_distance')) {
        this.holding_distance = initObj.holding_distance
      }
      else {
        this.holding_distance = 0.0;
      }
      if (initObj.hasOwnProperty('from_origin')) {
        this.from_origin = initObj.from_origin
      }
      else {
        this.from_origin = false;
      }
      if (initObj.hasOwnProperty('async')) {
        this.async = initObj.async
      }
      else {
        this.async = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type StartMissionRequest
    // Serialize message field [holding_time]
    bufferOffset = _serializer.float32(obj.holding_time, buffer, bufferOffset);
    // Serialize message field [holding_distance]
    bufferOffset = _serializer.float32(obj.holding_distance, buffer, bufferOffset);
    // Serialize message field [from_origin]
    bufferOffset = _serializer.bool(obj.from_origin, buffer, bufferOffset);
    // Serialize message field [async]
    bufferOffset = _serializer.bool(obj.async, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type StartMissionRequest
    let len;
    let data = new StartMissionRequest(null);
    // Deserialize message field [holding_time]
    data.holding_time = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [holding_distance]
    data.holding_distance = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [from_origin]
    data.from_origin = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [async]
    data.async = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 10;
  }

  static datatype() {
    // Returns string type for a service object
    return 'vision_apps/StartMissionRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2f9fe1c235d113fba90a58f8c19633a4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 holding_time
    float32 holding_distance
    bool from_origin
    bool async
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new StartMissionRequest(null);
    if (msg.holding_time !== undefined) {
      resolved.holding_time = msg.holding_time;
    }
    else {
      resolved.holding_time = 0.0
    }

    if (msg.holding_distance !== undefined) {
      resolved.holding_distance = msg.holding_distance;
    }
    else {
      resolved.holding_distance = 0.0
    }

    if (msg.from_origin !== undefined) {
      resolved.from_origin = msg.from_origin;
    }
    else {
      resolved.from_origin = false
    }

    if (msg.async !== undefined) {
      resolved.async = msg.async;
    }
    else {
      resolved.async = false
    }

    return resolved;
    }
};

class StartMissionResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.success = null;
      this.error_code = null;
      this.message = null;
    }
    else {
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
      if (initObj.hasOwnProperty('error_code')) {
        this.error_code = initObj.error_code
      }
      else {
        this.error_code = 0;
      }
      if (initObj.hasOwnProperty('message')) {
        this.message = initObj.message
      }
      else {
        this.message = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type StartMissionResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    // Serialize message field [error_code]
    bufferOffset = _serializer.uint8(obj.error_code, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type StartMissionResponse
    let len;
    let data = new StartMissionResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [error_code]
    data.error_code = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [message]
    data.message = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.message.length;
    return length + 6;
  }

  static datatype() {
    // Returns string type for a service object
    return 'vision_apps/StartMissionResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4ad76664b0717ddbf6142456d7398288';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool success
    uint8 error_code
    string message
    
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new StartMissionResponse(null);
    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    if (msg.error_code !== undefined) {
      resolved.error_code = msg.error_code;
    }
    else {
      resolved.error_code = 0
    }

    if (msg.message !== undefined) {
      resolved.message = msg.message;
    }
    else {
      resolved.message = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: StartMissionRequest,
  Response: StartMissionResponse,
  md5sum() { return '26e070e4fb1ebc4987d4d71d8e0de7e5'; },
  datatype() { return 'vision_apps/StartMission'; }
};
