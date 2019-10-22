// Generated by gencpp from file flyt_ms/DevSrv.msg
// DO NOT EDIT!


#ifndef FLYT_MS_MESSAGE_DEVSRV_H
#define FLYT_MS_MESSAGE_DEVSRV_H

#include <ros/service_traits.h>


#include <flyt_ms/DevSrvRequest.h>
#include <flyt_ms/DevSrvResponse.h>


namespace flyt_ms
{

struct DevSrv
{

typedef DevSrvRequest Request;
typedef DevSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DevSrv
} // namespace flyt_ms


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::flyt_ms::DevSrv > {
  static const char* value()
  {
    return "b791c1a4a4f0cee32b54dd1a73706a59";
  }

  static const char* value(const ::flyt_ms::DevSrv&) { return value(); }
};

template<>
struct DataType< ::flyt_ms::DevSrv > {
  static const char* value()
  {
    return "flyt_ms/DevSrv";
  }

  static const char* value(const ::flyt_ms::DevSrv&) { return value(); }
};


// service_traits::MD5Sum< ::flyt_ms::DevSrvRequest> should match 
// service_traits::MD5Sum< ::flyt_ms::DevSrv > 
template<>
struct MD5Sum< ::flyt_ms::DevSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::flyt_ms::DevSrv >::value();
  }
  static const char* value(const ::flyt_ms::DevSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::flyt_ms::DevSrvRequest> should match 
// service_traits::DataType< ::flyt_ms::DevSrv > 
template<>
struct DataType< ::flyt_ms::DevSrvRequest>
{
  static const char* value()
  {
    return DataType< ::flyt_ms::DevSrv >::value();
  }
  static const char* value(const ::flyt_ms::DevSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::flyt_ms::DevSrvResponse> should match 
// service_traits::MD5Sum< ::flyt_ms::DevSrv > 
template<>
struct MD5Sum< ::flyt_ms::DevSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::flyt_ms::DevSrv >::value();
  }
  static const char* value(const ::flyt_ms::DevSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::flyt_ms::DevSrvResponse> should match 
// service_traits::DataType< ::flyt_ms::DevSrv > 
template<>
struct DataType< ::flyt_ms::DevSrvResponse>
{
  static const char* value()
  {
    return DataType< ::flyt_ms::DevSrv >::value();
  }
  static const char* value(const ::flyt_ms::DevSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // FLYT_MS_MESSAGE_DEVSRV_H
