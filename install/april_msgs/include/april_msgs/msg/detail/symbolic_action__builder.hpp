// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/SymbolicAction.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__BUILDER_HPP_

#include "april_msgs/msg/detail/symbolic_action__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_SymbolicAction_target_pose
{
public:
  explicit Init_SymbolicAction_target_pose(::april_msgs::msg::SymbolicAction & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::SymbolicAction target_pose(::april_msgs::msg::SymbolicAction::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::SymbolicAction msg_;
};

class Init_SymbolicAction_grasp_facts
{
public:
  explicit Init_SymbolicAction_grasp_facts(::april_msgs::msg::SymbolicAction & msg)
  : msg_(msg)
  {}
  Init_SymbolicAction_target_pose grasp_facts(::april_msgs::msg::SymbolicAction::_grasp_facts_type arg)
  {
    msg_.grasp_facts = std::move(arg);
    return Init_SymbolicAction_target_pose(msg_);
  }

private:
  ::april_msgs::msg::SymbolicAction msg_;
};

class Init_SymbolicAction_target_id
{
public:
  explicit Init_SymbolicAction_target_id(::april_msgs::msg::SymbolicAction & msg)
  : msg_(msg)
  {}
  Init_SymbolicAction_grasp_facts target_id(::april_msgs::msg::SymbolicAction::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_SymbolicAction_grasp_facts(msg_);
  }

private:
  ::april_msgs::msg::SymbolicAction msg_;
};

class Init_SymbolicAction_action_type
{
public:
  explicit Init_SymbolicAction_action_type(::april_msgs::msg::SymbolicAction & msg)
  : msg_(msg)
  {}
  Init_SymbolicAction_target_id action_type(::april_msgs::msg::SymbolicAction::_action_type_type arg)
  {
    msg_.action_type = std::move(arg);
    return Init_SymbolicAction_target_id(msg_);
  }

private:
  ::april_msgs::msg::SymbolicAction msg_;
};

class Init_SymbolicAction_header
{
public:
  Init_SymbolicAction_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SymbolicAction_action_type header(::april_msgs::msg::SymbolicAction::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SymbolicAction_action_type(msg_);
  }

private:
  ::april_msgs::msg::SymbolicAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::SymbolicAction>()
{
  return april_msgs::msg::builder::Init_SymbolicAction_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__BUILDER_HPP_
