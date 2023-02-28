// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/HumanGraspingStrategies.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HUMAN_GRASPING_STRATEGIES__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__HUMAN_GRASPING_STRATEGIES__BUILDER_HPP_

#include "april_msgs/msg/detail/human_grasping_strategies__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanGraspingStrategies_location
{
public:
  explicit Init_HumanGraspingStrategies_location(::april_msgs::msg::HumanGraspingStrategies & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::HumanGraspingStrategies location(::april_msgs::msg::HumanGraspingStrategies::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::HumanGraspingStrategies msg_;
};

class Init_HumanGraspingStrategies_type
{
public:
  explicit Init_HumanGraspingStrategies_type(::april_msgs::msg::HumanGraspingStrategies & msg)
  : msg_(msg)
  {}
  Init_HumanGraspingStrategies_location type(::april_msgs::msg::HumanGraspingStrategies::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_HumanGraspingStrategies_location(msg_);
  }

private:
  ::april_msgs::msg::HumanGraspingStrategies msg_;
};

class Init_HumanGraspingStrategies_header
{
public:
  Init_HumanGraspingStrategies_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanGraspingStrategies_type header(::april_msgs::msg::HumanGraspingStrategies::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HumanGraspingStrategies_type(msg_);
  }

private:
  ::april_msgs::msg::HumanGraspingStrategies msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::HumanGraspingStrategies>()
{
  return april_msgs::msg::builder::Init_HumanGraspingStrategies_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__HUMAN_GRASPING_STRATEGIES__BUILDER_HPP_
