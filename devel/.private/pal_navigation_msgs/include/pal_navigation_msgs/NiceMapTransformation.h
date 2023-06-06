// Generated by gencpp from file pal_navigation_msgs/NiceMapTransformation.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_NICEMAPTRANSFORMATION_H
#define PAL_NAVIGATION_MSGS_MESSAGE_NICEMAPTRANSFORMATION_H


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
struct NiceMapTransformation_
{
  typedef NiceMapTransformation_<ContainerAllocator> Type;

  NiceMapTransformation_()
    : x(0.0)
    , y(0.0)
    , rotYawRad(0.0)
    , scale(0.0)  {
    }
  NiceMapTransformation_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , rotYawRad(0.0)
    , scale(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _rotYawRad_type;
  _rotYawRad_type rotYawRad;

   typedef double _scale_type;
  _scale_type scale;





  typedef boost::shared_ptr< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> const> ConstPtr;

}; // struct NiceMapTransformation_

typedef ::pal_navigation_msgs::NiceMapTransformation_<std::allocator<void> > NiceMapTransformation;

typedef boost::shared_ptr< ::pal_navigation_msgs::NiceMapTransformation > NiceMapTransformationPtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::NiceMapTransformation const> NiceMapTransformationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator1> & lhs, const ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.rotYawRad == rhs.rotYawRad &&
    lhs.scale == rhs.scale;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator1> & lhs, const ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_navigation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "af4c7e65074d9c380c082e0485e8868c";
  }

  static const char* value(const ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaf4c7e65074d9c38ULL;
  static const uint64_t static_value2 = 0x0c082e0485e8868cULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/NiceMapTransformation";
  }

  static const char* value(const ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x \n"
"float64 y\n"
"float64 rotYawRad # Yaw rotation in rads\n"
"float64 scale\n"
"\n"
;
  }

  static const char* value(const ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.rotYawRad);
      stream.next(m.scale);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NiceMapTransformation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::NiceMapTransformation_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "rotYawRad: ";
    Printer<double>::stream(s, indent + "  ", v.rotYawRad);
    s << indent << "scale: ";
    Printer<double>::stream(s, indent + "  ", v.scale);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_NICEMAPTRANSFORMATION_H
