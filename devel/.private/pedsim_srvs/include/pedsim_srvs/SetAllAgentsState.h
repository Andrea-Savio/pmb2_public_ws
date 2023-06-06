// Generated by gencpp from file pedsim_srvs/SetAllAgentsState.msg
// DO NOT EDIT!


#ifndef PEDSIM_SRVS_MESSAGE_SETALLAGENTSSTATE_H
#define PEDSIM_SRVS_MESSAGE_SETALLAGENTSSTATE_H

#include <ros/service_traits.h>


#include <pedsim_srvs/SetAllAgentsStateRequest.h>
#include <pedsim_srvs/SetAllAgentsStateResponse.h>


namespace pedsim_srvs
{

struct SetAllAgentsState
{

typedef SetAllAgentsStateRequest Request;
typedef SetAllAgentsStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetAllAgentsState
} // namespace pedsim_srvs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pedsim_srvs::SetAllAgentsState > {
  static const char* value()
  {
    return "326e85f0f7b62adec56b45ab8b56826c";
  }

  static const char* value(const ::pedsim_srvs::SetAllAgentsState&) { return value(); }
};

template<>
struct DataType< ::pedsim_srvs::SetAllAgentsState > {
  static const char* value()
  {
    return "pedsim_srvs/SetAllAgentsState";
  }

  static const char* value(const ::pedsim_srvs::SetAllAgentsState&) { return value(); }
};


// service_traits::MD5Sum< ::pedsim_srvs::SetAllAgentsStateRequest> should match
// service_traits::MD5Sum< ::pedsim_srvs::SetAllAgentsState >
template<>
struct MD5Sum< ::pedsim_srvs::SetAllAgentsStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pedsim_srvs::SetAllAgentsState >::value();
  }
  static const char* value(const ::pedsim_srvs::SetAllAgentsStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pedsim_srvs::SetAllAgentsStateRequest> should match
// service_traits::DataType< ::pedsim_srvs::SetAllAgentsState >
template<>
struct DataType< ::pedsim_srvs::SetAllAgentsStateRequest>
{
  static const char* value()
  {
    return DataType< ::pedsim_srvs::SetAllAgentsState >::value();
  }
  static const char* value(const ::pedsim_srvs::SetAllAgentsStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pedsim_srvs::SetAllAgentsStateResponse> should match
// service_traits::MD5Sum< ::pedsim_srvs::SetAllAgentsState >
template<>
struct MD5Sum< ::pedsim_srvs::SetAllAgentsStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pedsim_srvs::SetAllAgentsState >::value();
  }
  static const char* value(const ::pedsim_srvs::SetAllAgentsStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pedsim_srvs::SetAllAgentsStateResponse> should match
// service_traits::DataType< ::pedsim_srvs::SetAllAgentsState >
template<>
struct DataType< ::pedsim_srvs::SetAllAgentsStateResponse>
{
  static const char* value()
  {
    return DataType< ::pedsim_srvs::SetAllAgentsState >::value();
  }
  static const char* value(const ::pedsim_srvs::SetAllAgentsStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PEDSIM_SRVS_MESSAGE_SETALLAGENTSSTATE_H
