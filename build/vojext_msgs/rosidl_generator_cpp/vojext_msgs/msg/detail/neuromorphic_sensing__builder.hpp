// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/NeuromorphicSensing.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__BUILDER_HPP_

#include "vojext_msgs/msg/detail/neuromorphic_sensing__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_NeuromorphicSensing_point2_speed
{
public:
  explicit Init_NeuromorphicSensing_point2_speed(::vojext_msgs::msg::NeuromorphicSensing & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::NeuromorphicSensing point2_speed(::vojext_msgs::msg::NeuromorphicSensing::_point2_speed_type arg)
  {
    msg_.point2_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::NeuromorphicSensing msg_;
};

class Init_NeuromorphicSensing_point1_speed
{
public:
  explicit Init_NeuromorphicSensing_point1_speed(::vojext_msgs::msg::NeuromorphicSensing & msg)
  : msg_(msg)
  {}
  Init_NeuromorphicSensing_point2_speed point1_speed(::vojext_msgs::msg::NeuromorphicSensing::_point1_speed_type arg)
  {
    msg_.point1_speed = std::move(arg);
    return Init_NeuromorphicSensing_point2_speed(msg_);
  }

private:
  ::vojext_msgs::msg::NeuromorphicSensing msg_;
};

class Init_NeuromorphicSensing_header
{
public:
  Init_NeuromorphicSensing_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NeuromorphicSensing_point1_speed header(::vojext_msgs::msg::NeuromorphicSensing::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NeuromorphicSensing_point1_speed(msg_);
  }

private:
  ::vojext_msgs::msg::NeuromorphicSensing msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::NeuromorphicSensing>()
{
  return vojext_msgs::msg::builder::Init_NeuromorphicSensing_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__NEUROMORPHIC_SENSING__BUILDER_HPP_
