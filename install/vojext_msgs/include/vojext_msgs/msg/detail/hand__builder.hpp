// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HAND__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__HAND__BUILDER_HPP_

#include "vojext_msgs/msg/detail/hand__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_Hand_height
{
public:
  explicit Init_Hand_height(::vojext_msgs::msg::Hand & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::Hand height(::vojext_msgs::msg::Hand::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::Hand msg_;
};

class Init_Hand_width
{
public:
  explicit Init_Hand_width(::vojext_msgs::msg::Hand & msg)
  : msg_(msg)
  {}
  Init_Hand_height width(::vojext_msgs::msg::Hand::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Hand_height(msg_);
  }

private:
  ::vojext_msgs::msg::Hand msg_;
};

class Init_Hand_y
{
public:
  explicit Init_Hand_y(::vojext_msgs::msg::Hand & msg)
  : msg_(msg)
  {}
  Init_Hand_width y(::vojext_msgs::msg::Hand::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Hand_width(msg_);
  }

private:
  ::vojext_msgs::msg::Hand msg_;
};

class Init_Hand_x
{
public:
  explicit Init_Hand_x(::vojext_msgs::msg::Hand & msg)
  : msg_(msg)
  {}
  Init_Hand_y x(::vojext_msgs::msg::Hand::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Hand_y(msg_);
  }

private:
  ::vojext_msgs::msg::Hand msg_;
};

class Init_Hand_header
{
public:
  Init_Hand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hand_x header(::vojext_msgs::msg::Hand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Hand_x(msg_);
  }

private:
  ::vojext_msgs::msg::Hand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::Hand>()
{
  return vojext_msgs::msg::builder::Init_Hand_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__HAND__BUILDER_HPP_
