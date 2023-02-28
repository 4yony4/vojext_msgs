// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HAND__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__HAND__BUILDER_HPP_

#include "april_msgs/msg/detail/hand__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_Hand_height
{
public:
  explicit Init_Hand_height(::april_msgs::msg::Hand & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::Hand height(::april_msgs::msg::Hand::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::Hand msg_;
};

class Init_Hand_width
{
public:
  explicit Init_Hand_width(::april_msgs::msg::Hand & msg)
  : msg_(msg)
  {}
  Init_Hand_height width(::april_msgs::msg::Hand::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Hand_height(msg_);
  }

private:
  ::april_msgs::msg::Hand msg_;
};

class Init_Hand_y
{
public:
  explicit Init_Hand_y(::april_msgs::msg::Hand & msg)
  : msg_(msg)
  {}
  Init_Hand_width y(::april_msgs::msg::Hand::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Hand_width(msg_);
  }

private:
  ::april_msgs::msg::Hand msg_;
};

class Init_Hand_x
{
public:
  explicit Init_Hand_x(::april_msgs::msg::Hand & msg)
  : msg_(msg)
  {}
  Init_Hand_y x(::april_msgs::msg::Hand::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Hand_y(msg_);
  }

private:
  ::april_msgs::msg::Hand msg_;
};

class Init_Hand_header
{
public:
  Init_Hand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hand_x header(::april_msgs::msg::Hand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Hand_x(msg_);
  }

private:
  ::april_msgs::msg::Hand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::Hand>()
{
  return april_msgs::msg::builder::Init_Hand_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__HAND__BUILDER_HPP_
