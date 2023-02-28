// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/RobotArm.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ROBOT_ARM__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__ROBOT_ARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'state'
#include "rosidl_runtime_c/string.h"
// Member 'robotarmkinematic_list'
#include "vojext_msgs/msg/detail/robot_arm_kinematic__struct.h"

// Struct defined in msg/RobotArm in the package vojext_msgs.
typedef struct vojext_msgs__msg__RobotArm
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String state;
  vojext_msgs__msg__RobotArmKinematic__Sequence robotarmkinematic_list;
} vojext_msgs__msg__RobotArm;

// Struct for a sequence of vojext_msgs__msg__RobotArm.
typedef struct vojext_msgs__msg__RobotArm__Sequence
{
  vojext_msgs__msg__RobotArm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__RobotArm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__ROBOT_ARM__STRUCT_H_
