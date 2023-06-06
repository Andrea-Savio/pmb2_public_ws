// Generated by gencpp from file controller_manager_msgs/SwitchControllerRequest.msg
// DO NOT EDIT!


#ifndef CONTROLLER_MANAGER_MSGS_MESSAGE_SWITCHCONTROLLERREQUEST_H
#define CONTROLLER_MANAGER_MSGS_MESSAGE_SWITCHCONTROLLERREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace controller_manager_msgs
{
template <class ContainerAllocator>
struct SwitchControllerRequest_
{
  typedef SwitchControllerRequest_<ContainerAllocator> Type;

  SwitchControllerRequest_()
    : start_controllers()
    , stop_controllers()
    , strictness(0)  {
    }
  SwitchControllerRequest_(const ContainerAllocator& _alloc)
    : start_controllers(_alloc)
    , stop_controllers(_alloc)
    , strictness(0)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _start_controllers_type;
  _start_controllers_type start_controllers;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _stop_controllers_type;
  _stop_controllers_type stop_controllers;

   typedef int32_t _strictness_type;
  _strictness_type strictness;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(BEST_EFFORT)
  #undef BEST_EFFORT
#endif
#if defined(_WIN32) && defined(STRICT)
  #undef STRICT
#endif

  enum {
    BEST_EFFORT = 1,
    STRICT = 2,
  };


  typedef boost::shared_ptr< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SwitchControllerRequest_

typedef ::controller_manager_msgs::SwitchControllerRequest_<std::allocator<void> > SwitchControllerRequest;

typedef boost::shared_ptr< ::controller_manager_msgs::SwitchControllerRequest > SwitchControllerRequestPtr;
typedef boost::shared_ptr< ::controller_manager_msgs::SwitchControllerRequest const> SwitchControllerRequestConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator1> & lhs, const ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator2> & rhs)
{
  return lhs.start_controllers == rhs.start_controllers &&
    lhs.stop_controllers == rhs.stop_controllers &&
    lhs.strictness == rhs.strictness;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator1> & lhs, const ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace controller_manager_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "434da54adc434a5af5743ed711fd6ba1";
  }

  static const char* value(const ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x434da54adc434a5aULL;
  static const uint64_t static_value2 = 0xf5743ed711fd6ba1ULL;
};

template<class ContainerAllocator>
struct DataType< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "controller_manager_msgs/SwitchControllerRequest";
  }

  static const char* value(const ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The SwitchController service allows you stop a number of controllers\n"
"# and start a number of controllers, all in one single timestep of the\n"
"# controller_manager control loop. \n"
"\n"
"# To switch controllers, specify \n"
"#  * the list of controller names to start,\n"
"#  * the list of controller names to stop, and\n"
"#  * the strictness (BEST_EFFORT or STRICT)\n"
"#    * STRICT means that switching will fail if anything goes wrong (an invalid\n"
"#      controller name, a controller that failed to start, etc. )\n"
"#    * BEST_EFFORT means that even when something goes wrong with on controller, \n"
"#      the service will still try to start/stop the remaining controllers\n"
"\n"
"# The return value \"ok\" indicates if the controllers were switched\n"
"# successfully or not.  The meaning of success depends on the \n"
"# specified strictness.\n"
"\n"
"\n"
"string[] start_controllers\n"
"string[] stop_controllers\n"
"int32 strictness\n"
"int32 BEST_EFFORT=1\n"
"int32 STRICT=2\n"
;
  }

  static const char* value(const ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.start_controllers);
      stream.next(m.stop_controllers);
      stream.next(m.strictness);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SwitchControllerRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::controller_manager_msgs::SwitchControllerRequest_<ContainerAllocator>& v)
  {
    s << indent << "start_controllers[]" << std::endl;
    for (size_t i = 0; i < v.start_controllers.size(); ++i)
    {
      s << indent << "  start_controllers[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.start_controllers[i]);
    }
    s << indent << "stop_controllers[]" << std::endl;
    for (size_t i = 0; i < v.stop_controllers.size(); ++i)
    {
      s << indent << "  stop_controllers[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.stop_controllers[i]);
    }
    s << indent << "strictness: ";
    Printer<int32_t>::stream(s, indent + "  ", v.strictness);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROLLER_MANAGER_MSGS_MESSAGE_SWITCHCONTROLLERREQUEST_H
