// Generated by gencpp from file core_api/GimbalConfigure.msg
// DO NOT EDIT!


#ifndef CORE_API_MESSAGE_GIMBALCONFIGURE_H
#define CORE_API_MESSAGE_GIMBALCONFIGURE_H

#include <ros/service_traits.h>


#include <core_api/GimbalConfigureRequest.h>
#include <core_api/GimbalConfigureResponse.h>


namespace core_api
{

struct GimbalConfigure
{

typedef GimbalConfigureRequest Request;
typedef GimbalConfigureResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GimbalConfigure
} // namespace core_api


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::core_api::GimbalConfigure > {
  static const char* value()
  {
    return "140f04545dd4676e72d880d299a0bd19";
  }

  static const char* value(const ::core_api::GimbalConfigure&) { return value(); }
};

template<>
struct DataType< ::core_api::GimbalConfigure > {
  static const char* value()
  {
    return "core_api/GimbalConfigure";
  }

  static const char* value(const ::core_api::GimbalConfigure&) { return value(); }
};


// service_traits::MD5Sum< ::core_api::GimbalConfigureRequest> should match 
// service_traits::MD5Sum< ::core_api::GimbalConfigure > 
template<>
struct MD5Sum< ::core_api::GimbalConfigureRequest>
{
  static const char* value()
  {
    return MD5Sum< ::core_api::GimbalConfigure >::value();
  }
  static const char* value(const ::core_api::GimbalConfigureRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::core_api::GimbalConfigureRequest> should match 
// service_traits::DataType< ::core_api::GimbalConfigure > 
template<>
struct DataType< ::core_api::GimbalConfigureRequest>
{
  static const char* value()
  {
    return DataType< ::core_api::GimbalConfigure >::value();
  }
  static const char* value(const ::core_api::GimbalConfigureRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::core_api::GimbalConfigureResponse> should match 
// service_traits::MD5Sum< ::core_api::GimbalConfigure > 
template<>
struct MD5Sum< ::core_api::GimbalConfigureResponse>
{
  static const char* value()
  {
    return MD5Sum< ::core_api::GimbalConfigure >::value();
  }
  static const char* value(const ::core_api::GimbalConfigureResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::core_api::GimbalConfigureResponse> should match 
// service_traits::DataType< ::core_api::GimbalConfigure > 
template<>
struct DataType< ::core_api::GimbalConfigureResponse>
{
  static const char* value()
  {
    return DataType< ::core_api::GimbalConfigure >::value();
  }
  static const char* value(const ::core_api::GimbalConfigureResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CORE_API_MESSAGE_GIMBALCONFIGURE_H
