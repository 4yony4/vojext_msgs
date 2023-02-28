// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from april_msgs:msg/GraspTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "april_msgs/msg/detail/grasp_trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace april_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GraspTrajectory_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) april_msgs::msg::GraspTrajectory(_init);
}

void GraspTrajectory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<april_msgs::msg::GraspTrajectory *>(message_memory);
  typed_message->~GraspTrajectory();
}

size_t size_function__GraspTrajectory__hand_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GraspTrajectory__hand_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__GraspTrajectory__hand_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void resize_function__GraspTrajectory__hand_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GraspTrajectory__fingers_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::JointState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GraspTrajectory__fingers_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::JointState> *>(untyped_member);
  return &member[index];
}

void * get_function__GraspTrajectory__fingers_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::JointState> *>(untyped_member);
  return &member[index];
}

void resize_function__GraspTrajectory__fingers_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::JointState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GraspTrajectory_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs::msg::GraspTrajectory, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ee_frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs::msg::GraspTrajectory, ee_frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hand_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs::msg::GraspTrajectory, hand_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__GraspTrajectory__hand_poses,  // size() function pointer
    get_const_function__GraspTrajectory__hand_poses,  // get_const(index) function pointer
    get_function__GraspTrajectory__hand_poses,  // get(index) function pointer
    resize_function__GraspTrajectory__hand_poses  // resize(index) function pointer
  },
  {
    "fingers_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::JointState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs::msg::GraspTrajectory, fingers_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__GraspTrajectory__fingers_states,  // size() function pointer
    get_const_function__GraspTrajectory__fingers_states,  // get_const(index) function pointer
    get_function__GraspTrajectory__fingers_states,  // get(index) function pointer
    resize_function__GraspTrajectory__fingers_states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GraspTrajectory_message_members = {
  "april_msgs::msg",  // message namespace
  "GraspTrajectory",  // message name
  4,  // number of fields
  sizeof(april_msgs::msg::GraspTrajectory),
  GraspTrajectory_message_member_array,  // message members
  GraspTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GraspTrajectory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GraspTrajectory_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace april_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<april_msgs::msg::GraspTrajectory>()
{
  return &::april_msgs::msg::rosidl_typesupport_introspection_cpp::GraspTrajectory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, april_msgs, msg, GraspTrajectory)() {
  return &::april_msgs::msg::rosidl_typesupport_introspection_cpp::GraspTrajectory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
