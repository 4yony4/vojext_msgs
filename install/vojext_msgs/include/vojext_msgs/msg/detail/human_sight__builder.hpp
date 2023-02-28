// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/HumanSight.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HUMAN_SIGHT__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__HUMAN_SIGHT__BUILDER_HPP_

#include "vojext_msgs/msg/detail/human_sight__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanSight_sight_direction
{
public:
  explicit Init_HumanSight_sight_direction(::vojext_msgs::msg::HumanSight & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::HumanSight sight_direction(::vojext_msgs::msg::HumanSight::_sight_direction_type arg)
  {
    msg_.sight_direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::HumanSight msg_;
};

class Init_HumanSight_header
{
public:
  Init_HumanSight_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanSight_sight_direction header(::vojext_msgs::msg::HumanSight::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HumanSight_sight_direction(msg_);
  }

private:
  ::vojext_msgs::msg::HumanSight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::HumanSight>()
{
  return vojext_msgs::msg::builder::Init_HumanSight_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__HUMAN_SIGHT__BUILDER_HPP_
