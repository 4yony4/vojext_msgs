// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/ObjectsEstimatedPoses.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__STRUCT_H_

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
// Member 'objects_estimated_poses'
#include "april_msgs/msg/detail/object_estimated_pose__struct.h"

// Struct defined in msg/ObjectsEstimatedPoses in the package april_msgs.
typedef struct april_msgs__msg__ObjectsEstimatedPoses
{
  std_msgs__msg__Header header;
  april_msgs__msg__ObjectEstimatedPose__Sequence objects_estimated_poses;
} april_msgs__msg__ObjectsEstimatedPoses;

// Struct for a sequence of april_msgs__msg__ObjectsEstimatedPoses.
typedef struct april_msgs__msg__ObjectsEstimatedPoses__Sequence
{
  april_msgs__msg__ObjectsEstimatedPoses * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__ObjectsEstimatedPoses__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__STRUCT_H_
