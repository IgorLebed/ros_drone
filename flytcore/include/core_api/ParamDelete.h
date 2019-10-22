// Generated by gencpp from file core_api/ParamDelete.msg
// DO NOT EDIT!


#ifndef CORE_API_MESSAGE_PARAMDELETE_H
#define CORE_API_MESSAGE_PARAMDELETE_H

#include <ros/service_traits.h>


#include <core_api/ParamDeleteRequest.h>
#include <core_api/ParamDeleteResponse.h>


namespace core_api
{

struct ParamDelete
{

typedef ParamDeleteRequest Request;
typedef ParamDeleteResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ParamDelete
} // namespace core_api


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::core_api::ParamDelete > {
  static const char* value()
  {
    return "6c6fef353684dfb4c5b339c04372255d";
  }

  static const char* value(const ::core_api::ParamDelete&) { return value(); }
};

template<>
struct DataType< ::core_api::ParamDelete > {
  static const char* value()
  {
    return "core_api/ParamDelete";
  }

  static const char* value(const ::core_api::ParamDelete&) { return value(); }
};


// service_traits::MD5Sum< ::core_api::ParamDeleteRequest> should match 
// service_traits::MD5Sum< ::core_api::ParamDelete > 
template<>
struct MD5Sum< ::core_api::ParamDeleteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::core_api::ParamDelete >::value();
  }
  static const char* value(const ::core_api::ParamDeleteRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::core_api::ParamDeleteRequest> should match 
// service_traits::DataType< ::core_api::ParamDelete > 
template<>
struct DataType< ::core_api::ParamDeleteRequest>
{
  static const char* value()
  {
    return DataType< ::core_api::ParamDelete >::value();
  }
  static const char* value(const ::core_api::ParamDeleteRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::core_api::ParamDeleteResponse> should match 
// service_traits::MD5Sum< ::core_api::ParamDelete > 
template<>
struct MD5Sum< ::core_api::ParamDeleteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::core_api::ParamDelete >::value();
  }
  static const char* value(const ::core_api::ParamDeleteResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::core_api::ParamDeleteResponse> should match 
// service_traits::DataType< ::core_api::ParamDelete > 
template<>
struct DataType< ::core_api::ParamDeleteResponse>
{
  static const char* value()
  {
    return DataType< ::core_api::ParamDelete >::value();
  }
  static const char* value(const ::core_api::ParamDeleteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CORE_API_MESSAGE_PARAMDELETE_H
