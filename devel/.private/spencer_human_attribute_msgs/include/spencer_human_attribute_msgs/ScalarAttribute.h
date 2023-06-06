// Generated by gencpp from file spencer_human_attribute_msgs/ScalarAttribute.msg
// DO NOT EDIT!


#ifndef SPENCER_HUMAN_ATTRIBUTE_MSGS_MESSAGE_SCALARATTRIBUTE_H
#define SPENCER_HUMAN_ATTRIBUTE_MSGS_MESSAGE_SCALARATTRIBUTE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace spencer_human_attribute_msgs
{
template <class ContainerAllocator>
struct ScalarAttribute_
{
  typedef ScalarAttribute_<ContainerAllocator> Type;

  ScalarAttribute_()
    : subject_id(0)
    , type()
    , values()
    , confidences()  {
    }
  ScalarAttribute_(const ContainerAllocator& _alloc)
    : subject_id(0)
    , type(_alloc)
    , values(_alloc)
    , confidences(_alloc)  {
  (void)_alloc;
    }



   typedef uint64_t _subject_id_type;
  _subject_id_type subject_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _type_type;
  _type_type type;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _values_type;
  _values_type values;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _confidences_type;
  _confidences_type confidences;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(PERSON_HEIGHT)
  #undef PERSON_HEIGHT
#endif


  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> PERSON_HEIGHT;

  typedef boost::shared_ptr< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> const> ConstPtr;

}; // struct ScalarAttribute_

typedef ::spencer_human_attribute_msgs::ScalarAttribute_<std::allocator<void> > ScalarAttribute;

typedef boost::shared_ptr< ::spencer_human_attribute_msgs::ScalarAttribute > ScalarAttributePtr;
typedef boost::shared_ptr< ::spencer_human_attribute_msgs::ScalarAttribute const> ScalarAttributeConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      ScalarAttribute_<ContainerAllocator>::PERSON_HEIGHT =
        
          "person_height"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator1> & lhs, const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator2> & rhs)
{
  return lhs.subject_id == rhs.subject_id &&
    lhs.type == rhs.type &&
    lhs.values == rhs.values &&
    lhs.confidences == rhs.confidences;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator1> & lhs, const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spencer_human_attribute_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e10ac15d3bace9d3787523d1dd728fe0";
  }

  static const char* value(const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe10ac15d3bace9d3ULL;
  static const uint64_t static_value2 = 0x787523d1dd728fe0ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_human_attribute_msgs/ScalarAttribute";
  }

  static const char* value(const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64                  subject_id              # either an observation ID or a track ID (if information has been integrated over time); should be encoded in topic name\n"
"string                  type                    # type of the attribute, see constants below\n"
"\n"
"float32[]               values                  # values, each value also should have a confidence; highest-confidence value comes first!\n"
"float32[]               confidences             # corresponding confidences should sum up to 1.0\n"
"\n"
"\n"
"###########################################\n"
"### Constants for scalar attribute types. #\n"
"###########################################\n"
"\n"
"string      PERSON_HEIGHT        = person_height\n"
;
  }

  static const char* value(const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.subject_id);
      stream.next(m.type);
      stream.next(m.values);
      stream.next(m.confidences);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ScalarAttribute_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator>& v)
  {
    s << indent << "subject_id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.subject_id);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.type);
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.values[i]);
    }
    s << indent << "confidences[]" << std::endl;
    for (size_t i = 0; i < v.confidences.size(); ++i)
    {
      s << indent << "  confidences[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.confidences[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_HUMAN_ATTRIBUTE_MSGS_MESSAGE_SCALARATTRIBUTE_H