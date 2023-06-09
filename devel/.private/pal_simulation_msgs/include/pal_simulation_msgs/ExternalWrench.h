// Generated by gencpp from file pal_simulation_msgs/ExternalWrench.msg
// DO NOT EDIT!


#ifndef PAL_SIMULATION_MSGS_MESSAGE_EXTERNALWRENCH_H
#define PAL_SIMULATION_MSGS_MESSAGE_EXTERNALWRENCH_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Wrench.h>
#include <geometry_msgs/Point.h>

namespace pal_simulation_msgs
{
template <class ContainerAllocator>
struct ExternalWrench_
{
  typedef ExternalWrench_<ContainerAllocator> Type;

  ExternalWrench_()
    : header()
    , link_name()
    , wrench()
    , application_point()
    , duration()  {
    }
  ExternalWrench_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , link_name(_alloc)
    , wrench(_alloc)
    , application_point(_alloc)
    , duration()  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _link_name_type;
  _link_name_type link_name;

   typedef  ::geometry_msgs::Wrench_<ContainerAllocator>  _wrench_type;
  _wrench_type wrench;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _application_point_type;
  _application_point_type application_point;

   typedef ros::Duration _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> const> ConstPtr;

}; // struct ExternalWrench_

typedef ::pal_simulation_msgs::ExternalWrench_<std::allocator<void> > ExternalWrench;

typedef boost::shared_ptr< ::pal_simulation_msgs::ExternalWrench > ExternalWrenchPtr;
typedef boost::shared_ptr< ::pal_simulation_msgs::ExternalWrench const> ExternalWrenchConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator1> & lhs, const ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.link_name == rhs.link_name &&
    lhs.wrench == rhs.wrench &&
    lhs.application_point == rhs.application_point &&
    lhs.duration == rhs.duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator1> & lhs, const ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_simulation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "336010778c1866e3bca3bc8a7913851f";
  }

  static const char* value(const ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x336010778c1866e3ULL;
  static const uint64_t static_value2 = 0xbca3bc8a7913851fULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_simulation_msgs/ExternalWrench";
  }

  static const char* value(const ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header                  header\n"
"\n"
"string                  link_name\n"
"geometry_msgs/Wrench    wrench\n"
"geometry_msgs/Point     application_point\n"
"duration                duration\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Wrench\n"
"# This represents force in free space, separated into\n"
"# its linear and angular parts.\n"
"Vector3  force\n"
"Vector3  torque\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.link_name);
      stream.next(m.wrench);
      stream.next(m.application_point);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExternalWrench_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_simulation_msgs::ExternalWrench_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "link_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.link_name);
    s << indent << "wrench: ";
    s << std::endl;
    Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.wrench);
    s << indent << "application_point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.application_point);
    s << indent << "duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_SIMULATION_MSGS_MESSAGE_EXTERNALWRENCH_H
