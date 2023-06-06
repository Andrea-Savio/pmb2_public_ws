// Generated by gencpp from file pal_detection_msgs/RecognizerResponse.msg
// DO NOT EDIT!


#ifndef PAL_DETECTION_MSGS_MESSAGE_RECOGNIZERRESPONSE_H
#define PAL_DETECTION_MSGS_MESSAGE_RECOGNIZERRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_detection_msgs
{
template <class ContainerAllocator>
struct RecognizerResponse_
{
  typedef RecognizerResponse_<ContainerAllocator> Type;

  RecognizerResponse_()
    {
    }
  RecognizerResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RecognizerResponse_

typedef ::pal_detection_msgs::RecognizerResponse_<std::allocator<void> > RecognizerResponse;

typedef boost::shared_ptr< ::pal_detection_msgs::RecognizerResponse > RecognizerResponsePtr;
typedef boost::shared_ptr< ::pal_detection_msgs::RecognizerResponse const> RecognizerResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace pal_detection_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_detection_msgs/RecognizerResponse";
  }

  static const char* value(const ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RecognizerResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pal_detection_msgs::RecognizerResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DETECTION_MSGS_MESSAGE_RECOGNIZERRESPONSE_H
