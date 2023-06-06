// Generated by gencpp from file pal_interaction_msgs/ASRLanguage.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_ASRLANGUAGE_H
#define PAL_INTERACTION_MSGS_MESSAGE_ASRLANGUAGE_H


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
struct ASRLanguage_
{
  typedef ASRLanguage_<ContainerAllocator> Type;

  ASRLanguage_()
    : language()  {
    }
  ASRLanguage_(const ContainerAllocator& _alloc)
    : language(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _language_type;
  _language_type language;





  typedef boost::shared_ptr< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> const> ConstPtr;

}; // struct ASRLanguage_

typedef ::pal_interaction_msgs::ASRLanguage_<std::allocator<void> > ASRLanguage;

typedef boost::shared_ptr< ::pal_interaction_msgs::ASRLanguage > ASRLanguagePtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::ASRLanguage const> ASRLanguageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator2> & rhs)
{
  return lhs.language == rhs.language;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator1> & lhs, const ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f9264c5bffd188939e827e658af68a0d";
  }

  static const char* value(const ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9264c5bffd18893ULL;
  static const uint64_t static_value2 = 0x9e827e658af68a0dULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/ASRLanguage";
  }

  static const char* value(const ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message is to indicate the language\n"
"# that has to be set in the speech recognizer\n"
"string language\n"
;
  }

  static const char* value(const ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.language);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ASRLanguage_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::ASRLanguage_<ContainerAllocator>& v)
  {
    s << indent << "language: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.language);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_ASRLANGUAGE_H