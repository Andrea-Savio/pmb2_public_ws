// Generated by gencpp from file pal_common_msgs/GetStringResponse.msg
// DO NOT EDIT!


#ifndef PAL_COMMON_MSGS_MESSAGE_GETSTRINGRESPONSE_H
#define PAL_COMMON_MSGS_MESSAGE_GETSTRINGRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_common_msgs
{
template <class ContainerAllocator>
struct GetStringResponse_
{
  typedef GetStringResponse_<ContainerAllocator> Type;

  GetStringResponse_()
    : data()
    , success(false)  {
    }
  GetStringResponse_(const ContainerAllocator& _alloc)
    : data(_alloc)
    , success(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _data_type;
  _data_type data;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetStringResponse_

typedef ::pal_common_msgs::GetStringResponse_<std::allocator<void> > GetStringResponse;

typedef boost::shared_ptr< ::pal_common_msgs::GetStringResponse > GetStringResponsePtr;
typedef boost::shared_ptr< ::pal_common_msgs::GetStringResponse const> GetStringResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_common_msgs::GetStringResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_common_msgs::GetStringResponse_<ContainerAllocator1> & lhs, const ::pal_common_msgs::GetStringResponse_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_common_msgs::GetStringResponse_<ContainerAllocator1> & lhs, const ::pal_common_msgs::GetStringResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3337ce060aec31bd63cf2cb6fe9b79d5";
  }

  static const char* value(const ::pal_common_msgs::GetStringResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3337ce060aec31bdULL;
  static const uint64_t static_value2 = 0x63cf2cb6fe9b79d5ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_common_msgs/GetStringResponse";
  }

  static const char* value(const ::pal_common_msgs::GetStringResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string data\n"
"bool success\n"
;
  }

  static const char* value(const ::pal_common_msgs::GetStringResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetStringResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_common_msgs::GetStringResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_common_msgs::GetStringResponse_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.data);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_COMMON_MSGS_MESSAGE_GETSTRINGRESPONSE_H
