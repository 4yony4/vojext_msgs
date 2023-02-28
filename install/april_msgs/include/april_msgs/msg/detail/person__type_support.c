// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from april_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "april_msgs/msg/detail/person__rosidl_typesupport_introspection_c.h"
#include "april_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "april_msgs/msg/detail/person__functions.h"
#include "april_msgs/msg/detail/person__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `result_dynamic_left`
// Member `result_dynamic_right`
// Member `result_static_left`
// Member `result_static_right`
// Member `final_result_left`
// Member `final_result_right`
#include "rosidl_runtime_c/string_functions.h"
// Member `left_hand`
// Member `right_hand`
#include "april_msgs/msg/hand.h"
// Member `left_hand`
// Member `right_hand`
#include "april_msgs/msg/detail/hand__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Person__rosidl_typesupport_introspection_c__Person_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  april_msgs__msg__Person__init(message_memory);
}

void Person__rosidl_typesupport_introspection_c__Person_fini_function(void * message_memory)
{
  april_msgs__msg__Person__fini(message_memory);
}

size_t Person__rosidl_typesupport_introspection_c__size_function__Hand__left_hand(
  const void * untyped_member)
{
  const april_msgs__msg__Hand__Sequence * member =
    (const april_msgs__msg__Hand__Sequence *)(untyped_member);
  return member->size;
}

const void * Person__rosidl_typesupport_introspection_c__get_const_function__Hand__left_hand(
  const void * untyped_member, size_t index)
{
  const april_msgs__msg__Hand__Sequence * member =
    (const april_msgs__msg__Hand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Person__rosidl_typesupport_introspection_c__get_function__Hand__left_hand(
  void * untyped_member, size_t index)
{
  april_msgs__msg__Hand__Sequence * member =
    (april_msgs__msg__Hand__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Person__rosidl_typesupport_introspection_c__resize_function__Hand__left_hand(
  void * untyped_member, size_t size)
{
  april_msgs__msg__Hand__Sequence * member =
    (april_msgs__msg__Hand__Sequence *)(untyped_member);
  april_msgs__msg__Hand__Sequence__fini(member);
  return april_msgs__msg__Hand__Sequence__init(member, size);
}

size_t Person__rosidl_typesupport_introspection_c__size_function__Hand__right_hand(
  const void * untyped_member)
{
  const april_msgs__msg__Hand__Sequence * member =
    (const april_msgs__msg__Hand__Sequence *)(untyped_member);
  return member->size;
}

const void * Person__rosidl_typesupport_introspection_c__get_const_function__Hand__right_hand(
  const void * untyped_member, size_t index)
{
  const april_msgs__msg__Hand__Sequence * member =
    (const april_msgs__msg__Hand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Person__rosidl_typesupport_introspection_c__get_function__Hand__right_hand(
  void * untyped_member, size_t index)
{
  april_msgs__msg__Hand__Sequence * member =
    (april_msgs__msg__Hand__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Person__rosidl_typesupport_introspection_c__resize_function__Hand__right_hand(
  void * untyped_member, size_t size)
{
  april_msgs__msg__Hand__Sequence * member =
    (april_msgs__msg__Hand__Sequence *)(untyped_member);
  april_msgs__msg__Hand__Sequence__fini(member);
  return april_msgs__msg__Hand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Person__rosidl_typesupport_introspection_c__Person_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Person, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result_dynamic_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Person, result_dynamic_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result_dynamic_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Person, result_dynamic_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result_static_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Person, result_static_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result_static_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Person, result_static_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_result_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Person, final_result_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_result_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Person, final_result_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_hand",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Person, left_hand),  // bytes offset in struct
    NULL,  // default value
    Person__rosidl_typesupport_introspection_c__size_function__Hand__left_hand,  // size() function pointer
    Person__rosidl_typesupport_introspection_c__get_const_function__Hand__left_hand,  // get_const(index) function pointer
    Person__rosidl_typesupport_introspection_c__get_function__Hand__left_hand,  // get(index) function pointer
    Person__rosidl_typesupport_introspection_c__resize_function__Hand__left_hand  // resize(index) function pointer
  },
  {
    "right_hand",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Person, right_hand),  // bytes offset in struct
    NULL,  // default value
    Person__rosidl_typesupport_introspection_c__size_function__Hand__right_hand,  // size() function pointer
    Person__rosidl_typesupport_introspection_c__get_const_function__Hand__right_hand,  // get_const(index) function pointer
    Person__rosidl_typesupport_introspection_c__get_function__Hand__right_hand,  // get(index) function pointer
    Person__rosidl_typesupport_introspection_c__resize_function__Hand__right_hand  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Person__rosidl_typesupport_introspection_c__Person_message_members = {
  "april_msgs__msg",  // message namespace
  "Person",  // message name
  9,  // number of fields
  sizeof(april_msgs__msg__Person),
  Person__rosidl_typesupport_introspection_c__Person_message_member_array,  // message members
  Person__rosidl_typesupport_introspection_c__Person_init_function,  // function to initialize message memory (memory has to be allocated)
  Person__rosidl_typesupport_introspection_c__Person_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Person__rosidl_typesupport_introspection_c__Person_message_type_support_handle = {
  0,
  &Person__rosidl_typesupport_introspection_c__Person_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_april_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, april_msgs, msg, Person)() {
  Person__rosidl_typesupport_introspection_c__Person_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Person__rosidl_typesupport_introspection_c__Person_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, april_msgs, msg, Hand)();
  Person__rosidl_typesupport_introspection_c__Person_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, april_msgs, msg, Hand)();
  if (!Person__rosidl_typesupport_introspection_c__Person_message_type_support_handle.typesupport_identifier) {
    Person__rosidl_typesupport_introspection_c__Person_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Person__rosidl_typesupport_introspection_c__Person_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
