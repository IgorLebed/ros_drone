// Generated by gencpp from file core_api/IsAuthenticated.msg
// DO NOT EDIT!


#ifndef CORE_API_MESSAGE_ISAUTHENTICATED_H
#define CORE_API_MESSAGE_ISAUTHENTICATED_H

#include <ros/service_traits.h>


#include <core_api/IsAuthenticatedRequest.h>
#include <core_api/IsAuthenticatedResponse.h>


namespace core_api
{

struct IsAuthenticated
{

typedef IsAuthenticatedRequest Request;
typedef IsAuthenticatedResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct IsAuthenticated
} // namespace core_api


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::core_api::IsAuthenticated > {
  static const char* value()
  {
    return "d77d7c0327f89f653a29b046a4817b94";
  }

  static const char* value(const ::core_api::IsAuthenticated&) { return value(); }
};

template<>
struct DataType< ::core_api::IsAuthenticated > {
  static const char* value()
  {
    return "core_api/IsAuthenticated";
  }

  static const char* value(const ::core_api::IsAuthenticated&) { return value(); }
};


// service_traits::MD5Sum< ::core_api::IsAuthenticatedRequest> should match 
// service_traits::MD5Sum< ::core_api::IsAuthenticated > 
template<>
struct MD5Sum< ::core_api::IsAuthenticatedRequest>
{
  static const char* value()
  {
    return MD5Sum< ::core_api::IsAuthenticated >::value();
  }
  static const char* value(const ::core_api::IsAuthenticatedRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::core_api::IsAuthenticatedRequest> should match 
// service_traits::DataType< ::core_api::IsAuthenticated > 
template<>
struct DataType< ::core_api::IsAuthenticatedRequest>
{
  static const char* value()
  {
    return DataType< ::core_api::IsAuthenticated >::value();
  }
  static const char* value(const ::core_api::IsAuthenticatedRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::core_api::IsAuthenticatedResponse> should match 
// service_traits::MD5Sum< ::core_api::IsAuthenticated > 
template<>
struct MD5Sum< ::core_api::IsAuthenticatedResponse>
{
  static const char* value()
  {
    return MD5Sum< ::core_api::IsAuthenticated >::value();
  }
  static const char* value(const ::core_api::IsAuthenticatedResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::core_api::IsAuthenticatedResponse> should match 
// service_traits::DataType< ::core_api::IsAuthenticated > 
template<>
struct DataType< ::core_api::IsAuthenticatedResponse>
{
  static const char* value()
  {
    return DataType< ::core_api::IsAuthenticated >::value();
  }
  static const char* value(const ::core_api::IsAuthenticatedResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CORE_API_MESSAGE_ISAUTHENTICATED_H
