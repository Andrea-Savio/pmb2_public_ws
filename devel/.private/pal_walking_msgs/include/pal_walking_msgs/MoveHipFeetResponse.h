// Generated by gencpp from file pal_walking_msgs/MoveHipFeetResponse.msg
// DO NOT EDIT!


#ifndef PAL_WALKING_MSGS_MESSAGE_MOVEHIPFEETRESPONSE_H
#define PAL_WALKING_MSGS_MESSAGE_MOVEHIPFEETRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_walking_msgs
{
template <class ContainerAllocator>
struct MoveHipFeetResponse_
{
  typedef MoveHipFeetResponse_<ContainerAllocator> Type;

  MoveHipFeetResponse_()
    {
    }
  MoveHipFeetResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MoveHipFeetResponse_

typedef ::pal_walking_msgs::MoveHipFeetResponse_<std::allocator<void> > MoveHipFeetResponse;

typedef boost::shared_ptr< ::pal_walking_msgs::MoveHipFeetResponse > MoveHipFeetResponsePtr;
typedef boost::shared_ptr< ::pal_walking_msgs::MoveHipFeetResponse const> MoveHipFeetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace pal_walking_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_walking_msgs/MoveHipFeetResponse";
  }

  static const char* value(const ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveHipFeetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pal_walking_msgs::MoveHipFeetResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PAL_WALKING_MSGS_MESSAGE_MOVEHIPFEETRESPONSE_H
