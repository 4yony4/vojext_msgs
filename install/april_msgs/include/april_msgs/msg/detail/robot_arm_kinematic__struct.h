// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/RobotArmKinematic.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_ARM_KINEMATIC__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_ARM_KINEMATIC__STRUCT_H_

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
// Member 'position'
// Member 'velocity'
// Member 'acceleration'
// Member 'forces'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RobotArmKinematic in the package april_msgs.
typedef struct april_msgs__msg__RobotArmKinematic
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String position;
  rosidl_runtime_c__String velocity;
  rosidl_runtime_c__String acceleration;
  rosidl_runtime_c__String forces;
} april_msgs__msg__RobotArmKinematic;

// Struct for a sequence of april_msgs__msg__RobotArmKinematic.
typedef struct april_msgs__msg__RobotArmKinematic__Sequence
{
  april_msgs__msg__RobotArmKinematic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__RobotArmKinematic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_ARM_KINEMATIC__STRUCT_H_
