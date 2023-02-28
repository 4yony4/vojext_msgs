// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/GraspTrajectory.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__GRASP_TRAJECTORY__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__GRASP_TRAJECTORY__STRUCT_H_

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
// Member 'ee_frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'hand_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'fingers_states'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

// Struct defined in msg/GraspTrajectory in the package april_msgs.
typedef struct april_msgs__msg__GraspTrajectory
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String ee_frame_id;
  geometry_msgs__msg__Pose__Sequence hand_poses;
  sensor_msgs__msg__JointState__Sequence fingers_states;
} april_msgs__msg__GraspTrajectory;

// Struct for a sequence of april_msgs__msg__GraspTrajectory.
typedef struct april_msgs__msg__GraspTrajectory__Sequence
{
  april_msgs__msg__GraspTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__GraspTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__GRASP_TRAJECTORY__STRUCT_H_
