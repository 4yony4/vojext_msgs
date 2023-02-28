// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_

#include "vojext_msgs/msg/detail/bounding_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox_ymax
{
public:
  explicit Init_BoundingBox_ymax(::vojext_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::BoundingBox ymax(::vojext_msgs::msg::BoundingBox::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmax
{
public:
  explicit Init_BoundingBox_xmax(::vojext_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_ymax xmax(::vojext_msgs::msg::BoundingBox::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_BoundingBox_ymax(msg_);
  }

private:
  ::vojext_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_ymin
{
public:
  explicit Init_BoundingBox_ymin(::vojext_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_xmax ymin(::vojext_msgs::msg::BoundingBox::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_BoundingBox_xmax(msg_);
  }

private:
  ::vojext_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmin
{
public:
  explicit Init_BoundingBox_xmin(::vojext_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_ymin xmin(::vojext_msgs::msg::BoundingBox::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_BoundingBox_ymin(msg_);
  }

private:
  ::vojext_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_header
{
public:
  Init_BoundingBox_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox_xmin header(::vojext_msgs::msg::BoundingBox::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BoundingBox_xmin(msg_);
  }

private:
  ::vojext_msgs::msg::BoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::BoundingBox>()
{
  return vojext_msgs::msg::builder::Init_BoundingBox_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
