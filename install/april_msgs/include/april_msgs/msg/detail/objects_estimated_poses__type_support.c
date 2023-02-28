// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from april_msgs:msg/ObjectsEstimatedPoses.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "april_msgs/msg/detail/objects_estimated_poses__rosidl_typesupport_introspection_c.h"
#include "april_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "april_msgs/msg/detail/objects_estimated_poses__functions.h"
#include "april_msgs/msg/detail/objects_estimated_poses__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects_estimated_poses`
#include "april_msgs/msg/object_estimated_pose.h"
// Member `objects_estimated_poses`
#include "april_msgs/msg/detail/object_estimated_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  april_msgs__msg__ObjectsEstimatedPoses__init(message_memory);
}

void ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_fini_function(void * message_memory)
{
  april_msgs__msg__ObjectsEstimatedPoses__fini(message_memory);
}

size_t ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__size_function__ObjectEstimatedPose__objects_estimated_poses(
  const void * untyped_member)
{
  const april_msgs__msg__ObjectEstimatedPose__Sequence * member =
    (const april_msgs__msg__ObjectEstimatedPose__Sequence *)(untyped_member);
  return member->size;
}

const void * ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__get_const_function__ObjectEstimatedPose__objects_estimated_poses(
  const void * untyped_member, size_t index)
{
  const april_msgs__msg__ObjectEstimatedPose__Sequence * member =
    (const april_msgs__msg__ObjectEstimatedPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__get_function__ObjectEstimatedPose__objects_estimated_poses(
  void * untyped_member, size_t index)
{
  april_msgs__msg__ObjectEstimatedPose__Sequence * member =
    (april_msgs__msg__ObjectEstimatedPose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__resize_function__ObjectEstimatedPose__objects_estimated_poses(
  void * untyped_member, size_t size)
{
  april_msgs__msg__ObjectEstimatedPose__Sequence * member =
    (april_msgs__msg__ObjectEstimatedPose__Sequence *)(untyped_member);
  april_msgs__msg__ObjectEstimatedPose__Sequence__fini(member);
  return april_msgs__msg__ObjectEstimatedPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__ObjectsEstimatedPoses, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects_estimated_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(april_msgs__msg__ObjectsEstimatedPoses, objects_estimated_poses),  // bytes offset in struct
    NULL,  // default value
    ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__size_function__ObjectEstimatedPose__objects_estimated_poses,  // size() function pointer
    ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__get_const_function__ObjectEstimatedPose__objects_estimated_poses,  // get_const(index) function pointer
    ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__get_function__ObjectEstimatedPose__objects_estimated_poses,  // get(index) function pointer
    ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__resize_function__ObjectEstimatedPose__objects_estimated_poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_message_members = {
  "april_msgs__msg",  // message namespace
  "ObjectsEstimatedPoses",  // message name
  2,  // number of fields
  sizeof(april_msgs__msg__ObjectsEstimatedPoses),
  ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_message_member_array,  // message members
  ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_message_type_support_handle = {
  0,
  &ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_april_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, april_msgs, msg, ObjectsEstimatedPoses)() {
  ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, april_msgs, msg, ObjectEstimatedPose)();
  if (!ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_message_type_support_handle.typesupport_identifier) {
    ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectsEstimatedPoses__rosidl_typesupport_introspection_c__ObjectsEstimatedPoses_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
