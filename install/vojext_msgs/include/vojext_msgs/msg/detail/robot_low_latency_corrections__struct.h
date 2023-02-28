// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/RobotLowLatencyCorrections.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ROBOT_LOW_LATENCY_CORRECTIONS__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__ROBOT_LOW_LATENCY_CORRECTIONS__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RobotLowLatencyCorrections in the package vojext_msgs.
typedef struct vojext_msgs__msg__RobotLowLatencyCorrections
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence action;
} vojext_msgs__msg__RobotLowLatencyCorrections;

// Struct for a sequence of vojext_msgs__msg__RobotLowLatencyCorrections.
typedef struct vojext_msgs__msg__RobotLowLatencyCorrections__Sequence
{
  vojext_msgs__msg__RobotLowLatencyCorrections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__RobotLowLatencyCorrections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__ROBOT_LOW_LATENCY_CORRECTIONS__STRUCT_H_
