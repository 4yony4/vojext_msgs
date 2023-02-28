// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vojext_msgs:msg/Environment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vojext_msgs/msg/detail/environment__rosidl_typesupport_introspection_c.h"
#include "vojext_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vojext_msgs/msg/detail/environment__functions.h"
#include "vojext_msgs/msg/detail/environment__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `semantictag`
#include "rosidl_runtime_c/string_functions.h"
// Member `objects_list`
#include "vojext_msgs/msg/physical_object.h"
// Member `objects_list`
#include "vojext_msgs/msg/detail/physical_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Environment__rosidl_typesupport_introspection_c__Environment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vojext_msgs__msg__Environment__init(message_memory);
}

void Environment__rosidl_typesupport_introspection_c__Environment_fini_function(void * message_memory)
{
  vojext_msgs__msg__Environment__fini(message_memory);
}

size_t Environment__rosidl_typesupport_introspection_c__size_function__PhysicalObject__objects_list(
  const void * untyped_member)
{
  const vojext_msgs__msg__PhysicalObject__Sequence * member =
    (const vojext_msgs__msg__PhysicalObject__Sequence *)(untyped_member);
  return member->size;
}

const void * Environment__rosidl_typesupport_introspection_c__get_const_function__PhysicalObject__objects_list(
  const void * untyped_member, size_t index)
{
  const vojext_msgs__msg__PhysicalObject__Sequence * member =
    (const vojext_msgs__msg__PhysicalObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Environment__rosidl_typesupport_introspection_c__get_function__PhysicalObject__objects_list(
  void * untyped_member, size_t index)
{
  vojext_msgs__msg__PhysicalObject__Sequence * member =
    (vojext_msgs__msg__PhysicalObject__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Environment__rosidl_typesupport_introspection_c__resize_function__PhysicalObject__objects_list(
  void * untyped_member, size_t size)
{
  vojext_msgs__msg__PhysicalObject__Sequence * member =
    (vojext_msgs__msg__PhysicalObject__Sequence *)(untyped_member);
  vojext_msgs__msg__PhysicalObject__Sequence__fini(member);
  return vojext_msgs__msg__PhysicalObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Environment__rosidl_typesupport_introspection_c__Environment_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__Environment, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__Environment, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "semantictag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__Environment, semantictag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__Environment, objects_list),  // bytes offset in struct
    NULL,  // default value
    Environment__rosidl_typesupport_introspection_c__size_function__PhysicalObject__objects_list,  // size() function pointer
    Environment__rosidl_typesupport_introspection_c__get_const_function__PhysicalObject__objects_list,  // get_const(index) function pointer
    Environment__rosidl_typesupport_introspection_c__get_function__PhysicalObject__objects_list,  // get(index) function pointer
    Environment__rosidl_typesupport_introspection_c__resize_function__PhysicalObject__objects_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Environment__rosidl_typesupport_introspection_c__Environment_message_members = {
  "vojext_msgs__msg",  // message namespace
  "Environment",  // message name
  4,  // number of fields
  sizeof(vojext_msgs__msg__Environment),
  Environment__rosidl_typesupport_introspection_c__Environment_message_member_array,  // message members
  Environment__rosidl_typesupport_introspection_c__Environment_init_function,  // function to initialize message memory (memory has to be allocated)
  Environment__rosidl_typesupport_introspection_c__Environment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Environment__rosidl_typesupport_introspection_c__Environment_message_type_support_handle = {
  0,
  &Environment__rosidl_typesupport_introspection_c__Environment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vojext_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vojext_msgs, msg, Environment)() {
  Environment__rosidl_typesupport_introspection_c__Environment_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Environment__rosidl_typesupport_introspection_c__Environment_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vojext_msgs, msg, PhysicalObject)();
  if (!Environment__rosidl_typesupport_introspection_c__Environment_message_type_support_handle.typesupport_identifier) {
    Environment__rosidl_typesupport_introspection_c__Environment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Environment__rosidl_typesupport_introspection_c__Environment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
