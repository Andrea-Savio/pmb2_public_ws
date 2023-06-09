// Generated by gencpp from file pal_navigation_msgs/AcknowledgmentRequest.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_ACKNOWLEDGMENTREQUEST_H
#define PAL_NAVIGATION_MSGS_MESSAGE_ACKNOWLEDGMENTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_navigation_msgs
{
template <class ContainerAllocator>
struct AcknowledgmentRequest_
{
  typedef AcknowledgmentRequest_<ContainerAllocator> Type;

  AcknowledgmentRequest_()
    : input()  {
    }
  AcknowledgmentRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AcknowledgmentRequest_

typedef ::pal_navigation_msgs::AcknowledgmentRequest_<std::allocator<void> > AcknowledgmentRequest;

typedef boost::shared_ptr< ::pal_navigation_msgs::AcknowledgmentRequest > AcknowledgmentRequestPtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::AcknowledgmentRequest const> AcknowledgmentRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator1> & lhs, const ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator1> & lhs, const ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_navigation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39e92f1778057359c64c7b8a7d7b19de";
  }

  static const char* value(const ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39e92f1778057359ULL;
  static const uint64_t static_value2 = 0xc64c7b8a7d7b19deULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/AcknowledgmentRequest";
  }

  static const char* value(const ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Acknowledgment service\n"
"\n"
"string input\n"
;
  }

  static const char* value(const ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AcknowledgmentRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::AcknowledgmentRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_ACKNOWLEDGMENTREQUEST_H
