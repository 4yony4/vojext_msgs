// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__STRUCT_H_

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
#include "vojext_msgs/msg/detail/human_motion__struct.h"

// Struct defined in msg/HumanParameterIntention in the package vojext_msgs.
typedef struct vojext_msgs__msg__HumanParameterIntention
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String motion_prediction;
  float engagement_level;
  float cognitive_level;
  float mood_level;
  vojext_msgs__msg__HumanMotion__Sequence humanmotion_list;
} vojext_msgs__msg__HumanParameterIntention;

// Struct for a sequence of vojext_msgs__msg__HumanParameterIntention.
typedef struct vojext_msgs__msg__HumanParameterIntention__Sequence
{
  vojext_msgs__msg__HumanParameterIntention * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__HumanParameterIntention__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__STRUCT_H_
