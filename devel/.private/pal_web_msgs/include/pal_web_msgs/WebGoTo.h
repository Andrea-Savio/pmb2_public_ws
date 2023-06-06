// Generated by gencpp from file pal_web_msgs/WebGoTo.msg
// DO NOT EDIT!


#ifndef PAL_WEB_MSGS_MESSAGE_WEBGOTO_H
#define PAL_WEB_MSGS_MESSAGE_WEBGOTO_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_web_msgs
{
template <class ContainerAllocator>
struct WebGoTo_
{
  typedef WebGoTo_<ContainerAllocator> Type;

  WebGoTo_()
    : type(0)
    , value()  {
    }
  WebGoTo_(const ContainerAllocator& _alloc)
    : type(0)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _type_type;
  _type_type type;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _value_type;
  _value_type value;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(IMAGE)
  #undef IMAGE
#endif
#if defined(_WIN32) && defined(VIDEO)
  #undef VIDEO
#endif
#if defined(_WIN32) && defined(URI)
  #undef URI
#endif
#if defined(_WIN32) && defined(URL)
  #undef URL
#endif
#if defined(_WIN32) && defined(TOUCH_PAGE)
  #undef TOUCH_PAGE
#endif

  enum {
    IMAGE = 0u,
    VIDEO = 1u,
    URI = 2u,
    URL = 3u,
    TOUCH_PAGE = 4u,
  };


  typedef boost::shared_ptr< ::pal_web_msgs::WebGoTo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_web_msgs::WebGoTo_<ContainerAllocator> const> ConstPtr;

}; // struct WebGoTo_

typedef ::pal_web_msgs::WebGoTo_<std::allocator<void> > WebGoTo;

typedef boost::shared_ptr< ::pal_web_msgs::WebGoTo > WebGoToPtr;
typedef boost::shared_ptr< ::pal_web_msgs::WebGoTo const> WebGoToConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_web_msgs::WebGoTo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_web_msgs::WebGoTo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_web_msgs::WebGoTo_<ContainerAllocator1> & lhs, const ::pal_web_msgs::WebGoTo_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_web_msgs::WebGoTo_<ContainerAllocator1> & lhs, const ::pal_web_msgs::WebGoTo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_web_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_web_msgs::WebGoTo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_web_msgs::WebGoTo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_web_msgs::WebGoTo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_web_msgs::WebGoTo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_web_msgs::WebGoTo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_web_msgs::WebGoTo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_web_msgs::WebGoTo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f4b0500f7d0332daf037d4a463b0073";
  }

  static const char* value(const ::pal_web_msgs::WebGoTo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f4b0500f7d0332dULL;
  static const uint64_t static_value2 = 0xaf037d4a463b0073ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_web_msgs::WebGoTo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_web_msgs/WebGoTo";
  }

  static const char* value(const ::pal_web_msgs::WebGoTo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_web_msgs::WebGoTo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 IMAGE = 0\n"
"uint8 VIDEO = 1\n"
"uint8 URI   = 2\n"
"uint8 URL = 3\n"
"uint8 TOUCH_PAGE = 4\n"
"uint8 type # one of the enum above\n"
"\n"
"string value # Destination (an image, a video or a uri)\n"
;
  }

  static const char* value(const ::pal_web_msgs::WebGoTo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_web_msgs::WebGoTo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WebGoTo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_web_msgs::WebGoTo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_web_msgs::WebGoTo_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_WEB_MSGS_MESSAGE_WEBGOTO_H