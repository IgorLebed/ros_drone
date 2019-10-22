// Generated by gencpp from file core_api/ParamSave.msg
// DO NOT EDIT!


#ifndef CORE_API_MESSAGE_PARAMSAVE_H
#define CORE_API_MESSAGE_PARAMSAVE_H

#include <ros/service_traits.h>


#include <core_api/ParamSaveRequest.h>
#include <core_api/ParamSaveResponse.h>


namespace core_api
{

struct ParamSave
{

typedef ParamSaveRequest Request;
typedef ParamSaveResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ParamSave
} // namespace core_api


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::core_api::ParamSave > {
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::core_api::ParamSave&) { return value(); }
};

template<>
struct DataType< ::core_api::ParamSave > {
  static const char* value()
  {
    return "core_api/ParamSave";
  }

  static const char* value(const ::core_api::ParamSave&) { return value(); }
};


// service_traits::MD5Sum< ::core_api::ParamSaveRequest> should match 
// service_traits::MD5Sum< ::core_api::ParamSave > 
template<>
struct MD5Sum< ::core_api::ParamSaveRequest>
{
  static const char* value()
  {
    return MD5Sum< ::core_api::ParamSave >::value();
  }
  static const char* value(const ::core_api::ParamSaveRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::core_api::ParamSaveRequest> should match 
// service_traits::DataType< ::core_api::ParamSave > 
template<>
struct DataType< ::core_api::ParamSaveRequest>
{
  static const char* value()
  {
    return DataType< ::core_api::ParamSave >::value();
  }
  static const char* value(const ::core_api::ParamSaveRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::core_api::ParamSaveResponse> should match 
// service_traits::MD5Sum< ::core_api::ParamSave > 
template<>
struct MD5Sum< ::core_api::ParamSaveResponse>
{
  static const char* value()
  {
    return MD5Sum< ::core_api::ParamSave >::value();
  }
  static const char* value(const ::core_api::ParamSaveResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::core_api::ParamSaveResponse> should match 
// service_traits::DataType< ::core_api::ParamSave > 
template<>
struct DataType< ::core_api::ParamSaveResponse>
{
  static const char* value()
  {
    return DataType< ::core_api::ParamSave >::value();
  }
  static const char* value(const ::core_api::ParamSaveResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CORE_API_MESSAGE_PARAMSAVE_H
