// Generated by gencpp from file pal_navigation_msgs/GoToFeedback.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_GOTOFEEDBACK_H
#define PAL_NAVIGATION_MSGS_MESSAGE_GOTOFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace pal_navigation_msgs
{
template <class ContainerAllocator>
struct GoToFeedback_
{
  typedef GoToFeedback_<ContainerAllocator> Type;

  GoToFeedback_()
    : base_position()  {
    }
  GoToFeedback_(const ContainerAllocator& _alloc)
    : base_position(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _base_position_type;
  _base_position_type base_position;





  typedef boost::shared_ptr< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct GoToFeedback_

typedef ::pal_navigation_msgs::GoToFeedback_<std::allocator<void> > GoToFeedback;

typedef boost::shared_ptr< ::pal_navigation_msgs::GoToFeedback > GoToFeedbackPtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::GoToFeedback const> GoToFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator1> & lhs, const ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.base_position == rhs.base_position;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator1> & lhs, const ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_navigation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3fb824c456a757373a226f6d08071bf0";
  }

  static const char* value(const ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3fb824c456a75737ULL;
  static const uint64_t static_value2 = 0x3a226f6d08071bf0ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/GoToFeedback";
  }

  static const char* value(const ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"geometry_msgs/PoseStamped base_position\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
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
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.base_position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GoToFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::GoToFeedback_<ContainerAllocator>& v)
  {
    s << indent << "base_position: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.base_position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_GOTOFEEDBACK_H
