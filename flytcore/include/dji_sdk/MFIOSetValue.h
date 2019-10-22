// Generated by gencpp from file dji_sdk/MFIOSetValue.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_MFIOSETVALUE_H
#define DJI_SDK_MESSAGE_MFIOSETVALUE_H

#include <ros/service_traits.h>


#include <dji_sdk/MFIOSetValueRequest.h>
#include <dji_sdk/MFIOSetValueResponse.h>


namespace dji_sdk
{

struct MFIOSetValue
{

typedef MFIOSetValueRequest Request;
typedef MFIOSetValueResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MFIOSetValue
} // namespace dji_sdk


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dji_sdk::MFIOSetValue > {
  static const char* value()
  {
    return "7a1c84fd096204723ecbb1a57b618e28";
  }

  static const char* value(const ::dji_sdk::MFIOSetValue&) { return value(); }
};

template<>
struct DataType< ::dji_sdk::MFIOSetValue > {
  static const char* value()
  {
    return "dji_sdk/MFIOSetValue";
  }

  static const char* value(const ::dji_sdk::MFIOSetValue&) { return value(); }
};


// service_traits::MD5Sum< ::dji_sdk::MFIOSetValueRequest> should match 
// service_traits::MD5Sum< ::dji_sdk::MFIOSetValue > 
template<>
struct MD5Sum< ::dji_sdk::MFIOSetValueRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dji_sdk::MFIOSetValue >::value();
  }
  static const char* value(const ::dji_sdk::MFIOSetValueRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_sdk::MFIOSetValueRequest> should match 
// service_traits::DataType< ::dji_sdk::MFIOSetValue > 
template<>
struct DataType< ::dji_sdk::MFIOSetValueRequest>
{
  static const char* value()
  {
    return DataType< ::dji_sdk::MFIOSetValue >::value();
  }
  static const char* value(const ::dji_sdk::MFIOSetValueRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dji_sdk::MFIOSetValueResponse> should match 
// service_traits::MD5Sum< ::dji_sdk::MFIOSetValue > 
template<>
struct MD5Sum< ::dji_sdk::MFIOSetValueResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dji_sdk::MFIOSetValue >::value();
  }
  static const char* value(const ::dji_sdk::MFIOSetValueResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dji_sdk::MFIOSetValueResponse> should match 
// service_traits::DataType< ::dji_sdk::MFIOSetValue > 
template<>
struct DataType< ::dji_sdk::MFIOSetValueResponse>
{
  static const char* value()
  {
    return DataType< ::dji_sdk::MFIOSetValue >::value();
  }
  static const char* value(const ::dji_sdk::MFIOSetValueResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DJI_SDK_MESSAGE_MFIOSETVALUE_H
