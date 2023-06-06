// Generated by gencpp from file teleop_tools_msgs/IncrementFeedback.msg
// DO NOT EDIT!


#ifndef TELEOP_TOOLS_MSGS_MESSAGE_INCREMENTFEEDBACK_H
#define TELEOP_TOOLS_MSGS_MESSAGE_INCREMENTFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace teleop_tools_msgs
{
template <class ContainerAllocator>
struct IncrementFeedback_
{
  typedef IncrementFeedback_<ContainerAllocator> Type;

  IncrementFeedback_()
    {
    }
  IncrementFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct IncrementFeedback_

typedef ::teleop_tools_msgs::IncrementFeedback_<std::allocator<void> > IncrementFeedback;

typedef boost::shared_ptr< ::teleop_tools_msgs::IncrementFeedback > IncrementFeedbackPtr;
typedef boost::shared_ptr< ::teleop_tools_msgs::IncrementFeedback const> IncrementFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace teleop_tools_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "teleop_tools_msgs/IncrementFeedback";
  }

  static const char* value(const ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
;
  }

  static const char* value(const ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IncrementFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::teleop_tools_msgs::IncrementFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TELEOP_TOOLS_MSGS_MESSAGE_INCREMENTFEEDBACK_H
