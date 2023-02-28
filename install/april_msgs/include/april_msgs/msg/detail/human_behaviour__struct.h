// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_H_

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
#include "april_msgs/msg/detail/human_grasping_strategies__struct.h"

// Struct defined in msg/HumanBehaviour in the package april_msgs.
typedef struct april_msgs__msg__HumanBehaviour
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String body_posture;
  april_msgs__msg__HumanGraspingStrategies__Sequence humamgrasping_list;
} april_msgs__msg__HumanBehaviour;

// Struct for a sequence of april_msgs__msg__HumanBehaviour.
typedef struct april_msgs__msg__HumanBehaviour__Sequence
{
  april_msgs__msg__HumanBehaviour * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__HumanBehaviour__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_H_
