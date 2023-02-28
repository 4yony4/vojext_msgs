// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/Output.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__OUTPUT__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__OUTPUT__BUILDER_HPP_

#include "april_msgs/msg/detail/output__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_Output_velocity
{
public:
  explicit Init_Output_velocity(::april_msgs::msg::Output & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::Output velocity(::april_msgs::msg::Output::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::Output msg_;
};

class Init_Output_pose
{
public:
  explicit Init_Output_pose(::april_msgs::msg::Output & msg)
  : msg_(msg)
  {}
  Init_Output_velocity pose(::april_msgs::msg::Output::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Output_velocity(msg_);
  }

private:
  ::april_msgs::msg::Output msg_;
};

class Init_Output_timestamp
{
public:
  explicit Init_Output_timestamp(::april_msgs::msg::Output & msg)
  : msg_(msg)
  {}
  Init_Output_pose timestamp(::april_msgs::msg::Output::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Output_pose(msg_);
  }

private:
  ::april_msgs::msg::Output msg_;
};

class Init_Output_header
{
public:
  Init_Output_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Output_timestamp header(::april_msgs::msg::Output::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Output_timestamp(msg_);
  }

private:
  ::april_msgs::msg::Output msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::Output>()
{
  return april_msgs::msg::builder::Init_Output_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__OUTPUT__BUILDER_HPP_
