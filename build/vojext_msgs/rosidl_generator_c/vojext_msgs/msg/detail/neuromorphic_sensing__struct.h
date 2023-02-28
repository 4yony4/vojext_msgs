// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/NeuromorphicSensing.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_H_

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

// Struct defined in msg/NeuromorphicSensing in the package vojext_msgs.
typedef struct vojext_msgs__msg__NeuromorphicSensing
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String point1_speed;
  rosidl_runtime_c__String point2_speed;
} vojext_msgs__msg__NeuromorphicSensing;

// Struct for a sequence of vojext_msgs__msg__NeuromorphicSensing.
typedef struct vojext_msgs__msg__NeuromorphicSensing__Sequence
{
  vojext_msgs__msg__NeuromorphicSensing * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__NeuromorphicSensing__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_H_
