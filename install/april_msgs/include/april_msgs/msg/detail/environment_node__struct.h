// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/EnvironmentNode.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__STRUCT_H_

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
// Member 'image_rgb'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'image_3d'
#include "sensor_msgs/msg/detail/point_cloud__struct.h"
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/EnvironmentNode in the package april_msgs.
typedef struct april_msgs__msg__EnvironmentNode
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Image image_rgb;
  sensor_msgs__msg__PointCloud image_3d;
  rosidl_runtime_c__String class_name;
} april_msgs__msg__EnvironmentNode;

// Struct for a sequence of april_msgs__msg__EnvironmentNode.
typedef struct april_msgs__msg__EnvironmentNode__Sequence
{
  april_msgs__msg__EnvironmentNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__EnvironmentNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__STRUCT_H_
