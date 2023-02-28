// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/Emergency.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__EMERGENCY__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__EMERGENCY__BUILDER_HPP_

#include "april_msgs/msg/detail/emergency__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_Emergency_emergency_label
{
public:
  explicit Init_Emergency_emergency_label(::april_msgs::msg::Emergency & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::Emergency emergency_label(::april_msgs::msg::Emergency::_emergency_label_type arg)
  {
    msg_.emergency_label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::Emergency msg_;
};

class Init_Emergency_header
{
public:
  Init_Emergency_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Emergency_emergency_label header(::april_msgs::msg::Emergency::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Emergency_emergency_label(msg_);
  }

private:
  ::april_msgs::msg::Emergency msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::Emergency>()
{
  return april_msgs::msg::builder::Init_Emergency_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__EMERGENCY__BUILDER_HPP_
