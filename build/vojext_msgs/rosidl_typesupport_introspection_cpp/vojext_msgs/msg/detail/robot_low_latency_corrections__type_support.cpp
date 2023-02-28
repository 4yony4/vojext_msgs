// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from vojext_msgs:msg/RobotLowLatencyCorrections.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "vojext_msgs/msg/detail/robot_low_latency_corrections__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vojext_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotLowLatencyCorrections_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vojext_msgs::msg::RobotLowLatencyCorrections(_init);
}

void RobotLowLatencyCorrections_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vojext_msgs::msg::RobotLowLatencyCorrections *>(message_memory);
  typed_message->~RobotLowLatencyCorrections();
}

size_t size_function__RobotLowLatencyCorrections__action(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotLowLatencyCorrections__action(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotLowLatencyCorrections__action(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__RobotLowLatencyCorrections__action(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotLowLatencyCorrections_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::RobotLowLatencyCorrections, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::RobotLowLatencyCorrections, action),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotLowLatencyCorrections__action,  // size() function pointer
    get_const_function__RobotLowLatencyCorrections__action,  // get_const(index) function pointer
    get_function__RobotLowLatencyCorrections__action,  // get(index) function pointer
    resize_function__RobotLowLatencyCorrections__action  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotLowLatencyCorrections_message_members = {
  "vojext_msgs::msg",  // message namespace
  "RobotLowLatencyCorrections",  // message name
  2,  // number of fields
  sizeof(vojext_msgs::msg::RobotLowLatencyCorrections),
  RobotLowLatencyCorrections_message_member_array,  // message members
  RobotLowLatencyCorrections_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotLowLatencyCorrections_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotLowLatencyCorrections_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotLowLatencyCorrections_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace vojext_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vojext_msgs::msg::RobotLowLatencyCorrections>()
{
  return &::vojext_msgs::msg::rosidl_typesupport_introspection_cpp::RobotLowLatencyCorrections_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vojext_msgs, msg, RobotLowLatencyCorrections)() {
  return &::vojext_msgs::msg::rosidl_typesupport_introspection_cpp::RobotLowLatencyCorrections_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
