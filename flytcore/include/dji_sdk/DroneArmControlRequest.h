// Generated by gencpp from file dji_sdk/DroneArmControlRequest.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_DRONEARMCONTROLREQUEST_H
#define DJI_SDK_MESSAGE_DRONEARMCONTROLREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dji_sdk
{
template <class ContainerAllocator>
struct DroneArmControlRequest_
{
  typedef DroneArmControlRequest_<ContainerAllocator> Type;

  DroneArmControlRequest_()
    : arm(0)  {
    }
  DroneArmControlRequest_(const ContainerAllocator& _alloc)
    : arm(0)  {
  (void)_alloc;
    }



   typedef uint8_t _arm_type;
  _arm_type arm;



  enum {
    DISARM_COMMAND = 0u,
    ARM_COMMAND = 1u,
  };


  typedef boost::shared_ptr< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DroneArmControlRequest_

typedef ::dji_sdk::DroneArmControlRequest_<std::allocator<void> > DroneArmControlRequest;

typedef boost::shared_ptr< ::dji_sdk::DroneArmControlRequest > DroneArmControlRequestPtr;
typedef boost::shared_ptr< ::dji_sdk::DroneArmControlRequest const> DroneArmControlRequestConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dji_sdk

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'dji_sdk': ['/home/flytpod/flytos/src/flytOS/flyt_core/core_nodes/dji/dji_sdk/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a248cc5dda0e00340ef213205619580";
  }

  static const char* value(const ::dji_sdk::DroneArmControlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a248cc5dda0e003ULL;
  static const uint64_t static_value2 = 0x40ef213205619580ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/DroneArmControlRequest";
  }

  static const char* value(const ::dji_sdk::DroneArmControlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 DISARM_COMMAND = 0\n\
uint8 ARM_COMMAND    = 1\n\
\n\
\n\
uint8 arm\n\
";
  }

  static const char* value(const ::dji_sdk::DroneArmControlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.arm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DroneArmControlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::DroneArmControlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::DroneArmControlRequest_<ContainerAllocator>& v)
  {
    s << indent << "arm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.arm);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_DRONEARMCONTROLREQUEST_H
