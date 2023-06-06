// Generated by gencpp from file pal_detection_msgs/RecognizeObjectsActionGoal.msg
// DO NOT EDIT!


#ifndef PAL_DETECTION_MSGS_MESSAGE_RECOGNIZEOBJECTSACTIONGOAL_H
#define PAL_DETECTION_MSGS_MESSAGE_RECOGNIZEOBJECTSACTIONGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <pal_detection_msgs/RecognizeObjectsGoal.h>

namespace pal_detection_msgs
{
template <class ContainerAllocator>
struct RecognizeObjectsActionGoal_
{
  typedef RecognizeObjectsActionGoal_<ContainerAllocator> Type;

  RecognizeObjectsActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  RecognizeObjectsActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::pal_detection_msgs::RecognizeObjectsGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct RecognizeObjectsActionGoal_

typedef ::pal_detection_msgs::RecognizeObjectsActionGoal_<std::allocator<void> > RecognizeObjectsActionGoal;

typedef boost::shared_ptr< ::pal_detection_msgs::RecognizeObjectsActionGoal > RecognizeObjectsActionGoalPtr;
typedef boost::shared_ptr< ::pal_detection_msgs::RecognizeObjectsActionGoal const> RecognizeObjectsActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator1> & lhs, const ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator1> & lhs, const ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_detection_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0c4879d2613ada93c5e6bec5a110c1e3";
  }

  static const char* value(const ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0c4879d2613ada93ULL;
  static const uint64_t static_value2 = 0xc5e6bec5a110c1e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_detection_msgs/RecognizeObjectsActionGoal";
  }

  static const char* value(const ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"RecognizeObjectsGoal goal\n"
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
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_detection_msgs/RecognizeObjectsGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# input_image: An optional image field, when given performs the recognition on the input_image\n"
"# else, will perform the recognition on the recent captured image from robot's camera\n"
"sensor_msgs/CompressedImage input_image\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/CompressedImage\n"
"# This message contains a compressed image\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"\n"
"string format        # Specifies the format of the data\n"
"                     #   Acceptable values:\n"
"                     #     jpeg, png\n"
"uint8[] data         # Compressed image buffer\n"
;
  }

  static const char* value(const ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RecognizeObjectsActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_detection_msgs::RecognizeObjectsActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::pal_detection_msgs::RecognizeObjectsGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DETECTION_MSGS_MESSAGE_RECOGNIZEOBJECTSACTIONGOAL_H
