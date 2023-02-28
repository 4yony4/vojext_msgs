// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from april_msgs:msg/RobotGraspingStrategies.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "april_msgs/msg/detail/robot_grasping_strategies__rosidl_typesupport_introspection_c.h"
#include "april_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "april_msgs/msg/detail/robot_grasping_strategies__functions.h"
#include "april_msgs/msg/detail/robot_grasping_strategies__struct.h"


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

void RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  april_msgs__msg__RobotGraspingStrategies__init(message_memory);
}

void RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_fini_function(void * message_memory)
{
  april_msgs__msg__RobotGraspingStrategies__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__RobotGraspingStrategies, header),  // bytes offset in struct
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
    offsetof(april_msgs__msg__RobotGraspingStrategies, type),  // bytes offset in struct
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
    offsetof(april_msgs__msg__RobotGraspingStrategies, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timetolift",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__RobotGraspingStrategies, timetolift),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_message_members = {
  "april_msgs__msg",  // message namespace
  "RobotGraspingStrategies",  // message name
  4,  // number of fields
  sizeof(april_msgs__msg__RobotGraspingStrategies),
  RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_message_member_array,  // message members
  RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_message_type_support_handle = {
  0,
  &RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_april_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, april_msgs, msg, RobotGraspingStrategies)() {
  RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_message_type_support_handle.typesupport_identifier) {
    RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotGraspingStrategies__rosidl_typesupport_introspection_c__RobotGraspingStrategies_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
