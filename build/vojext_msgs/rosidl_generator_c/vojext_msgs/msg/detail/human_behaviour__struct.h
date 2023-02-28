// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_H_

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
// Member 'body_posture'
#include "rosidl_runtime_c/string.h"
// Member 'humamgrasping_list'
#include "vojext_msgs/msg/detail/human_grasping_strategies__struct.h"

// Struct defined in msg/HumanBehaviour in the package vojext_msgs.
typedef struct vojext_msgs__msg__HumanBehaviour
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String body_posture;
  vojext_msgs__msg__HumanGraspingStrategies__Sequence humamgrasping_list;
} vojext_msgs__msg__HumanBehaviour;

// Struct for a sequence of vojext_msgs__msg__HumanBehaviour.
typedef struct vojext_msgs__msg__HumanBehaviour__Sequence
{
  vojext_msgs__msg__HumanBehaviour * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__HumanBehaviour__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_H_
