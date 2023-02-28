// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/Emergency.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__EMERGENCY__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__EMERGENCY__BUILDER_HPP_

#include "vojext_msgs/msg/detail/emergency__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_Emergency_emergency_label
{
public:
  explicit Init_Emergency_emergency_label(::vojext_msgs::msg::Emergency & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::Emergency emergency_label(::vojext_msgs::msg::Emergency::_emergency_label_type arg)
  {
    msg_.emergency_label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::Emergency msg_;
};

class Init_Emergency_header
{
public:
  Init_Emergency_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Emergency_emergency_label header(::vojext_msgs::msg::Emergency::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Emergency_emergency_label(msg_);
  }

private:
  ::vojext_msgs::msg::Emergency msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::Emergency>()
{
  return vojext_msgs::msg::builder::Init_Emergency_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__EMERGENCY__BUILDER_HPP_
