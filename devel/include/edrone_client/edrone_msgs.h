// Generated by gencpp from file edrone_client/edrone_msgs.msg
// DO NOT EDIT!


#ifndef EDRONE_CLIENT_MESSAGE_EDRONE_MSGS_H
#define EDRONE_CLIENT_MESSAGE_EDRONE_MSGS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace edrone_client
{
template <class ContainerAllocator>
struct edrone_msgs_
{
  typedef edrone_msgs_<ContainerAllocator> Type;

  edrone_msgs_()
    : rcRoll(0)
    , rcPitch(0)
    , rcYaw(0)
    , rcThrottle(0)
    , rcAUX1(0)
    , rcAUX2(0)
    , rcAUX3(0)
    , rcAUX4(0)
    , droneIndex(0)  {
    }
  edrone_msgs_(const ContainerAllocator& _alloc)
    : rcRoll(0)
    , rcPitch(0)
    , rcYaw(0)
    , rcThrottle(0)
    , rcAUX1(0)
    , rcAUX2(0)
    , rcAUX3(0)
    , rcAUX4(0)
    , droneIndex(0)  {
  (void)_alloc;
    }



   typedef int64_t _rcRoll_type;
  _rcRoll_type rcRoll;

   typedef int64_t _rcPitch_type;
  _rcPitch_type rcPitch;

   typedef int64_t _rcYaw_type;
  _rcYaw_type rcYaw;

   typedef int64_t _rcThrottle_type;
  _rcThrottle_type rcThrottle;

   typedef int64_t _rcAUX1_type;
  _rcAUX1_type rcAUX1;

   typedef int64_t _rcAUX2_type;
  _rcAUX2_type rcAUX2;

   typedef int64_t _rcAUX3_type;
  _rcAUX3_type rcAUX3;

   typedef int64_t _rcAUX4_type;
  _rcAUX4_type rcAUX4;

   typedef int64_t _droneIndex_type;
  _droneIndex_type droneIndex;





  typedef boost::shared_ptr< ::edrone_client::edrone_msgs_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::edrone_client::edrone_msgs_<ContainerAllocator> const> ConstPtr;

}; // struct edrone_msgs_

typedef ::edrone_client::edrone_msgs_<std::allocator<void> > edrone_msgs;

typedef boost::shared_ptr< ::edrone_client::edrone_msgs > edrone_msgsPtr;
typedef boost::shared_ptr< ::edrone_client::edrone_msgs const> edrone_msgsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::edrone_client::edrone_msgs_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::edrone_client::edrone_msgs_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace edrone_client

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'edrone_client': ['/home/sasuke/catkin_ws/src/eyantra_drone/edrone_client/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::edrone_client::edrone_msgs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::edrone_client::edrone_msgs_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::edrone_client::edrone_msgs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::edrone_client::edrone_msgs_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::edrone_client::edrone_msgs_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::edrone_client::edrone_msgs_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::edrone_client::edrone_msgs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9ba105b46f47730cc85d3e5abd2b281d";
  }

  static const char* value(const ::edrone_client::edrone_msgs_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9ba105b46f47730cULL;
  static const uint64_t static_value2 = 0xc85d3e5abd2b281dULL;
};

template<class ContainerAllocator>
struct DataType< ::edrone_client::edrone_msgs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "edrone_client/edrone_msgs";
  }

  static const char* value(const ::edrone_client::edrone_msgs_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::edrone_client::edrone_msgs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 rcRoll\n\
int64 rcPitch\n\
int64 rcYaw\n\
int64 rcThrottle\n\
int64 rcAUX1\n\
int64 rcAUX2\n\
int64 rcAUX3\n\
int64 rcAUX4\n\
int64 droneIndex\n\
";
  }

  static const char* value(const ::edrone_client::edrone_msgs_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::edrone_client::edrone_msgs_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rcRoll);
      stream.next(m.rcPitch);
      stream.next(m.rcYaw);
      stream.next(m.rcThrottle);
      stream.next(m.rcAUX1);
      stream.next(m.rcAUX2);
      stream.next(m.rcAUX3);
      stream.next(m.rcAUX4);
      stream.next(m.droneIndex);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct edrone_msgs_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::edrone_client::edrone_msgs_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::edrone_client::edrone_msgs_<ContainerAllocator>& v)
  {
    s << indent << "rcRoll: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rcRoll);
    s << indent << "rcPitch: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rcPitch);
    s << indent << "rcYaw: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rcYaw);
    s << indent << "rcThrottle: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rcThrottle);
    s << indent << "rcAUX1: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rcAUX1);
    s << indent << "rcAUX2: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rcAUX2);
    s << indent << "rcAUX3: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rcAUX3);
    s << indent << "rcAUX4: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rcAUX4);
    s << indent << "droneIndex: ";
    Printer<int64_t>::stream(s, indent + "  ", v.droneIndex);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EDRONE_CLIENT_MESSAGE_EDRONE_MSGS_H
