// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/FatigueAnalysis.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__FATIGUE_ANALYSIS__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__FATIGUE_ANALYSIS__STRUCT_H_

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
// Member 'fatigue_values'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/FatigueAnalysis in the package vojext_msgs.
typedef struct vojext_msgs__msg__FatigueAnalysis
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String fatigue_values[3];
} vojext_msgs__msg__FatigueAnalysis;

// Struct for a sequence of vojext_msgs__msg__FatigueAnalysis.
typedef struct vojext_msgs__msg__FatigueAnalysis__Sequence
{
  vojext_msgs__msg__FatigueAnalysis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__FatigueAnalysis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__FATIGUE_ANALYSIS__STRUCT_H_
