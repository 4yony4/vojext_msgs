// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/NeuromorphicSensing.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_H_

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
// Member 'point1_speed'
// Member 'point2_speed'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/NeuromorphicSensing in the package april_msgs.
typedef struct april_msgs__msg__NeuromorphicSensing
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String point1_speed;
  rosidl_runtime_c__String point2_speed;
} april_msgs__msg__NeuromorphicSensing;

// Struct for a sequence of april_msgs__msg__NeuromorphicSensing.
typedef struct april_msgs__msg__NeuromorphicSensing__Sequence
{
  april_msgs__msg__NeuromorphicSensing * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__NeuromorphicSensing__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_H_
