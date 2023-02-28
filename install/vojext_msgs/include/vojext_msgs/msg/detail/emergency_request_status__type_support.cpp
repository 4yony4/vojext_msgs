// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from vojext_msgs:msg/EmergencyRequestStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "vojext_msgs/msg/detail/emergency_request_status__struct.hpp"
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

void EmergencyRequestStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vojext_msgs::msg::EmergencyRequestStatus(_init);
}

void EmergencyRequestStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vojext_msgs::msg::EmergencyRequestStatus *>(message_memory);
  typed_message->~EmergencyRequestStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EmergencyRequestStatus_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::EmergencyRequestStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request_progress",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::EmergencyRequestStatus, request_progress),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request_result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::EmergencyRequestStatus, request_result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EmergencyRequestStatus_message_members = {
  "vojext_msgs::msg",  // message namespace
  "EmergencyRequestStatus",  // message name
  3,  // number of fields
  sizeof(vojext_msgs::msg::EmergencyRequestStatus),
  EmergencyRequestStatus_message_member_array,  // message members
  EmergencyRequestStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyRequestStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EmergencyRequestStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EmergencyRequestStatus_message_members,
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
get_message_type_support_handle<vojext_msgs::msg::EmergencyRequestStatus>()
{
  return &::vojext_msgs::msg::rosidl_typesupport_introspection_cpp::EmergencyRequestStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vojext_msgs, msg, EmergencyRequestStatus)() {
  return &::vojext_msgs::msg::rosidl_typesupport_introspection_cpp::EmergencyRequestStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
