// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vojext_msgs:msg/SymbolicAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vojext_msgs/msg/detail/symbolic_action__rosidl_typesupport_introspection_c.h"
#include "vojext_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vojext_msgs/msg/detail/symbolic_action__functions.h"
#include "vojext_msgs/msg/detail/symbolic_action__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `action_type`
// Member `target_id`
// Member `target_pose`
#include "rosidl_runtime_c/string_functions.h"
// Member `grasp_facts`
#include "vojext_msgs/msg/grasp_facts.h"
// Member `grasp_facts`
#include "vojext_msgs/msg/detail/grasp_facts__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vojext_msgs__msg__SymbolicAction__init(message_memory);
}

void SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_fini_function(void * message_memory)
{
  vojext_msgs__msg__SymbolicAction__fini(message_memory);
}

size_t SymbolicAction__rosidl_typesupport_introspection_c__size_function__GraspFacts__grasp_facts(
  const void * untyped_member)
{
  const vojext_msgs__msg__GraspFacts__Sequence * member =
    (const vojext_msgs__msg__GraspFacts__Sequence *)(untyped_member);
  return member->size;
}

const void * SymbolicAction__rosidl_typesupport_introspection_c__get_const_function__GraspFacts__grasp_facts(
  const void * untyped_member, size_t index)
{
  const vojext_msgs__msg__GraspFacts__Sequence * member =
    (const vojext_msgs__msg__GraspFacts__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SymbolicAction__rosidl_typesupport_introspection_c__get_function__GraspFacts__grasp_facts(
  void * untyped_member, size_t index)
{
  vojext_msgs__msg__GraspFacts__Sequence * member =
    (vojext_msgs__msg__GraspFacts__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SymbolicAction__rosidl_typesupport_introspection_c__resize_function__GraspFacts__grasp_facts(
  void * untyped_member, size_t size)
{
  vojext_msgs__msg__GraspFacts__Sequence * member =
    (vojext_msgs__msg__GraspFacts__Sequence *)(untyped_member);
  vojext_msgs__msg__GraspFacts__Sequence__fini(member);
  return vojext_msgs__msg__GraspFacts__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__SymbolicAction, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__SymbolicAction, action_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__SymbolicAction, target_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasp_facts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__SymbolicAction, grasp_facts),  // bytes offset in struct
    NULL,  // default value
    SymbolicAction__rosidl_typesupport_introspection_c__size_function__GraspFacts__grasp_facts,  // size() function pointer
    SymbolicAction__rosidl_typesupport_introspection_c__get_const_function__GraspFacts__grasp_facts,  // get_const(index) function pointer
    SymbolicAction__rosidl_typesupport_introspection_c__get_function__GraspFacts__grasp_facts,  // get(index) function pointer
    SymbolicAction__rosidl_typesupport_introspection_c__resize_function__GraspFacts__grasp_facts  // resize(index) function pointer
  },
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vojext_msgs__msg__SymbolicAction, target_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_message_members = {
  "vojext_msgs__msg",  // message namespace
  "SymbolicAction",  // message name
  5,  // number of fields
  sizeof(vojext_msgs__msg__SymbolicAction),
  SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_message_member_array,  // message members
  SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_init_function,  // function to initialize message memory (memory has to be allocated)
  SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_message_type_support_handle = {
  0,
  &SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vojext_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vojext_msgs, msg, SymbolicAction)() {
  SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vojext_msgs, msg, GraspFacts)();
  if (!SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_message_type_support_handle.typesupport_identifier) {
    SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SymbolicAction__rosidl_typesupport_introspection_c__SymbolicAction_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
