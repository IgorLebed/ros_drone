// Generated by gencpp from file mavros_msgs/LogDownloadReqRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_LOGDOWNLOADREQREQUEST_H
#define MAVROS_MSGS_MESSAGE_LOGDOWNLOADREQREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct LogDownloadReqRequest_
{
  typedef LogDownloadReqRequest_<ContainerAllocator> Type;

  LogDownloadReqRequest_()
    : logid(0)  {
    }
  LogDownloadReqRequest_(const ContainerAllocator& _alloc)
    : logid(0)  {
  (void)_alloc;
    }



   typedef uint8_t _logid_type;
  _logid_type logid;





  typedef boost::shared_ptr< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LogDownloadReqRequest_

typedef ::mavros_msgs::LogDownloadReqRequest_<std::allocator<void> > LogDownloadReqRequest;

typedef boost::shared_ptr< ::mavros_msgs::LogDownloadReqRequest > LogDownloadReqRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::LogDownloadReqRequest const> LogDownloadReqRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'mavros_msgs': ['/home/flytpod/flytos/src/flytOS/flyt_core/core_nodes/mavros/mavros_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fbe02b5d02548978cb01166f9d159a68";
  }

  static const char* value(const ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfbe02b5d02548978ULL;
  static const uint64_t static_value2 = 0xcb01166f9d159a68ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/LogDownloadReqRequest";
  }

  static const char* value(const ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
uint8 logid\n\
";
  }

  static const char* value(const ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.logid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LogDownloadReqRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::LogDownloadReqRequest_<ContainerAllocator>& v)
  {
    s << indent << "logid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.logid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_LOGDOWNLOADREQREQUEST_H
