// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/FatigueAnalysis.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__FATIGUE_ANALYSIS__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__FATIGUE_ANALYSIS__STRUCT_H_

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

// Struct defined in msg/FatigueAnalysis in the package april_msgs.
typedef struct april_msgs__msg__FatigueAnalysis
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String fatigue_values[3];
} april_msgs__msg__FatigueAnalysis;

// Struct for a sequence of april_msgs__msg__FatigueAnalysis.
typedef struct april_msgs__msg__FatigueAnalysis__Sequence
{
  april_msgs__msg__FatigueAnalysis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__FatigueAnalysis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__FATIGUE_ANALYSIS__STRUCT_H_
