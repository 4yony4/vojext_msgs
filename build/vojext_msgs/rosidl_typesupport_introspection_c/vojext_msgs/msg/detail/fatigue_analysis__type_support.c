// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vojext_msgs:msg/FatigueAnalysis.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vojext_msgs/msg/detail/fatigue_analysis__rosidl_typesupport_introspection_c.h"
#include "vojext_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vojext_msgs/msg/detail/fatigue_analysis__functions.h"
#include "vojext_msgs/msg/detail/fatigue_analysis__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `fatigue_values`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vojext_msgs__msg__FatigueAnalysis__init(message_memory);
}

void FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_fini_function(void * message_memory)
{
  vojext_msgs__msg__FatigueAnalysis__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__FatigueAnalysis, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fatigue_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__FatigueAnalysis, fatigue_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_members = {
  "vojext_msgs__msg",  // message namespace
  "FatigueAnalysis",  // message name
  2,  // number of fields
  sizeof(vojext_msgs__msg__FatigueAnalysis),
  FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_member_array,  // message members
  FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_init_function,  // function to initialize message memory (memory has to be allocated)
  FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_type_support_handle = {
  0,
  &FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vojext_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vojext_msgs, msg, FatigueAnalysis)() {
  FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_type_support_handle.typesupport_identifier) {
    FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
