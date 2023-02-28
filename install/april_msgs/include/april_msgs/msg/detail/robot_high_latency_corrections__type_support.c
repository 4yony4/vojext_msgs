// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from april_msgs:msg/RobotHighLatencyCorrections.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "april_msgs/msg/detail/robot_high_latency_corrections__rosidl_typesupport_introspection_c.h"
#include "april_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "april_msgs/msg/detail/robot_high_latency_corrections__functions.h"
#include "april_msgs/msg/detail/robot_high_latency_corrections__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `action`
// Member `description`
// Member `cause`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  april_msgs__msg__RobotHighLatencyCorrections__init(message_memory);
}

void RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_fini_function(void * message_memory)
{
  april_msgs__msg__RobotHighLatencyCorrections__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__RobotHighLatencyCorrections, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__RobotHighLatencyCorrections, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__RobotHighLatencyCorrections, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cause",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__RobotHighLatencyCorrections, cause),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_message_members = {
  "april_msgs__msg",  // message namespace
  "RobotHighLatencyCorrections",  // message name
  4,  // number of fields
  sizeof(april_msgs__msg__RobotHighLatencyCorrections),
  RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_message_member_array,  // message members
  RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_message_type_support_handle = {
  0,
  &RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_april_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, april_msgs, msg, RobotHighLatencyCorrections)() {
  RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_message_type_support_handle.typesupport_identifier) {
    RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotHighLatencyCorrections__rosidl_typesupport_introspection_c__RobotHighLatencyCorrections_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
