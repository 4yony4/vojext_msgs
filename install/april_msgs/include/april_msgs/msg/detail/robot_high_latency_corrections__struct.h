// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/RobotHighLatencyCorrections.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__STRUCT_H_

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
// Member 'action'
// Member 'description'
// Member 'cause'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RobotHighLatencyCorrections in the package april_msgs.
typedef struct april_msgs__msg__RobotHighLatencyCorrections
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence action;
  rosidl_runtime_c__String description;
  rosidl_runtime_c__String cause;
} april_msgs__msg__RobotHighLatencyCorrections;

// Struct for a sequence of april_msgs__msg__RobotHighLatencyCorrections.
typedef struct april_msgs__msg__RobotHighLatencyCorrections__Sequence
{
  april_msgs__msg__RobotHighLatencyCorrections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__RobotHighLatencyCorrections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__STRUCT_H_
