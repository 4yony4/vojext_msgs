// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from april_msgs:msg/ShelfLife.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "april_msgs/msg/detail/shelf_life__struct.hpp"
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

void ShelfLife_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) april_msgs::msg::ShelfLife(_init);
}

void ShelfLife_fini_function(void * message_memory)
{
  auto typed_message = static_cast<april_msgs::msg::ShelfLife *>(message_memory);
  typed_message->~ShelfLife();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ShelfLife_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs::msg::ShelfLife, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "object_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs::msg::ShelfLife, object_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "shelf_life",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs::msg::ShelfLife, shelf_life),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ShelfLife_message_members = {
  "april_msgs::msg",  // message namespace
  "ShelfLife",  // message name
  3,  // number of fields
  sizeof(april_msgs::msg::ShelfLife),
  ShelfLife_message_member_array,  // message members
  ShelfLife_init_function,  // function to initialize message memory (memory has to be allocated)
  ShelfLife_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ShelfLife_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ShelfLife_message_members,
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
get_message_type_support_handle<april_msgs::msg::ShelfLife>()
{
  return &::april_msgs::msg::rosidl_typesupport_introspection_cpp::ShelfLife_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, april_msgs, msg, ShelfLife)() {
  return &::april_msgs::msg::rosidl_typesupport_introspection_cpp::ShelfLife_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
