// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/Environment.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__ENVIRONMENT__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__ENVIRONMENT__BUILDER_HPP_

#include "vojext_msgs/msg/detail/environment__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_Environment_objects_list
{
public:
  explicit Init_Environment_objects_list(::vojext_msgs::msg::Environment & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::Environment objects_list(::vojext_msgs::msg::Environment::_objects_list_type arg)
  {
    msg_.objects_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::Environment msg_;
};

class Init_Environment_semantictag
{
public:
  explicit Init_Environment_semantictag(::vojext_msgs::msg::Environment & msg)
  : msg_(msg)
  {}
  Init_Environment_objects_list semantictag(::vojext_msgs::msg::Environment::_semantictag_type arg)
  {
    msg_.semantictag = std::move(arg);
    return Init_Environment_objects_list(msg_);
  }

private:
  ::vojext_msgs::msg::Environment msg_;
};

class Init_Environment_timestamp
{
public:
  explicit Init_Environment_timestamp(::vojext_msgs::msg::Environment & msg)
  : msg_(msg)
  {}
  Init_Environment_semantictag timestamp(::vojext_msgs::msg::Environment::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Environment_semantictag(msg_);
  }

private:
  ::vojext_msgs::msg::Environment msg_;
};

class Init_Environment_header
{
public:
  Init_Environment_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Environment_timestamp header(::vojext_msgs::msg::Environment::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Environment_timestamp(msg_);
  }

private:
  ::vojext_msgs::msg::Environment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::Environment>()
{
  return vojext_msgs::msg::builder::Init_Environment_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__ENVIRONMENT__BUILDER_HPP_
