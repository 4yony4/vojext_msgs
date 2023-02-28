// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vojext_msgs:msg/ObjectsEstimatedPoses.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__STRUCT_H_
#define VOJEXT_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__STRUCT_H_

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
#include "vojext_msgs/msg/detail/object_estimated_pose__struct.h"

// Struct defined in msg/ObjectsEstimatedPoses in the package vojext_msgs.
typedef struct vojext_msgs__msg__ObjectsEstimatedPoses
{
  std_msgs__msg__Header header;
  vojext_msgs__msg__ObjectEstimatedPose__Sequence objects_estimated_poses;
} vojext_msgs__msg__ObjectsEstimatedPoses;

// Struct for a sequence of vojext_msgs__msg__ObjectsEstimatedPoses.
typedef struct vojext_msgs__msg__ObjectsEstimatedPoses__Sequence
{
  vojext_msgs__msg__ObjectsEstimatedPoses * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vojext_msgs__msg__ObjectsEstimatedPoses__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOJEXT_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__STRUCT_H_
