// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from vojext_msgs:msg/PersonList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "vojext_msgs/msg/detail/person_list__struct.hpp"
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

void PersonList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vojext_msgs::msg::PersonList(_init);
}

void PersonList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vojext_msgs::msg::PersonList *>(message_memory);
  typed_message->~PersonList();
}

size_t size_function__PersonList__person_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<vojext_msgs::msg::Person> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PersonList__person_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<vojext_msgs::msg::Person> *>(untyped_member);
  return &member[index];
}

void * get_function__PersonList__person_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<vojext_msgs::msg::Person> *>(untyped_member);
  return &member[index];
}

void resize_function__PersonList__person_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<vojext_msgs::msg::Person> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PersonList_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::PersonList, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image_header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::PersonList, image_header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "person_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vojext_msgs::msg::Person>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs::msg::PersonList, person_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__PersonList__person_list,  // size() function pointer
    get_const_function__PersonList__person_list,  // get_const(index) function pointer
    get_function__PersonList__person_list,  // get(index) function pointer
    resize_function__PersonList__person_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PersonList_message_members = {
  "vojext_msgs::msg",  // message namespace
  "PersonList",  // message name
  3,  // number of fields
  sizeof(vojext_msgs::msg::PersonList),
  PersonList_message_member_array,  // message members
  PersonList_init_function,  // function to initialize message memory (memory has to be allocated)
  PersonList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PersonList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PersonList_message_members,
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
get_message_type_support_handle<vojext_msgs::msg::PersonList>()
{
  return &::vojext_msgs::msg::rosidl_typesupport_introspection_cpp::PersonList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vojext_msgs, msg, PersonList)() {
  return &::vojext_msgs::msg::rosidl_typesupport_introspection_cpp::PersonList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
