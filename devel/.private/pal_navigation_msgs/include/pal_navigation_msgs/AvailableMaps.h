// Generated by gencpp from file pal_navigation_msgs/AvailableMaps.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_AVAILABLEMAPS_H
#define PAL_NAVIGATION_MSGS_MESSAGE_AVAILABLEMAPS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace pal_navigation_msgs
{
template <class ContainerAllocator>
struct AvailableMaps_
{
  typedef AvailableMaps_<ContainerAllocator> Type;

  AvailableMaps_()
    : map_names()  {
    }
  AvailableMaps_(const ContainerAllocator& _alloc)
    : map_names(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::std_msgs::String_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::std_msgs::String_<ContainerAllocator> >> _map_names_type;
  _map_names_type map_names;





  typedef boost::shared_ptr< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> const> ConstPtr;

}; // struct AvailableMaps_

typedef ::pal_navigation_msgs::AvailableMaps_<std::allocator<void> > AvailableMaps;

typedef boost::shared_ptr< ::pal_navigation_msgs::AvailableMaps > AvailableMapsPtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::AvailableMaps const> AvailableMapsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator1> & lhs, const ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator2> & rhs)
{
  return lhs.map_names == rhs.map_names;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator1> & lhs, const ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_navigation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9db0e90f3d30f37c0bc8af001416200d";
  }

  static const char* value(const ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9db0e90f3d30f37cULL;
  static const uint64_t static_value2 = 0x0bc8af001416200dULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/AvailableMaps";
  }

  static const char* value(const ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# TODO: This may change!\n"
"std_msgs/String[] map_names\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
;
  }

  static const char* value(const ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.map_names);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AvailableMaps_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::AvailableMaps_<ContainerAllocator>& v)
  {
    s << indent << "map_names[]" << std::endl;
    for (size_t i = 0; i < v.map_names.size(); ++i)
    {
      s << indent << "  map_names[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "    ", v.map_names[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_AVAILABLEMAPS_H
