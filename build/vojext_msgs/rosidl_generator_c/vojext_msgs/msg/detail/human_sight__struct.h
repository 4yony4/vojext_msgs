// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/HumanSight.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HUMAN_SIGHT__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__HUMAN_SIGHT__STRUCT_H_

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
// Member 'sight_direction'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/HumanSight in the package vojext_msgs.
typedef struct vojext_msgs__msg__HumanSight
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String sight_direction;
} vojext_msgs__msg__HumanSight;

// Struct for a sequence of vojext_msgs__msg__HumanSight.
typedef struct vojext_msgs__msg__HumanSight__Sequence
{
  vojext_msgs__msg__HumanSight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__HumanSight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__HUMAN_SIGHT__STRUCT_H_
