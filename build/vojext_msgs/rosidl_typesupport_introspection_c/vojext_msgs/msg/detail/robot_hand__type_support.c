// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vojext_msgs:msg/RobotHand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vojext_msgs/msg/detail/robot_hand__rosidl_typesupport_introspection_c.h"
#include "vojext_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vojext_msgs/msg/detail/robot_hand__functions.h"
#include "vojext_msgs/msg/detail/robot_hand__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `state`
#include "rosidl_runtime_c/string_functions.h"
// Member `robothandkinematic_list`
#include "vojext_msgs/msg/robot_hand_kinematic.h"
// Member `robothandkinematic_list`
#include "vojext_msgs/msg/detail/robot_hand_kinematic__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotHand__rosidl_typesupport_introspection_c__RobotHand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vojext_msgs__msg__RobotHand__init(message_memory);
}

void RobotHand__rosidl_typesupport_introspection_c__RobotHand_fini_function(void * message_memory)
{
  vojext_msgs__msg__RobotHand__fini(message_memory);
}

size_t RobotHand__rosidl_typesupport_introspection_c__size_function__RobotHandKinematic__robothandkinematic_list(
  const void * untyped_member)
{
  const vojext_msgs__msg__RobotHandKinematic__Sequence * member =
    (const vojext_msgs__msg__RobotHandKinematic__Sequence *)(untyped_member);
  return member->size;
}

const void * RobotHand__rosidl_typesupport_introspection_c__get_const_function__RobotHandKinematic__robothandkinematic_list(
  const void * untyped_member, size_t index)
{
  const vojext_msgs__msg__RobotHandKinematic__Sequence * member =
    (const vojext_msgs__msg__RobotHandKinematic__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RobotHand__rosidl_typesupport_introspection_c__get_function__RobotHandKinematic__robothandkinematic_list(
  void * untyped_member, size_t index)
{
  vojext_msgs__msg__RobotHandKinematic__Sequence * member =
    (vojext_msgs__msg__RobotHandKinematic__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RobotHand__rosidl_typesupport_introspection_c__resize_function__RobotHandKinematic__robothandkinematic_list(
  void * untyped_member, size_t size)
{
  vojext_msgs__msg__RobotHandKinematic__Sequence * member =
    (vojext_msgs__msg__RobotHandKinematic__Sequence *)(untyped_member);
  vojext_msgs__msg__RobotHandKinematic__Sequence__fini(member);
  return vojext_msgs__msg__RobotHandKinematic__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RobotHand__rosidl_typesupport_introspection_c__RobotHand_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__RobotHand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__RobotHand, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robothandkinematic_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__RobotHand, robothandkinematic_list),  // bytes offset in struct
    NULL,  // default value
    RobotHand__rosidl_typesupport_introspection_c__size_function__RobotHandKinematic__robothandkinematic_list,  // size() function pointer
    RobotHand__rosidl_typesupport_introspection_c__get_const_function__RobotHandKinematic__robothandkinematic_list,  // get_const(index) function pointer
    RobotHand__rosidl_typesupport_introspection_c__get_function__RobotHandKinematic__robothandkinematic_list,  // get(index) function pointer
    RobotHand__rosidl_typesupport_introspection_c__resize_function__RobotHandKinematic__robothandkinematic_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotHand__rosidl_typesupport_introspection_c__RobotHand_message_members = {
  "vojext_msgs__msg",  // message namespace
  "RobotHand",  // message name
  3,  // number of fields
  sizeof(vojext_msgs__msg__RobotHand),
  RobotHand__rosidl_typesupport_introspection_c__RobotHand_message_member_array,  // message members
  RobotHand__rosidl_typesupport_introspection_c__RobotHand_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotHand__rosidl_typesupport_introspection_c__RobotHand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotHand__rosidl_typesupport_introspection_c__RobotHand_message_type_support_handle = {
  0,
  &RobotHand__rosidl_typesupport_introspection_c__RobotHand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vojext_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vojext_msgs, msg, RobotHand)() {
  RobotHand__rosidl_typesupport_introspection_c__RobotHand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RobotHand__rosidl_typesupport_introspection_c__RobotHand_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vojext_msgs, msg, RobotHandKinematic)();
  if (!RobotHand__rosidl_typesupport_introspection_c__RobotHand_message_type_support_handle.typesupport_identifier) {
    RobotHand__rosidl_typesupport_introspection_c__RobotHand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotHand__rosidl_typesupport_introspection_c__RobotHand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
