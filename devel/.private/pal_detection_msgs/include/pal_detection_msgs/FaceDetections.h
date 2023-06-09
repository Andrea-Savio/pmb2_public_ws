// Generated by gencpp from file pal_detection_msgs/FaceDetections.msg
// DO NOT EDIT!


#ifndef PAL_DETECTION_MSGS_MESSAGE_FACEDETECTIONS_H
#define PAL_DETECTION_MSGS_MESSAGE_FACEDETECTIONS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <pal_detection_msgs/FaceDetection.h>
#include <geometry_msgs/TransformStamped.h>

namespace pal_detection_msgs
{
template <class ContainerAllocator>
struct FaceDetections_
{
  typedef FaceDetections_<ContainerAllocator> Type;

  FaceDetections_()
    : header()
    , faces()
    , camera_pose()  {
    }
  FaceDetections_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , faces(_alloc)
    , camera_pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::pal_detection_msgs::FaceDetection_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::pal_detection_msgs::FaceDetection_<ContainerAllocator> >> _faces_type;
  _faces_type faces;

   typedef  ::geometry_msgs::TransformStamped_<ContainerAllocator>  _camera_pose_type;
  _camera_pose_type camera_pose;





  typedef boost::shared_ptr< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> const> ConstPtr;

}; // struct FaceDetections_

typedef ::pal_detection_msgs::FaceDetections_<std::allocator<void> > FaceDetections;

typedef boost::shared_ptr< ::pal_detection_msgs::FaceDetections > FaceDetectionsPtr;
typedef boost::shared_ptr< ::pal_detection_msgs::FaceDetections const> FaceDetectionsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_detection_msgs::FaceDetections_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_detection_msgs::FaceDetections_<ContainerAllocator1> & lhs, const ::pal_detection_msgs::FaceDetections_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.faces == rhs.faces &&
    lhs.camera_pose == rhs.camera_pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_detection_msgs::FaceDetections_<ContainerAllocator1> & lhs, const ::pal_detection_msgs::FaceDetections_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_detection_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ccd073854ad87c6de267f72e92545e09";
  }

  static const char* value(const ::pal_detection_msgs::FaceDetections_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xccd073854ad87c6dULL;
  static const uint64_t static_value2 = 0xe267f72e92545e09ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_detection_msgs/FaceDetections";
  }

  static const char* value(const ::pal_detection_msgs::FaceDetections_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"pal_detection_msgs/FaceDetection[]  faces\n"
"\n"
"# Optional transformation between the camera frame and a certain parent frame\n"
"geometry_msgs/TransformStamped camera_pose\n"
"\n"
"\n"
"\n"
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
"MSG: pal_detection_msgs/FaceDetection\n"
"\n"
"##########################################\n"
"#\n"
"# Face detection data\n"
"#\n"
"##########################################\n"
"\n"
"#####################\n"
"# Face bounding box\n"
"#####################\n"
"# coordinates of the top left corner of the box\n"
"int32 x\n"
"int32 y\n"
"\n"
"# width of the box\n"
"int32 width\n"
"\n"
"# height of the box\n"
"int32 height\n"
"\n"
"############################\n"
"# Eyes position (if found)\n"
"############################\n"
"\n"
"bool eyesLocated\n"
"\n"
"int32 leftEyeX\n"
"int32 leftEyeY\n"
"int32 rightEyeX\n"
"int32 rightEyeY\n"
"\n"
"#############################\n"
"# Centre of eyes 3D estimate\n"
"#############################\n"
"geometry_msgs/Point32 position\n"
"\n"
"\n"
"############################\n"
"# Person recognition\n"
"############################\n"
"\n"
"string name\n"
"float32 confidence\n"
"\n"
"############################\n"
"# Gender recognition\n"
"############################\n"
"string gender\n"
"float32 genderConfidence\n"
"\n"
"############################\n"
"# Facial expression\n"
"############################\n"
"string EXPRESSION_NEUTRAL=\"neutral\"\n"
"string EXPRESSION_SMILE=\"smile\"\n"
"string EXPRESSION_RAISED_BROWS=\"raised brows\"\n"
"string EXPRESSION_EYES_AWAY=\"eyes away\"\n"
"string EXPRESSION_SQUINTING=\"squinting\"\n"
"string EXPRESSION_FROWNING=\"frowning\"\n"
"string expression\n"
"float32 expression_confidence\n"
"\n"
"############################\n"
"# Facial emotion\n"
"############################\n"
"float32 emotion_anger_confidence\n"
"float32 emotion_disgust_confidence\n"
"float32 emotion_fear_confidence\n"
"float32 emotion_happiness_confidence\n"
"float32 emotion_neutral_confidence\n"
"float32 emotion_sadness_confidence\n"
"float32 emotion_surprise_confidence\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: geometry_msgs/TransformStamped\n"
"# This expresses a transform from coordinate frame header.frame_id\n"
"# to the coordinate frame child_frame_id\n"
"#\n"
"# This message is mostly used by the \n"
"# <a href=\"http://wiki.ros.org/tf\">tf</a> package. \n"
"# See its documentation for more information.\n"
"\n"
"Header header\n"
"string child_frame_id # the frame id of the child frame\n"
"Transform transform\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
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
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::pal_detection_msgs::FaceDetections_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.faces);
      stream.next(m.camera_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FaceDetections_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_detection_msgs::FaceDetections_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_detection_msgs::FaceDetections_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "faces[]" << std::endl;
    for (size_t i = 0; i < v.faces.size(); ++i)
    {
      s << indent << "  faces[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pal_detection_msgs::FaceDetection_<ContainerAllocator> >::stream(s, indent + "    ", v.faces[i]);
    }
    s << indent << "camera_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::TransformStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.camera_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DETECTION_MSGS_MESSAGE_FACEDETECTIONS_H
