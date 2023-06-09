// Generated by gencpp from file create_node/RoombaSensorState.msg
// DO NOT EDIT!


#ifndef CREATE_NODE_MESSAGE_ROOMBASENSORSTATE_H
#define CREATE_NODE_MESSAGE_ROOMBASENSORSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace create_node
{
template <class ContainerAllocator>
struct RoombaSensorState_
{
  typedef RoombaSensorState_<ContainerAllocator> Type;

  RoombaSensorState_()
    : header()
    , bumps_wheeldrops(0)
    , wall(false)
    , cliff_left(false)
    , cliff_front_left(false)
    , cliff_front_right(false)
    , cliff_right(false)
    , virtual_wall(false)
    , motor_overcurrents(0)
    , dirt_detector_left(0)
    , dirt_detector_right(0)
    , remote_opcode(0)
    , buttons(0)
    , distance(0)
    , angle(0)
    , charging_state(0)
    , voltage(0)
    , current(0)
    , temperature(0)
    , charge(0)
    , capacity(0)  {
    }
  RoombaSensorState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , bumps_wheeldrops(0)
    , wall(false)
    , cliff_left(false)
    , cliff_front_left(false)
    , cliff_front_right(false)
    , cliff_right(false)
    , virtual_wall(false)
    , motor_overcurrents(0)
    , dirt_detector_left(0)
    , dirt_detector_right(0)
    , remote_opcode(0)
    , buttons(0)
    , distance(0)
    , angle(0)
    , charging_state(0)
    , voltage(0)
    , current(0)
    , temperature(0)
    , charge(0)
    , capacity(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _bumps_wheeldrops_type;
  _bumps_wheeldrops_type bumps_wheeldrops;

   typedef uint8_t _wall_type;
  _wall_type wall;

   typedef uint8_t _cliff_left_type;
  _cliff_left_type cliff_left;

   typedef uint8_t _cliff_front_left_type;
  _cliff_front_left_type cliff_front_left;

   typedef uint8_t _cliff_front_right_type;
  _cliff_front_right_type cliff_front_right;

   typedef uint8_t _cliff_right_type;
  _cliff_right_type cliff_right;

   typedef uint8_t _virtual_wall_type;
  _virtual_wall_type virtual_wall;

   typedef uint8_t _motor_overcurrents_type;
  _motor_overcurrents_type motor_overcurrents;

   typedef uint8_t _dirt_detector_left_type;
  _dirt_detector_left_type dirt_detector_left;

   typedef uint8_t _dirt_detector_right_type;
  _dirt_detector_right_type dirt_detector_right;

   typedef uint8_t _remote_opcode_type;
  _remote_opcode_type remote_opcode;

   typedef uint8_t _buttons_type;
  _buttons_type buttons;

   typedef int16_t _distance_type;
  _distance_type distance;

   typedef int16_t _angle_type;
  _angle_type angle;

   typedef uint8_t _charging_state_type;
  _charging_state_type charging_state;

   typedef uint16_t _voltage_type;
  _voltage_type voltage;

   typedef int16_t _current_type;
  _current_type current;

   typedef int8_t _temperature_type;
  _temperature_type temperature;

   typedef uint16_t _charge_type;
  _charge_type charge;

   typedef uint16_t _capacity_type;
  _capacity_type capacity;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CHARGING_NOT_CHARGING)
  #undef CHARGING_NOT_CHARGING
#endif
#if defined(_WIN32) && defined(CHARGING_CHARGING_RECOVERY)
  #undef CHARGING_CHARGING_RECOVERY
#endif
#if defined(_WIN32) && defined(CHARGING_CHARGING)
  #undef CHARGING_CHARGING
#endif
#if defined(_WIN32) && defined(CHARGING_TRICKLE_CHARGING)
  #undef CHARGING_TRICKLE_CHARGING
#endif
#if defined(_WIN32) && defined(CHARGING_WAITING)
  #undef CHARGING_WAITING
#endif
#if defined(_WIN32) && defined(CHARGING_CHARGING_ERROR)
  #undef CHARGING_CHARGING_ERROR
#endif

  enum {
    CHARGING_NOT_CHARGING = 0u,
    CHARGING_CHARGING_RECOVERY = 1u,
    CHARGING_CHARGING = 2u,
    CHARGING_TRICKLE_CHARGING = 3u,
    CHARGING_WAITING = 4u,
    CHARGING_CHARGING_ERROR = 5u,
  };


  typedef boost::shared_ptr< ::create_node::RoombaSensorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::create_node::RoombaSensorState_<ContainerAllocator> const> ConstPtr;

}; // struct RoombaSensorState_

typedef ::create_node::RoombaSensorState_<std::allocator<void> > RoombaSensorState;

typedef boost::shared_ptr< ::create_node::RoombaSensorState > RoombaSensorStatePtr;
typedef boost::shared_ptr< ::create_node::RoombaSensorState const> RoombaSensorStateConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::create_node::RoombaSensorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::create_node::RoombaSensorState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::create_node::RoombaSensorState_<ContainerAllocator1> & lhs, const ::create_node::RoombaSensorState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.bumps_wheeldrops == rhs.bumps_wheeldrops &&
    lhs.wall == rhs.wall &&
    lhs.cliff_left == rhs.cliff_left &&
    lhs.cliff_front_left == rhs.cliff_front_left &&
    lhs.cliff_front_right == rhs.cliff_front_right &&
    lhs.cliff_right == rhs.cliff_right &&
    lhs.virtual_wall == rhs.virtual_wall &&
    lhs.motor_overcurrents == rhs.motor_overcurrents &&
    lhs.dirt_detector_left == rhs.dirt_detector_left &&
    lhs.dirt_detector_right == rhs.dirt_detector_right &&
    lhs.remote_opcode == rhs.remote_opcode &&
    lhs.buttons == rhs.buttons &&
    lhs.distance == rhs.distance &&
    lhs.angle == rhs.angle &&
    lhs.charging_state == rhs.charging_state &&
    lhs.voltage == rhs.voltage &&
    lhs.current == rhs.current &&
    lhs.temperature == rhs.temperature &&
    lhs.charge == rhs.charge &&
    lhs.capacity == rhs.capacity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::create_node::RoombaSensorState_<ContainerAllocator1> & lhs, const ::create_node::RoombaSensorState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace create_node

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::create_node::RoombaSensorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::create_node::RoombaSensorState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::create_node::RoombaSensorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::create_node::RoombaSensorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::create_node::RoombaSensorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::create_node::RoombaSensorState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::create_node::RoombaSensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9e8632c0937537603a670e96e85cd991";
  }

  static const char* value(const ::create_node::RoombaSensorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9e8632c093753760ULL;
  static const uint64_t static_value2 = 0x3a670e96e85cd991ULL;
};

template<class ContainerAllocator>
struct DataType< ::create_node::RoombaSensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "create_node/RoombaSensorState";
  }

  static const char* value(const ::create_node::RoombaSensorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::create_node::RoombaSensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"uint8 CHARGING_NOT_CHARGING = 0\n"
"uint8 CHARGING_CHARGING_RECOVERY = 1\n"
"uint8 CHARGING_CHARGING = 2\n"
"uint8 CHARGING_TRICKLE_CHARGING = 3\n"
"uint8 CHARGING_WAITING = 4 \n"
"uint8 CHARGING_CHARGING_ERROR = 5\n"
"\n"
"uint8 bumps_wheeldrops\n"
"bool wall\n"
"bool cliff_left\n"
"bool cliff_front_left\n"
"bool cliff_front_right\n"
"bool cliff_right\n"
"bool virtual_wall\n"
"uint8 motor_overcurrents\n"
"uint8 dirt_detector_left  #roomba_only\n"
"uint8 dirt_detector_right #roomba_only\n"
"uint8 remote_opcode\n"
"uint8 buttons\n"
"int16 distance  # mm\n"
"int16 angle # degrees\n"
"uint8 charging_state\n"
"uint16 voltage  # mV\n"
"int16 current  # mA\n"
"int8 temperature  # C\n"
"uint16 charge  # mAh\n"
"uint16 capacity  # mAh\n"
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
;
  }

  static const char* value(const ::create_node::RoombaSensorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::create_node::RoombaSensorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.bumps_wheeldrops);
      stream.next(m.wall);
      stream.next(m.cliff_left);
      stream.next(m.cliff_front_left);
      stream.next(m.cliff_front_right);
      stream.next(m.cliff_right);
      stream.next(m.virtual_wall);
      stream.next(m.motor_overcurrents);
      stream.next(m.dirt_detector_left);
      stream.next(m.dirt_detector_right);
      stream.next(m.remote_opcode);
      stream.next(m.buttons);
      stream.next(m.distance);
      stream.next(m.angle);
      stream.next(m.charging_state);
      stream.next(m.voltage);
      stream.next(m.current);
      stream.next(m.temperature);
      stream.next(m.charge);
      stream.next(m.capacity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RoombaSensorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::create_node::RoombaSensorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::create_node::RoombaSensorState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "bumps_wheeldrops: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bumps_wheeldrops);
    s << indent << "wall: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.wall);
    s << indent << "cliff_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff_left);
    s << indent << "cliff_front_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff_front_left);
    s << indent << "cliff_front_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff_front_right);
    s << indent << "cliff_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff_right);
    s << indent << "virtual_wall: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.virtual_wall);
    s << indent << "motor_overcurrents: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motor_overcurrents);
    s << indent << "dirt_detector_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dirt_detector_left);
    s << indent << "dirt_detector_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dirt_detector_right);
    s << indent << "remote_opcode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.remote_opcode);
    s << indent << "buttons: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.buttons);
    s << indent << "distance: ";
    Printer<int16_t>::stream(s, indent + "  ", v.distance);
    s << indent << "angle: ";
    Printer<int16_t>::stream(s, indent + "  ", v.angle);
    s << indent << "charging_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charging_state);
    s << indent << "voltage: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.voltage);
    s << indent << "current: ";
    Printer<int16_t>::stream(s, indent + "  ", v.current);
    s << indent << "temperature: ";
    Printer<int8_t>::stream(s, indent + "  ", v.temperature);
    s << indent << "charge: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.charge);
    s << indent << "capacity: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.capacity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CREATE_NODE_MESSAGE_ROOMBASENSORSTATE_H
