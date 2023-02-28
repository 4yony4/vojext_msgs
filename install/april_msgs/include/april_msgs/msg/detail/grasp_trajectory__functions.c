// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from april_msgs:msg/GraspTrajectory.idl
// generated code does not contain a copyright notice
#include "april_msgs/msg/detail/grasp_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ee_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `hand_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `fingers_states`
#include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
april_msgs__msg__GraspTrajectory__init(april_msgs__msg__GraspTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    april_msgs__msg__GraspTrajectory__fini(msg);
    return false;
  }
  // ee_frame_id
  if (!rosidl_runtime_c__String__init(&msg->ee_frame_id)) {
    april_msgs__msg__GraspTrajectory__fini(msg);
    return false;
  }
  // hand_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->hand_poses, 0)) {
    april_msgs__msg__GraspTrajectory__fini(msg);
    return false;
  }
  // fingers_states
  if (!sensor_msgs__msg__JointState__Sequence__init(&msg->fingers_states, 0)) {
    april_msgs__msg__GraspTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
april_msgs__msg__GraspTrajectory__fini(april_msgs__msg__GraspTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ee_frame_id
  rosidl_runtime_c__String__fini(&msg->ee_frame_id);
  // hand_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->hand_poses);
  // fingers_states
  sensor_msgs__msg__JointState__Sequence__fini(&msg->fingers_states);
}

bool
april_msgs__msg__GraspTrajectory__are_equal(const april_msgs__msg__GraspTrajectory * lhs, const april_msgs__msg__GraspTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // ee_frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ee_frame_id), &(rhs->ee_frame_id)))
  {
    return false;
  }
  // hand_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->hand_poses), &(rhs->hand_poses)))
  {
    return false;
  }
  // fingers_states
  if (!sensor_msgs__msg__JointState__Sequence__are_equal(
      &(lhs->fingers_states), &(rhs->fingers_states)))
  {
    return false;
  }
  return true;
}

bool
april_msgs__msg__GraspTrajectory__copy(
  const april_msgs__msg__GraspTrajectory * input,
  april_msgs__msg__GraspTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // ee_frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->ee_frame_id), &(output->ee_frame_id)))
  {
    return false;
  }
  // hand_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->hand_poses), &(output->hand_poses)))
  {
    return false;
  }
  // fingers_states
  if (!sensor_msgs__msg__JointState__Sequence__copy(
      &(input->fingers_states), &(output->fingers_states)))
  {
    return false;
  }
  return true;
}

april_msgs__msg__GraspTrajectory *
april_msgs__msg__GraspTrajectory__create()
{
  april_msgs__msg__GraspTrajectory * msg = (april_msgs__msg__GraspTrajectory *)malloc(sizeof(april_msgs__msg__GraspTrajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(april_msgs__msg__GraspTrajectory));
  bool success = april_msgs__msg__GraspTrajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
april_msgs__msg__GraspTrajectory__destroy(april_msgs__msg__GraspTrajectory * msg)
{
  if (msg) {
    april_msgs__msg__GraspTrajectory__fini(msg);
  }
  free(msg);
}


bool
april_msgs__msg__GraspTrajectory__Sequence__init(april_msgs__msg__GraspTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  april_msgs__msg__GraspTrajectory * data = NULL;
  if (size) {
    data = (april_msgs__msg__GraspTrajectory *)calloc(size, sizeof(april_msgs__msg__GraspTrajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = april_msgs__msg__GraspTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        april_msgs__msg__GraspTrajectory__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
april_msgs__msg__GraspTrajectory__Sequence__fini(april_msgs__msg__GraspTrajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      april_msgs__msg__GraspTrajectory__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

april_msgs__msg__GraspTrajectory__Sequence *
april_msgs__msg__GraspTrajectory__Sequence__create(size_t size)
{
  april_msgs__msg__GraspTrajectory__Sequence * array = (april_msgs__msg__GraspTrajectory__Sequence *)malloc(sizeof(april_msgs__msg__GraspTrajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = april_msgs__msg__GraspTrajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
april_msgs__msg__GraspTrajectory__Sequence__destroy(april_msgs__msg__GraspTrajectory__Sequence * array)
{
  if (array) {
    april_msgs__msg__GraspTrajectory__Sequence__fini(array);
  }
  free(array);
}

bool
april_msgs__msg__GraspTrajectory__Sequence__are_equal(const april_msgs__msg__GraspTrajectory__Sequence * lhs, const april_msgs__msg__GraspTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!april_msgs__msg__GraspTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
april_msgs__msg__GraspTrajectory__Sequence__copy(
  const april_msgs__msg__GraspTrajectory__Sequence * input,
  april_msgs__msg__GraspTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(april_msgs__msg__GraspTrajectory);
    april_msgs__msg__GraspTrajectory * data =
      (april_msgs__msg__GraspTrajectory *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!april_msgs__msg__GraspTrajectory__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          april_msgs__msg__GraspTrajectory__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!april_msgs__msg__GraspTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
