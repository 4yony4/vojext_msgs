// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/FatigueAnalysis.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__FATIGUE_ANALYSIS__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__FATIGUE_ANALYSIS__BUILDER_HPP_

#include "april_msgs/msg/detail/fatigue_analysis__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_FatigueAnalysis_fatigue_values
{
public:
  explicit Init_FatigueAnalysis_fatigue_values(::april_msgs::msg::FatigueAnalysis & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::FatigueAnalysis fatigue_values(::april_msgs::msg::FatigueAnalysis::_fatigue_values_type arg)
  {
    msg_.fatigue_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::FatigueAnalysis msg_;
};

class Init_FatigueAnalysis_header
{
public:
  Init_FatigueAnalysis_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FatigueAnalysis_fatigue_values header(::april_msgs::msg::FatigueAnalysis::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FatigueAnalysis_fatigue_values(msg_);
  }

private:
  ::april_msgs::msg::FatigueAnalysis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::FatigueAnalysis>()
{
  return april_msgs::msg::builder::Init_FatigueAnalysis_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__FATIGUE_ANALYSIS__BUILDER_HPP_
