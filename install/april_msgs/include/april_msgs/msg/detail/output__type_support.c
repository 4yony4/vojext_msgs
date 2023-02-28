// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from april_msgs:msg/Output.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "april_msgs/msg/detail/output__rosidl_typesupport_introspection_c.h"
#include "april_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "april_msgs/msg/detail/output__functions.h"
#include "april_msgs/msg/detail/output__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
// Member `velocity`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Output__rosidl_typesupport_introspection_c__Output_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  april_msgs__msg__Output__init(message_memory);
}

void Output__rosidl_typesupport_introspection_c__Output_fini_function(void * message_memory)
{
  april_msgs__msg__Output__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Output__rosidl_typesupport_introspection_c__Output_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Output, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Output, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Output, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__Output, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Output__rosidl_typesupport_introspection_c__Output_message_members = {
  "april_msgs__msg",  // message namespace
  "Output",  // message name
  4,  // number of fields
  sizeof(april_msgs__msg__Output),
  Output__rosidl_typesupport_introspection_c__Output_message_member_array,  // message members
  Output__rosidl_typesupport_introspection_c__Output_init_function,  // function to initialize message memory (memory has to be allocated)
  Output__rosidl_typesupport_introspection_c__Output_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Output__rosidl_typesupport_introspection_c__Output_message_type_support_handle = {
  0,
  &Output__rosidl_typesupport_introspection_c__Output_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_april_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, april_msgs, msg, Output)() {
  Output__rosidl_typesupport_introspection_c__Output_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!Output__rosidl_typesupport_introspection_c__Output_message_type_support_handle.typesupport_identifier) {
    Output__rosidl_typesupport_introspection_c__Output_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Output__rosidl_typesupport_introspection_c__Output_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
