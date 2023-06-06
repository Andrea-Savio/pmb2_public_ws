// Generated by gencpp from file pal_device_msgs/ShutdownAndWakeUpRobotResponse.msg
// DO NOT EDIT!


#ifndef PAL_DEVICE_MSGS_MESSAGE_SHUTDOWNANDWAKEUPROBOTRESPONSE_H
#define PAL_DEVICE_MSGS_MESSAGE_SHUTDOWNANDWAKEUPROBOTRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_device_msgs
{
template <class ContainerAllocator>
struct ShutdownAndWakeUpRobotResponse_
{
  typedef ShutdownAndWakeUpRobotResponse_<ContainerAllocator> Type;

  ShutdownAndWakeUpRobotResponse_()
    {
    }
  ShutdownAndWakeUpRobotResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ShutdownAndWakeUpRobotResponse_

typedef ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<std::allocator<void> > ShutdownAndWakeUpRobotResponse;

typedef boost::shared_ptr< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse > ShutdownAndWakeUpRobotResponsePtr;
typedef boost::shared_ptr< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse const> ShutdownAndWakeUpRobotResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace pal_device_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_device_msgs/ShutdownAndWakeUpRobotResponse";
  }

  static const char* value(const ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ShutdownAndWakeUpRobotResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pal_device_msgs::ShutdownAndWakeUpRobotResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DEVICE_MSGS_MESSAGE_SHUTDOWNANDWAKEUPROBOTRESPONSE_H
