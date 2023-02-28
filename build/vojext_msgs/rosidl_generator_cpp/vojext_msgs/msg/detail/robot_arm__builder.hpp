// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/RobotArm.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ROBOT_ARM__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ROBOT_ARM__BUILDER_HPP_

#include "vojext_msgs/msg/detail/robot_arm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotArm_robotarmkinematic_list
{
public:
  explicit Init_RobotArm_robotarmkinematic_list(::vojext_msgs::msg::RobotArm & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::RobotArm robotarmkinematic_list(::vojext_msgs::msg::RobotArm::_robotarmkinematic_list_type arg)
  {
    msg_.robotarmkinematic_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::RobotArm msg_;
};

class Init_RobotArm_state
{
public:
  explicit Init_RobotArm_state(::vojext_msgs::msg::RobotArm & msg)
  : msg_(msg)
  {}
  Init_RobotArm_robotarmkinematic_list state(::vojext_msgs::msg::RobotArm::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_RobotArm_robotarmkinematic_list(msg_);
  }

private:
  ::vojext_msgs::msg::RobotArm msg_;
};

class Init_RobotArm_header
{
public:
  Init_RobotArm_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArm_state header(::vojext_msgs::msg::RobotArm::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotArm_state(msg_);
  }

private:
  ::vojext_msgs::msg::RobotArm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::RobotArm>()
{
  return vojext_msgs::msg::builder::Init_RobotArm_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__ROBOT_ARM__BUILDER_HPP_
