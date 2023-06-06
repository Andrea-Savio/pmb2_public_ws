// Generated by gencpp from file pal_navigation_msgs/RegisterSyncRequest.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_REGISTERSYNCREQUEST_H
#define PAL_NAVIGATION_MSGS_MESSAGE_REGISTERSYNCREQUEST_H


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
struct RegisterSyncRequest_
{
  typedef RegisterSyncRequest_<ContainerAllocator> Type;

  RegisterSyncRequest_()
    : ns()  {
    }
  RegisterSyncRequest_(const ContainerAllocator& _alloc)
    : ns(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _ns_type;
  _ns_type ns;





  typedef boost::shared_ptr< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RegisterSyncRequest_

typedef ::pal_navigation_msgs::RegisterSyncRequest_<std::allocator<void> > RegisterSyncRequest;

typedef boost::shared_ptr< ::pal_navigation_msgs::RegisterSyncRequest > RegisterSyncRequestPtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::RegisterSyncRequest const> RegisterSyncRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator1> & lhs, const ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator2> & rhs)
{
  return lhs.ns == rhs.ns;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator1> & lhs, const ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_navigation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "260f9e1558c9d0de33fbef52feb55a00";
  }

  static const char* value(const ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x260f9e1558c9d0deULL;
  static const uint64_t static_value2 = 0x33fbef52feb55a00ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/RegisterSyncRequest";
  }

  static const char* value(const ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Request\n"
"string ns\n"
;
  }

  static const char* value(const ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ns);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RegisterSyncRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::RegisterSyncRequest_<ContainerAllocator>& v)
  {
    s << indent << "ns: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.ns);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_REGISTERSYNCREQUEST_H
