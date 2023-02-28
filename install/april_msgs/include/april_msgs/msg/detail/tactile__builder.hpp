// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/Tactile.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__TACTILE__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__TACTILE__BUILDER_HPP_

#include "april_msgs/msg/detail/tactile__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_Tactile_temperature
{
public:
  explicit Init_Tactile_temperature(::april_msgs::msg::Tactile & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::Tactile temperature(::april_msgs::msg::Tactile::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::Tactile msg_;
};

class Init_Tactile_label
{
public:
  explicit Init_Tactile_label(::april_msgs::msg::Tactile & msg)
  : msg_(msg)
  {}
  Init_Tactile_temperature label(::april_msgs::msg::Tactile::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Tactile_temperature(msg_);
  }

private:
  ::april_msgs::msg::Tactile msg_;
};

class Init_Tactile_header
{
public:
  Init_Tactile_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tactile_label header(::april_msgs::msg::Tactile::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Tactile_label(msg_);
  }

private:
  ::april_msgs::msg::Tactile msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::Tactile>()
{
  return april_msgs::msg::builder::Init_Tactile_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__TACTILE__BUILDER_HPP_
