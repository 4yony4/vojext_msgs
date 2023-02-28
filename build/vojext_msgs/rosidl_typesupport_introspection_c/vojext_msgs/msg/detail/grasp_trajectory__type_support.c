// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vojext_msgs:msg/GraspTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vojext_msgs/msg/detail/grasp_trajectory__rosidl_typesupport_introspection_c.h"
#include "vojext_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vojext_msgs/msg/detail/grasp_trajectory__functions.h"
#include "vojext_msgs/msg/detail/grasp_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ee_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `hand_poses`
#include "geometry_msgs/msg/pose.h"
// Member `hand_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `fingers_states`
#include "sensor_msgs/msg/joint_state.h"
// Member `fingers_states`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vojext_msgs__msg__GraspTrajectory__init(message_memory);
}

void GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_fini_function(void * message_memory)
{
  vojext_msgs__msg__GraspTrajectory__fini(message_memory);
}

size_t GraspTrajectory__rosidl_typesupport_introspection_c__size_function__Pose__hand_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * GraspTrajectory__rosidl_typesupport_introspection_c__get_const_function__Pose__hand_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GraspTrajectory__rosidl_typesupport_introspection_c__get_function__Pose__hand_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GraspTrajectory__rosidl_typesupport_introspection_c__resize_function__Pose__hand_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t GraspTrajectory__rosidl_typesupport_introspection_c__size_function__JointState__fingers_states(
  const void * untyped_member)
{
  const sensor_msgs__msg__JointState__Sequence * member =
    (const sensor_msgs__msg__JointState__Sequence *)(untyped_member);
  return member->size;
}

const void * GraspTrajectory__rosidl_typesupport_introspection_c__get_const_function__JointState__fingers_states(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__JointState__Sequence * member =
    (const sensor_msgs__msg__JointState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GraspTrajectory__rosidl_typesupport_introspection_c__get_function__JointState__fingers_states(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__JointState__Sequence * member =
    (sensor_msgs__msg__JointState__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GraspTrajectory__rosidl_typesupport_introspection_c__resize_function__JointState__fingers_states(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__JointState__Sequence * member =
    (sensor_msgs__msg__JointState__Sequence *)(untyped_member);
  sensor_msgs__msg__JointState__Sequence__fini(member);
  return sensor_msgs__msg__JointState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__GraspTrajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ee_frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__GraspTrajectory, ee_frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__GraspTrajectory, hand_poses),  // bytes offset in struct
    NULL,  // default value
    GraspTrajectory__rosidl_typesupport_introspection_c__size_function__Pose__hand_poses,  // size() function pointer
    GraspTrajectory__rosidl_typesupport_introspection_c__get_const_function__Pose__hand_poses,  // get_const(index) function pointer
    GraspTrajectory__rosidl_typesupport_introspection_c__get_function__Pose__hand_poses,  // get(index) function pointer
    GraspTrajectory__rosidl_typesupport_introspection_c__resize_function__Pose__hand_poses  // resize(index) function pointer
  },
  {
    "fingers_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__GraspTrajectory, fingers_states),  // bytes offset in struct
    NULL,  // default value
    GraspTrajectory__rosidl_typesupport_introspection_c__size_function__JointState__fingers_states,  // size() function pointer
    GraspTrajectory__rosidl_typesupport_introspection_c__get_const_function__JointState__fingers_states,  // get_const(index) function pointer
    GraspTrajectory__rosidl_typesupport_introspection_c__get_function__JointState__fingers_states,  // get(index) function pointer
    GraspTrajectory__rosidl_typesupport_introspection_c__resize_function__JointState__fingers_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_message_members = {
  "vojext_msgs__msg",  // message namespace
  "GraspTrajectory",  // message name
  4,  // number of fields
  sizeof(vojext_msgs__msg__GraspTrajectory),
  GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_message_member_array,  // message members
  GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_message_type_support_handle = {
  0,
  &GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vojext_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vojext_msgs, msg, GraspTrajectory)() {
  GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  if (!GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_message_type_support_handle.typesupport_identifier) {
    GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GraspTrajectory__rosidl_typesupport_introspection_c__GraspTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
