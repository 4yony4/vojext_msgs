// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from april_msgs:msg/HumanGraspingStrategies.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "april_msgs/msg/detail/human_grasping_strategies__rosidl_typesupport_introspection_c.h"
#include "april_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "april_msgs/msg/detail/human_grasping_strategies__functions.h"
#include "april_msgs/msg/detail/human_grasping_strategies__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `type`
// Member `location`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  april_msgs__msg__HumanGraspingStrategies__init(message_memory);
}

void HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_fini_function(void * message_memory)
{
  april_msgs__msg__HumanGraspingStrategies__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__HumanGraspingStrategies, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__HumanGraspingStrategies, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__HumanGraspingStrategies, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_message_members = {
  "april_msgs__msg",  // message namespace
  "HumanGraspingStrategies",  // message name
  3,  // number of fields
  sizeof(april_msgs__msg__HumanGraspingStrategies),
  HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_message_member_array,  // message members
  HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_init_function,  // function to initialize message memory (memory has to be allocated)
  HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_message_type_support_handle = {
  0,
  &HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_april_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, april_msgs, msg, HumanGraspingStrategies)() {
  HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_message_type_support_handle.typesupport_identifier) {
    HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HumanGraspingStrategies__rosidl_typesupport_introspection_c__HumanGraspingStrategies_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
