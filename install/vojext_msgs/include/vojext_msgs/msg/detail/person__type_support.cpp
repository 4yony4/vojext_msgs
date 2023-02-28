// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from vojext_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "vojext_msgs/msg/detail/person__struct.hpp"
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

void Person_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vojext_msgs::msg::Person(_init);
}

void Person_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vojext_msgs::msg::Person *>(message_memory);
  typed_message->~Person();
}

size_t size_function__Person__left_hand(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<vojext_msgs::msg::Hand> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Person__left_hand(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<vojext_msgs::msg::Hand> *>(untyped_member);
  return &member[index];
}

void * get_function__Person__left_hand(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<vojext_msgs::msg::Hand> *>(untyped_member);
  return &member[index];
}

void resize_function__Person__left_hand(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<vojext_msgs::msg::Hand> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Person__right_hand(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<vojext_msgs::msg::Hand> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Person__right_hand(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<vojext_msgs::msg::Hand> *>(untyped_member);
  return &member[index];
}

void * get_function__Person__right_hand(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<vojext_msgs::msg::Hand> *>(untyped_member);
  return &member[index];
}

void resize_function__Person__right_hand(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<vojext_msgs::msg::Hand> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Person_message_member_array[9] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::Person, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result_dynamic_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::Person, result_dynamic_left),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result_dynamic_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::Person, result_dynamic_right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result_static_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::Person, result_static_left),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result_static_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::Person, result_static_right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "final_result_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::Person, final_result_left),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "final_result_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::Person, final_result_right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_hand",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vojext_msgs::msg::Hand>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::Person, left_hand),  // bytes offset in struct
    nullptr,  // default value
    size_function__Person__left_hand,  // size() function pointer
    get_const_function__Person__left_hand,  // get_const(index) function pointer
    get_function__Person__left_hand,  // get(index) function pointer
    resize_function__Person__left_hand  // resize(index) function pointer
  },
  {
    "right_hand",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vojext_msgs::msg::Hand>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::Person, right_hand),  // bytes offset in struct
    nullptr,  // default value
    size_function__Person__right_hand,  // size() function pointer
    get_const_function__Person__right_hand,  // get_const(index) function pointer
    get_function__Person__right_hand,  // get(index) function pointer
    resize_function__Person__right_hand  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Person_message_members = {
  "vojext_msgs::msg",  // message namespace
  "Person",  // message name
  9,  // number of fields
  sizeof(vojext_msgs::msg::Person),
  Person_message_member_array,  // message members
  Person_init_function,  // function to initialize message memory (memory has to be allocated)
  Person_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Person_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Person_message_members,
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
get_message_type_support_handle<vojext_msgs::msg::Person>()
{
  return &::vojext_msgs::msg::rosidl_typesupport_introspection_cpp::Person_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vojext_msgs, msg, Person)() {
  return &::vojext_msgs::msg::rosidl_typesupport_introspection_cpp::Person_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
