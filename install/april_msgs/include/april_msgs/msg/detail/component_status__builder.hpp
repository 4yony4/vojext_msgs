// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/ComponentStatus.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__COMPONENT_STATUS__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__COMPONENT_STATUS__BUILDER_HPP_

#include "april_msgs/msg/detail/component_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_ComponentStatus_msg
{
public:
  explicit Init_ComponentStatus_msg(::april_msgs::msg::ComponentStatus & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::ComponentStatus msg(::april_msgs::msg::ComponentStatus::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::ComponentStatus msg_;
};

class Init_ComponentStatus_status
{
public:
  explicit Init_ComponentStatus_status(::april_msgs::msg::ComponentStatus & msg)
  : msg_(msg)
  {}
  Init_ComponentStatus_msg status(::april_msgs::msg::ComponentStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ComponentStatus_msg(msg_);
  }

private:
  ::april_msgs::msg::ComponentStatus msg_;
};

class Init_ComponentStatus_header
{
public:
  Init_ComponentStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComponentStatus_status header(::april_msgs::msg::ComponentStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ComponentStatus_status(msg_);
  }

private:
  ::april_msgs::msg::ComponentStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::ComponentStatus>()
{
  return april_msgs::msg::builder::Init_ComponentStatus_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__COMPONENT_STATUS__BUILDER_HPP_
