// Generated by gencpp from file pedsim_msgs/AgentForce.msg
// DO NOT EDIT!


#ifndef PEDSIM_MSGS_MESSAGE_AGENTFORCE_H
#define PEDSIM_MSGS_MESSAGE_AGENTFORCE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace pedsim_msgs
{
template <class ContainerAllocator>
struct AgentForce_
{
  typedef AgentForce_<ContainerAllocator> Type;

  AgentForce_()
    : desired_force()
    , obstacle_force()
    , social_force()
    , group_coherence_force()
    , group_gaze_force()
    , group_repulsion_force()
    , random_force()  {
    }
  AgentForce_(const ContainerAllocator& _alloc)
    : desired_force(_alloc)
    , obstacle_force(_alloc)
    , social_force(_alloc)
    , group_coherence_force(_alloc)
    , group_gaze_force(_alloc)
    , group_repulsion_force(_alloc)
    , random_force(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _desired_force_type;
  _desired_force_type desired_force;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _obstacle_force_type;
  _obstacle_force_type obstacle_force;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _social_force_type;
  _social_force_type social_force;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _group_coherence_force_type;
  _group_coherence_force_type group_coherence_force;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _group_gaze_force_type;
  _group_gaze_force_type group_gaze_force;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _group_repulsion_force_type;
  _group_repulsion_force_type group_repulsion_force;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _random_force_type;
  _random_force_type random_force;





  typedef boost::shared_ptr< ::pedsim_msgs::AgentForce_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pedsim_msgs::AgentForce_<ContainerAllocator> const> ConstPtr;

}; // struct AgentForce_

typedef ::pedsim_msgs::AgentForce_<std::allocator<void> > AgentForce;

typedef boost::shared_ptr< ::pedsim_msgs::AgentForce > AgentForcePtr;
typedef boost::shared_ptr< ::pedsim_msgs::AgentForce const> AgentForceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pedsim_msgs::AgentForce_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pedsim_msgs::AgentForce_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pedsim_msgs::AgentForce_<ContainerAllocator1> & lhs, const ::pedsim_msgs::AgentForce_<ContainerAllocator2> & rhs)
{
  return lhs.desired_force == rhs.desired_force &&
    lhs.obstacle_force == rhs.obstacle_force &&
    lhs.social_force == rhs.social_force &&
    lhs.group_coherence_force == rhs.group_coherence_force &&
    lhs.group_gaze_force == rhs.group_gaze_force &&
    lhs.group_repulsion_force == rhs.group_repulsion_force &&
    lhs.random_force == rhs.random_force;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pedsim_msgs::AgentForce_<ContainerAllocator1> & lhs, const ::pedsim_msgs::AgentForce_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pedsim_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::AgentForce_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::AgentForce_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::AgentForce_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::AgentForce_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::AgentForce_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::AgentForce_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pedsim_msgs::AgentForce_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dcd8d82cea8453731000bbf59474a5b8";
  }

  static const char* value(const ::pedsim_msgs::AgentForce_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdcd8d82cea845373ULL;
  static const uint64_t static_value2 = 0x1000bbf59474a5b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::pedsim_msgs::AgentForce_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pedsim_msgs/AgentForce";
  }

  static const char* value(const ::pedsim_msgs::AgentForce_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pedsim_msgs::AgentForce_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Forces acting on an agent.\n"
"\n"
"# Basic SFM forces.\n"
"geometry_msgs/Vector3 desired_force\n"
"geometry_msgs/Vector3 obstacle_force\n"
"geometry_msgs/Vector3 social_force\n"
"\n"
"# Additional Group Forces\n"
"geometry_msgs/Vector3 group_coherence_force\n"
"geometry_msgs/Vector3 group_gaze_force\n"
"geometry_msgs/Vector3 group_repulsion_force\n"
"\n"
"# Extra stabilization/custom forces.\n"
"geometry_msgs/Vector3 random_force\n"
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
;
  }

  static const char* value(const ::pedsim_msgs::AgentForce_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pedsim_msgs::AgentForce_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.desired_force);
      stream.next(m.obstacle_force);
      stream.next(m.social_force);
      stream.next(m.group_coherence_force);
      stream.next(m.group_gaze_force);
      stream.next(m.group_repulsion_force);
      stream.next(m.random_force);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AgentForce_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pedsim_msgs::AgentForce_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pedsim_msgs::AgentForce_<ContainerAllocator>& v)
  {
    s << indent << "desired_force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.desired_force);
    s << indent << "obstacle_force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.obstacle_force);
    s << indent << "social_force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.social_force);
    s << indent << "group_coherence_force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.group_coherence_force);
    s << indent << "group_gaze_force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.group_gaze_force);
    s << indent << "group_repulsion_force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.group_repulsion_force);
    s << indent << "random_force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.random_force);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEDSIM_MSGS_MESSAGE_AGENTFORCE_H
