// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/SymbolicAction.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__STRUCT_H_

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
// Member 'action_type'
// Member 'target_id'
// Member 'target_pose'
#include "rosidl_runtime_c/string.h"
// Member 'grasp_facts'
#include "april_msgs/msg/detail/grasp_facts__struct.h"

// Struct defined in msg/SymbolicAction in the package april_msgs.
typedef struct april_msgs__msg__SymbolicAction
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String action_type;
  rosidl_runtime_c__String__Sequence target_id;
  april_msgs__msg__GraspFacts__Sequence grasp_facts;
  rosidl_runtime_c__String target_pose;
} april_msgs__msg__SymbolicAction;

// Struct for a sequence of april_msgs__msg__SymbolicAction.
typedef struct april_msgs__msg__SymbolicAction__Sequence
{
  april_msgs__msg__SymbolicAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__SymbolicAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__STRUCT_H_
