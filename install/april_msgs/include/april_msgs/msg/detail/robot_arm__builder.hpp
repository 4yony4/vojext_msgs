// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/RobotArm.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_ARM__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_ARM__BUILDER_HPP_

#include "april_msgs/msg/detail/robot_arm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotArm_robotarmkinematic_list
{
public:
  explicit Init_RobotArm_robotarmkinematic_list(::april_msgs::msg::RobotArm & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::RobotArm robotarmkinematic_list(::april_msgs::msg::RobotArm::_robotarmkinematic_list_type arg)
  {
    msg_.robotarmkinematic_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::RobotArm msg_;
};

class Init_RobotArm_state
{
public:
  explicit Init_RobotArm_state(::april_msgs::msg::RobotArm & msg)
  : msg_(msg)
  {}
  Init_RobotArm_robotarmkinematic_list state(::april_msgs::msg::RobotArm::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_RobotArm_robotarmkinematic_list(msg_);
  }

private:
  ::april_msgs::msg::RobotArm msg_;
};

class Init_RobotArm_header
{
public:
  Init_RobotArm_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArm_state header(::april_msgs::msg::RobotArm::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotArm_state(msg_);
  }

private:
  ::april_msgs::msg::RobotArm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::RobotArm>()
{
  return april_msgs::msg::builder::Init_RobotArm_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_ARM__BUILDER_HPP_
