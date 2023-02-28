// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/RobotHand.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ROBOT_HAND__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ROBOT_HAND__BUILDER_HPP_

#include "vojext_msgs/msg/detail/robot_hand__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotHand_robothandkinematic_list
{
public:
  explicit Init_RobotHand_robothandkinematic_list(::vojext_msgs::msg::RobotHand & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::RobotHand robothandkinematic_list(::vojext_msgs::msg::RobotHand::_robothandkinematic_list_type arg)
  {
    msg_.robothandkinematic_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::RobotHand msg_;
};

class Init_RobotHand_state
{
public:
  explicit Init_RobotHand_state(::vojext_msgs::msg::RobotHand & msg)
  : msg_(msg)
  {}
  Init_RobotHand_robothandkinematic_list state(::vojext_msgs::msg::RobotHand::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_RobotHand_robothandkinematic_list(msg_);
  }

private:
  ::vojext_msgs::msg::RobotHand msg_;
};

class Init_RobotHand_header
{
public:
  Init_RobotHand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHand_state header(::vojext_msgs::msg::RobotHand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotHand_state(msg_);
  }

private:
  ::vojext_msgs::msg::RobotHand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::RobotHand>()
{
  return vojext_msgs::msg::builder::Init_RobotHand_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__ROBOT_HAND__BUILDER_HPP_
