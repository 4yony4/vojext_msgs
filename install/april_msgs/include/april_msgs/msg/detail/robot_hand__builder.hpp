// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/RobotHand.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_HAND__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_HAND__BUILDER_HPP_

#include "april_msgs/msg/detail/robot_hand__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotHand_robothandkinematic_list
{
public:
  explicit Init_RobotHand_robothandkinematic_list(::april_msgs::msg::RobotHand & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::RobotHand robothandkinematic_list(::april_msgs::msg::RobotHand::_robothandkinematic_list_type arg)
  {
    msg_.robothandkinematic_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::RobotHand msg_;
};

class Init_RobotHand_state
{
public:
  explicit Init_RobotHand_state(::april_msgs::msg::RobotHand & msg)
  : msg_(msg)
  {}
  Init_RobotHand_robothandkinematic_list state(::april_msgs::msg::RobotHand::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_RobotHand_robothandkinematic_list(msg_);
  }

private:
  ::april_msgs::msg::RobotHand msg_;
};

class Init_RobotHand_header
{
public:
  Init_RobotHand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHand_state header(::april_msgs::msg::RobotHand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotHand_state(msg_);
  }

private:
  ::april_msgs::msg::RobotHand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::RobotHand>()
{
  return april_msgs::msg::builder::Init_RobotHand_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_HAND__BUILDER_HPP_
