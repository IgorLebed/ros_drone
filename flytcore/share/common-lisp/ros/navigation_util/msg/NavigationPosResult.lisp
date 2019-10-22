; Auto-generated. Do not edit!


(cl:in-package navigation_util-msg)


;//! \htmlinclude NavigationPosResult.msg.html

(cl:defclass <NavigationPosResult> (roslisp-msg-protocol:ros-message)
  ((pose
    :reader pose
    :initarg :pose
    :type geometry_msgs-msg:PoseStamped
    :initform (cl:make-instance 'geometry_msgs-msg:PoseStamped)))
)

(cl:defclass NavigationPosResult (<NavigationPosResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <NavigationPosResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'NavigationPosResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name navigation_util-msg:<NavigationPosResult> is deprecated: use navigation_util-msg:NavigationPosResult instead.")))

(cl:ensure-generic-function 'pose-val :lambda-list '(m))
(cl:defmethod pose-val ((m <NavigationPosResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader navigation_util-msg:pose-val is deprecated.  Use navigation_util-msg:pose instead.")
  (pose m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <NavigationPosResult>) ostream)
  "Serializes a message object of type '<NavigationPosResult>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pose) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <NavigationPosResult>) istream)
  "Deserializes a message object of type '<NavigationPosResult>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pose) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<NavigationPosResult>)))
  "Returns string type for a message object of type '<NavigationPosResult>"
  "navigation_util/NavigationPosResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'NavigationPosResult)))
  "Returns string type for a message object of type 'NavigationPosResult"
  "navigation_util/NavigationPosResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<NavigationPosResult>)))
  "Returns md5sum for a message object of type '<NavigationPosResult>"
  "3f8930d968a3e84d471dff917bb1cdae")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'NavigationPosResult)))
  "Returns md5sum for a message object of type 'NavigationPosResult"
  "3f8930d968a3e84d471dff917bb1cdae")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<NavigationPosResult>)))
  "Returns full string definition for message of type '<NavigationPosResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%geometry_msgs/PoseStamped pose~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'NavigationPosResult)))
  "Returns full string definition for message of type 'NavigationPosResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%geometry_msgs/PoseStamped pose~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <NavigationPosResult>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pose))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <NavigationPosResult>))
  "Converts a ROS message object to a list"
  (cl:list 'NavigationPosResult
    (cl:cons ':pose (pose msg))
))
