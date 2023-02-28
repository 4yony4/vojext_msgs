// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/SymbolicAction.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__BUILDER_HPP_

#include "vojext_msgs/msg/detail/symbolic_action__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_SymbolicAction_target_pose
{
public:
  explicit Init_SymbolicAction_target_pose(::vojext_msgs::msg::SymbolicAction & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::SymbolicAction target_pose(::vojext_msgs::msg::SymbolicAction::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::SymbolicAction msg_;
};

class Init_SymbolicAction_grasp_facts
{
public:
  explicit Init_SymbolicAction_grasp_facts(::vojext_msgs::msg::SymbolicAction & msg)
  : msg_(msg)
  {}
  Init_SymbolicAction_target_pose grasp_facts(::vojext_msgs::msg::SymbolicAction::_grasp_facts_type arg)
  {
    msg_.grasp_facts = std::move(arg);
    return Init_SymbolicAction_target_pose(msg_);
  }

private:
  ::vojext_msgs::msg::SymbolicAction msg_;
};

class Init_SymbolicAction_target_id
{
public:
  explicit Init_SymbolicAction_target_id(::vojext_msgs::msg::SymbolicAction & msg)
  : msg_(msg)
  {}
  Init_SymbolicAction_grasp_facts target_id(::vojext_msgs::msg::SymbolicAction::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_SymbolicAction_grasp_facts(msg_);
  }

private:
  ::vojext_msgs::msg::SymbolicAction msg_;
};

class Init_SymbolicAction_action_type
{
public:
  explicit Init_SymbolicAction_action_type(::vojext_msgs::msg::SymbolicAction & msg)
  : msg_(msg)
  {}
  Init_SymbolicAction_target_id action_type(::vojext_msgs::msg::SymbolicAction::_action_type_type arg)
  {
    msg_.action_type = std::move(arg);
    return Init_SymbolicAction_target_id(msg_);
  }

private:
  ::vojext_msgs::msg::SymbolicAction msg_;
};

class Init_SymbolicAction_header
{
public:
  Init_SymbolicAction_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SymbolicAction_action_type header(::vojext_msgs::msg::SymbolicAction::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SymbolicAction_action_type(msg_);
  }

private:
  ::vojext_msgs::msg::SymbolicAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::SymbolicAction>()
{
  return vojext_msgs::msg::builder::Init_SymbolicAction_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__BUILDER_HPP_
