// Generated by gencpp from file mavros_msgs/WaypointSetCurrentRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_WAYPOINTSETCURRENTREQUEST_H
#define MAVROS_MSGS_MESSAGE_WAYPOINTSETCURRENTREQUEST_H


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
struct WaypointSetCurrentRequest_
{
  typedef WaypointSetCurrentRequest_<ContainerAllocator> Type;

  WaypointSetCurrentRequest_()
    : wp_seq(0)  {
    }
  WaypointSetCurrentRequest_(const ContainerAllocator& _alloc)
    : wp_seq(0)  {
  (void)_alloc;
    }



   typedef uint16_t _wp_seq_type;
  _wp_seq_type wp_seq;





  typedef boost::shared_ptr< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointSetCurrentRequest_

typedef ::mavros_msgs::WaypointSetCurrentRequest_<std::allocator<void> > WaypointSetCurrentRequest;

typedef boost::shared_ptr< ::mavros_msgs::WaypointSetCurrentRequest > WaypointSetCurrentRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::WaypointSetCurrentRequest const> WaypointSetCurrentRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9541369175e0776b0fef1c988db6840f";
  }

  static const char* value(const ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9541369175e0776bULL;
  static const uint64_t static_value2 = 0x0fef1c988db6840fULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/WaypointSetCurrentRequest";
  }

  static const char* value(const ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
uint16 wp_seq\n\
";
  }

  static const char* value(const ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wp_seq);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointSetCurrentRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::WaypointSetCurrentRequest_<ContainerAllocator>& v)
  {
    s << indent << "wp_seq: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.wp_seq);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_WAYPOINTSETCURRENTREQUEST_H
