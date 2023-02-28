// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/Debug.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__DEBUG__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__DEBUG__BUILDER_HPP_

#include "vojext_msgs/msg/detail/debug__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_Debug_msg
{
public:
  explicit Init_Debug_msg(::vojext_msgs::msg::Debug & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::Debug msg(::vojext_msgs::msg::Debug::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::Debug msg_;
};

class Init_Debug_header
{
public:
  Init_Debug_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Debug_msg header(::vojext_msgs::msg::Debug::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Debug_msg(msg_);
  }

private:
  ::vojext_msgs::msg::Debug msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::Debug>()
{
  return vojext_msgs::msg::builder::Init_Debug_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__DEBUG__BUILDER_HPP_
