// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__STRUCT_H_

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
// Member 'motion_prediction'
#include "rosidl_runtime_c/string.h"
// Member 'humanmotion_list'
#include "april_msgs/msg/detail/human_motion__struct.h"

// Struct defined in msg/HumanParameterIntention in the package april_msgs.
typedef struct april_msgs__msg__HumanParameterIntention
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String motion_prediction;
  float engagement_level;
  float cognitive_level;
  float mood_level;
  april_msgs__msg__HumanMotion__Sequence humanmotion_list;
} april_msgs__msg__HumanParameterIntention;

// Struct for a sequence of april_msgs__msg__HumanParameterIntention.
typedef struct april_msgs__msg__HumanParameterIntention__Sequence
{
  april_msgs__msg__HumanParameterIntention * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__HumanParameterIntention__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__STRUCT_H_
