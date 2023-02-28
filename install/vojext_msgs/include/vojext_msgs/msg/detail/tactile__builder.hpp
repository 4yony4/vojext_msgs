// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/Tactile.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__TACTILE__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__TACTILE__BUILDER_HPP_

#include "vojext_msgs/msg/detail/tactile__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_Tactile_temperature
{
public:
  explicit Init_Tactile_temperature(::vojext_msgs::msg::Tactile & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::Tactile temperature(::vojext_msgs::msg::Tactile::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::Tactile msg_;
};

class Init_Tactile_label
{
public:
  explicit Init_Tactile_label(::vojext_msgs::msg::Tactile & msg)
  : msg_(msg)
  {}
  Init_Tactile_temperature label(::vojext_msgs::msg::Tactile::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Tactile_temperature(msg_);
  }

private:
  ::vojext_msgs::msg::Tactile msg_;
};

class Init_Tactile_header
{
public:
  Init_Tactile_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tactile_label header(::vojext_msgs::msg::Tactile::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Tactile_label(msg_);
  }

private:
  ::vojext_msgs::msg::Tactile msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::Tactile>()
{
  return vojext_msgs::msg::builder::Init_Tactile_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__TACTILE__BUILDER_HPP_
