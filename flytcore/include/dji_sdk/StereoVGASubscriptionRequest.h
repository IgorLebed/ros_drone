// Generated by gencpp from file dji_sdk/StereoVGASubscriptionRequest.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_STEREOVGASUBSCRIPTIONREQUEST_H
#define DJI_SDK_MESSAGE_STEREOVGASUBSCRIPTIONREQUEST_H


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
struct StereoVGASubscriptionRequest_
{
  typedef StereoVGASubscriptionRequest_<ContainerAllocator> Type;

  StereoVGASubscriptionRequest_()
    : vga_freq(0)
    , front_vga(0)
    , unsubscribe_vga(0)  {
    }
  StereoVGASubscriptionRequest_(const ContainerAllocator& _alloc)
    : vga_freq(0)
    , front_vga(0)
    , unsubscribe_vga(0)  {
  (void)_alloc;
    }



   typedef uint8_t _vga_freq_type;
  _vga_freq_type vga_freq;

   typedef uint8_t _front_vga_type;
  _front_vga_type front_vga;

   typedef uint8_t _unsubscribe_vga_type;
  _unsubscribe_vga_type unsubscribe_vga;



  enum {
    VGA_20_HZ = 0u,
    VGA_10_HZ = 1u,
  };


  typedef boost::shared_ptr< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StereoVGASubscriptionRequest_

typedef ::dji_sdk::StereoVGASubscriptionRequest_<std::allocator<void> > StereoVGASubscriptionRequest;

typedef boost::shared_ptr< ::dji_sdk::StereoVGASubscriptionRequest > StereoVGASubscriptionRequestPtr;
typedef boost::shared_ptr< ::dji_sdk::StereoVGASubscriptionRequest const> StereoVGASubscriptionRequestConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "42bba0e546d732e14c2e4218265204c4";
  }

  static const char* value(const ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x42bba0e546d732e1ULL;
  static const uint64_t static_value2 = 0x4c2e4218265204c4ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/StereoVGASubscriptionRequest";
  }

  static const char* value(const ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 VGA_20_HZ = 0\n\
uint8 VGA_10_HZ = 1\n\
\n\
\n\
uint8 vga_freq\n\
\n\
\n\
uint8 front_vga\n\
\n\
\n\
\n\
uint8 unsubscribe_vga\n\
\n\
";
  }

  static const char* value(const ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.vga_freq);
      stream.next(m.front_vga);
      stream.next(m.unsubscribe_vga);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StereoVGASubscriptionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::StereoVGASubscriptionRequest_<ContainerAllocator>& v)
  {
    s << indent << "vga_freq: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vga_freq);
    s << indent << "front_vga: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.front_vga);
    s << indent << "unsubscribe_vga: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.unsubscribe_vga);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_STEREOVGASUBSCRIPTIONREQUEST_H
