// Generated by gencpp from file gazebo_msgs/BodyRequestResponse.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_BODYREQUESTRESPONSE_H
#define GAZEBO_MSGS_MESSAGE_BODYREQUESTRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_msgs
{
template <class ContainerAllocator>
struct BodyRequestResponse_
{
  typedef BodyRequestResponse_<ContainerAllocator> Type;

  BodyRequestResponse_()
    {
    }
  BodyRequestResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> const> ConstPtr;

}; // struct BodyRequestResponse_

typedef ::gazebo_msgs::BodyRequestResponse_<std::allocator<void> > BodyRequestResponse;

typedef boost::shared_ptr< ::gazebo_msgs::BodyRequestResponse > BodyRequestResponsePtr;
typedef boost::shared_ptr< ::gazebo_msgs::BodyRequestResponse const> BodyRequestResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/BodyRequestResponse";
  }

  static const char* value(const ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BodyRequestResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::gazebo_msgs::BodyRequestResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_BODYREQUESTRESPONSE_H
