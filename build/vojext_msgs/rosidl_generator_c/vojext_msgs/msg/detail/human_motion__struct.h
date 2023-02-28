// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/HumanMotion.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HUMAN_MOTION__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__HUMAN_MOTION__STRUCT_H_

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
// Member 'hand_position'
// Member 'hand_velocity'
// Member 'hand_acceleration'
// Member 'body_position'
// Member 'body_velocity'
// Member 'body_acceleration'
// Member 'tools_position'
// Member 'tools_velocity'
// Member 'tools_acceleration'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/HumanMotion in the package vojext_msgs.
typedef struct vojext_msgs__msg__HumanMotion
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String hand_position;
  rosidl_runtime_c__String hand_velocity;
  rosidl_runtime_c__String hand_acceleration;
  rosidl_runtime_c__String body_position;
  rosidl_runtime_c__String body_velocity;
  rosidl_runtime_c__String body_acceleration;
  rosidl_runtime_c__String tools_position;
  rosidl_runtime_c__String tools_velocity;
  rosidl_runtime_c__String tools_acceleration;
} vojext_msgs__msg__HumanMotion;

// Struct for a sequence of vojext_msgs__msg__HumanMotion.
typedef struct vojext_msgs__msg__HumanMotion__Sequence
{
  vojext_msgs__msg__HumanMotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__HumanMotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__HUMAN_MOTION__STRUCT_H_
