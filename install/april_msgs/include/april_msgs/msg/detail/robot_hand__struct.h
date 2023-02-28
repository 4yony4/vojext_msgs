// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/RobotHand.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_HAND__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_HAND__STRUCT_H_

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
// Member 'robothandkinematic_list'
#include "april_msgs/msg/detail/robot_hand_kinematic__struct.h"

// Struct defined in msg/RobotHand in the package april_msgs.
typedef struct april_msgs__msg__RobotHand
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String state;
  april_msgs__msg__RobotHandKinematic__Sequence robothandkinematic_list;
} april_msgs__msg__RobotHand;

// Struct for a sequence of april_msgs__msg__RobotHand.
typedef struct april_msgs__msg__RobotHand__Sequence
{
  april_msgs__msg__RobotHand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__RobotHand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_HAND__STRUCT_H_
