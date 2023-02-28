// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/RobotHighLatencyCorrections.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__BUILDER_HPP_

#include "vojext_msgs/msg/detail/robot_high_latency_corrections__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotHighLatencyCorrections_cause
{
public:
  explicit Init_RobotHighLatencyCorrections_cause(::vojext_msgs::msg::RobotHighLatencyCorrections & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::RobotHighLatencyCorrections cause(::vojext_msgs::msg::RobotHighLatencyCorrections::_cause_type arg)
  {
    msg_.cause = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::RobotHighLatencyCorrections msg_;
};

class Init_RobotHighLatencyCorrections_description
{
public:
  explicit Init_RobotHighLatencyCorrections_description(::vojext_msgs::msg::RobotHighLatencyCorrections & msg)
  : msg_(msg)
  {}
  Init_RobotHighLatencyCorrections_cause description(::vojext_msgs::msg::RobotHighLatencyCorrections::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_RobotHighLatencyCorrections_cause(msg_);
  }

private:
  ::vojext_msgs::msg::RobotHighLatencyCorrections msg_;
};

class Init_RobotHighLatencyCorrections_action
{
public:
  explicit Init_RobotHighLatencyCorrections_action(::vojext_msgs::msg::RobotHighLatencyCorrections & msg)
  : msg_(msg)
  {}
  Init_RobotHighLatencyCorrections_description action(::vojext_msgs::msg::RobotHighLatencyCorrections::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_RobotHighLatencyCorrections_description(msg_);
  }

private:
  ::vojext_msgs::msg::RobotHighLatencyCorrections msg_;
};

class Init_RobotHighLatencyCorrections_header
{
public:
  Init_RobotHighLatencyCorrections_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHighLatencyCorrections_action header(::vojext_msgs::msg::RobotHighLatencyCorrections::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotHighLatencyCorrections_action(msg_);
  }

private:
  ::vojext_msgs::msg::RobotHighLatencyCorrections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::RobotHighLatencyCorrections>()
{
  return vojext_msgs::msg::builder::Init_RobotHighLatencyCorrections_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__BUILDER_HPP_
