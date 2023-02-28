// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/HumanMotion.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HUMAN_MOTION__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__HUMAN_MOTION__STRUCT_H_

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

// Struct defined in msg/HumanMotion in the package april_msgs.
typedef struct april_msgs__msg__HumanMotion
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
} april_msgs__msg__HumanMotion;

// Struct for a sequence of april_msgs__msg__HumanMotion.
typedef struct april_msgs__msg__HumanMotion__Sequence
{
  april_msgs__msg__HumanMotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__HumanMotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__HUMAN_MOTION__STRUCT_H_
