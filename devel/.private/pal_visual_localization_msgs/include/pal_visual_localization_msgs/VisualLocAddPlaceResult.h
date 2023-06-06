// Generated by gencpp from file pal_visual_localization_msgs/VisualLocAddPlaceResult.msg
// DO NOT EDIT!


#ifndef PAL_VISUAL_LOCALIZATION_MSGS_MESSAGE_VISUALLOCADDPLACERESULT_H
#define PAL_VISUAL_LOCALIZATION_MSGS_MESSAGE_VISUALLOCADDPLACERESULT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_visual_localization_msgs
{
template <class ContainerAllocator>
struct VisualLocAddPlaceResult_
{
  typedef VisualLocAddPlaceResult_<ContainerAllocator> Type;

  VisualLocAddPlaceResult_()
    : res(false)  {
    }
  VisualLocAddPlaceResult_(const ContainerAllocator& _alloc)
    : res(false)  {
  (void)_alloc;
    }



   typedef uint8_t _res_type;
  _res_type res;





  typedef boost::shared_ptr< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> const> ConstPtr;

}; // struct VisualLocAddPlaceResult_

typedef ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<std::allocator<void> > VisualLocAddPlaceResult;

typedef boost::shared_ptr< ::pal_visual_localization_msgs::VisualLocAddPlaceResult > VisualLocAddPlaceResultPtr;
typedef boost::shared_ptr< ::pal_visual_localization_msgs::VisualLocAddPlaceResult const> VisualLocAddPlaceResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator1> & lhs, const ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator2> & rhs)
{
  return lhs.res == rhs.res;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator1> & lhs, const ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pal_visual_localization_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e27848a10f8e7e4030443887dfea101b";
  }

  static const char* value(const ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe27848a10f8e7e40ULL;
  static const uint64_t static_value2 = 0x30443887dfea101bULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_visual_localization_msgs/VisualLocAddPlaceResult";
  }

  static const char* value(const ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"bool res\n"
;
  }

  static const char* value(const ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.res);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VisualLocAddPlaceResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_visual_localization_msgs::VisualLocAddPlaceResult_<ContainerAllocator>& v)
  {
    s << indent << "res: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.res);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VISUAL_LOCALIZATION_MSGS_MESSAGE_VISUALLOCADDPLACERESULT_H