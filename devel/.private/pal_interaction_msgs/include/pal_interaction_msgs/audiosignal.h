// Generated by gencpp from file pal_interaction_msgs/audiosignal.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_AUDIOSIGNAL_H
#define PAL_INTERACTION_MSGS_MESSAGE_AUDIOSIGNAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_interaction_msgs
{
template <class ContainerAllocator>
struct audiosignal_
{
  typedef audiosignal_<ContainerAllocator> Type;

  audiosignal_()
    : channel0()
    , channel1()  {
    }
  audiosignal_(const ContainerAllocator& _alloc)
    : channel0(_alloc)
    , channel1(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _channel0_type;
  _channel0_type channel0;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _channel1_type;
  _channel1_type channel1;





  typedef boost::shared_ptr< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> const> ConstPtr;

}; // struct audiosignal_

typedef ::pal_interaction_msgs::audiosignal_<std::allocator<void> > audiosignal;

typedef boost::shared_ptr< ::pal_interaction_msgs::audiosignal > audiosignalPtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::audiosignal const> audiosignalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::audiosignal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_interaction_msgs::audiosignal_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::audiosignal_<ContainerAllocator2> & rhs)
{
  return lhs.channel0 == rhs.channel0 &&
    lhs.channel1 == rhs.channel1;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_interaction_msgs::audiosignal_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::audiosignal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9406f94b261ed2ebad808e7af5b61907";
  }

  static const char* value(const ::pal_interaction_msgs::audiosignal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9406f94b261ed2ebULL;
  static const uint64_t static_value2 = 0xad808e7af5b61907ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/audiosignal";
  }

  static const char* value(const ::pal_interaction_msgs::audiosignal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] channel0\n"
"float64[] channel1\n"
;
  }

  static const char* value(const ::pal_interaction_msgs::audiosignal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.channel0);
      stream.next(m.channel1);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct audiosignal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::audiosignal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::audiosignal_<ContainerAllocator>& v)
  {
    s << indent << "channel0[]" << std::endl;
    for (size_t i = 0; i < v.channel0.size(); ++i)
    {
      s << indent << "  channel0[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.channel0[i]);
    }
    s << indent << "channel1[]" << std::endl;
    for (size_t i = 0; i < v.channel1.size(); ++i)
    {
      s << indent << "  channel1[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.channel1[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_AUDIOSIGNAL_H
