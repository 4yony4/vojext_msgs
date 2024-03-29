// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/RobotLowLatencyCorrections.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ROBOT_LOW_LATENCY_CORRECTIONS__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ROBOT_LOW_LATENCY_CORRECTIONS__BUILDER_HPP_

#include "vojext_msgs/msg/detail/robot_low_latency_corrections__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotLowLatencyCorrections_action
{
public:
  explicit Init_RobotLowLatencyCorrections_action(::vojext_msgs::msg::RobotLowLatencyCorrections & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::RobotLowLatencyCorrections action(::vojext_msgs::msg::RobotLowLatencyCorrections::_action_type arg)
  {
    msg_.action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::RobotLowLatencyCorrections msg_;
};

class Init_RobotLowLatencyCorrections_header
{
public:
  Init_RobotLowLatencyCorrections_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotLowLatencyCorrections_action header(::vojext_msgs::msg::RobotLowLatencyCorrections::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotLowLatencyCorrections_action(msg_);
  }

private:
  ::vojext_msgs::msg::RobotLowLatencyCorrections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::RobotLowLatencyCorrections>()
{
  return vojext_msgs::msg::builder::Init_RobotLowLatencyCorrections_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__ROBOT_LOW_LATENCY_CORRECTIONS__BUILDER_HPP_
