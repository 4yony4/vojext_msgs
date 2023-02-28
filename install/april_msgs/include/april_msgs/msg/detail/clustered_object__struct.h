// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from april_msgs:msg/ClusteredObject.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__CLUSTERED_OBJECT__STRUCT_H_
#define APRIL_MSGS__MSG__DETAIL__CLUSTERED_OBJECT__STRUCT_H_

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
// Member 'clustered_point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'sclass'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ClusteredObject in the package april_msgs.
typedef struct april_msgs__msg__ClusteredObject
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__PointCloud2 clustered_point_cloud;
  int16_t id;
  rosidl_runtime_c__String sclass;
} april_msgs__msg__ClusteredObject;

// Struct for a sequence of april_msgs__msg__ClusteredObject.
typedef struct april_msgs__msg__ClusteredObject__Sequence
{
  april_msgs__msg__ClusteredObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} april_msgs__msg__ClusteredObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRIL_MSGS__MSG__DETAIL__CLUSTERED_OBJECT__STRUCT_H_
