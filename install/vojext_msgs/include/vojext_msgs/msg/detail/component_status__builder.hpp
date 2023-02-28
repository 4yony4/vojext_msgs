// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/ComponentStatus.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__COMPONENT_STATUS__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__COMPONENT_STATUS__BUILDER_HPP_

#include "vojext_msgs/msg/detail/component_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_ComponentStatus_msg
{
public:
  explicit Init_ComponentStatus_msg(::vojext_msgs::msg::ComponentStatus & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::ComponentStatus msg(::vojext_msgs::msg::ComponentStatus::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::ComponentStatus msg_;
};

class Init_ComponentStatus_status
{
public:
  explicit Init_ComponentStatus_status(::vojext_msgs::msg::ComponentStatus & msg)
  : msg_(msg)
  {}
  Init_ComponentStatus_msg status(::vojext_msgs::msg::ComponentStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ComponentStatus_msg(msg_);
  }

private:
  ::vojext_msgs::msg::ComponentStatus msg_;
};

class Init_ComponentStatus_header
{
public:
  Init_ComponentStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComponentStatus_status header(::vojext_msgs::msg::ComponentStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ComponentStatus_status(msg_);
  }

private:
  ::vojext_msgs::msg::ComponentStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::ComponentStatus>()
{
  return vojext_msgs::msg::builder::Init_ComponentStatus_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__COMPONENT_STATUS__BUILDER_HPP_
