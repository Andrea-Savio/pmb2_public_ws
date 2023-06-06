// Generated by gencpp from file pal_interaction_msgs/TtsResult.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_TTSRESULT_H
#define PAL_INTERACTION_MSGS_MESSAGE_TTSRESULT_H


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
struct TtsResult_
{
  typedef TtsResult_<ContainerAllocator> Type;

  TtsResult_()
    : text()
    , msg()  {
    }
  TtsResult_(const ContainerAllocator& _alloc)
    : text(_alloc)
    , msg(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _text_type;
  _text_type text;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _msg_type;
  _msg_type msg;





  typedef boost::shared_ptr< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> const> ConstPtr;

}; // struct TtsResult_

typedef ::pal_interaction_msgs::TtsResult_<std::allocator<void> > TtsResult;

typedef boost::shared_ptr< ::pal_interaction_msgs::TtsResult > TtsResultPtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::TtsResult const> TtsResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::TtsResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_interaction_msgs::TtsResult_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::TtsResult_<ContainerAllocator2> & rhs)
{
  return lhs.text == rhs.text &&
    lhs.msg == rhs.msg;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_interaction_msgs::TtsResult_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::TtsResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e83da3aebdbed111fd63209d97dcddcd";
  }

  static const char* value(const ::pal_interaction_msgs::TtsResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe83da3aebdbed111ULL;
  static const uint64_t static_value2 = 0xfd63209d97dcddcdULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/TtsResult";
  }

  static const char* value(const ::pal_interaction_msgs::TtsResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"## result definition\n"
"\n"
"# Variable text will contain\n"
"# the actual text to be spoken\n"
"string text\n"
"\n"
"# Msg will contain a warning/error message\n"
"# in case something happens during synthesis.\n"
"\n"
"string msg\n"
;
  }

  static const char* value(const ::pal_interaction_msgs::TtsResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.text);
      stream.next(m.msg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TtsResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::TtsResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::TtsResult_<ContainerAllocator>& v)
  {
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.text);
    s << indent << "msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.msg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_TTSRESULT_H
