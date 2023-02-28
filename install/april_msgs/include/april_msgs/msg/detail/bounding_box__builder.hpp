// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_

#include "april_msgs/msg/detail/bounding_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox_ymax
{
public:
  explicit Init_BoundingBox_ymax(::april_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::BoundingBox ymax(::april_msgs::msg::BoundingBox::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmax
{
public:
  explicit Init_BoundingBox_xmax(::april_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_ymax xmax(::april_msgs::msg::BoundingBox::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_BoundingBox_ymax(msg_);
  }

private:
  ::april_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_ymin
{
public:
  explicit Init_BoundingBox_ymin(::april_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_xmax ymin(::april_msgs::msg::BoundingBox::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_BoundingBox_xmax(msg_);
  }

private:
  ::april_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmin
{
public:
  explicit Init_BoundingBox_xmin(::april_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_ymin xmin(::april_msgs::msg::BoundingBox::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_BoundingBox_ymin(msg_);
  }

private:
  ::april_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_header
{
public:
  Init_BoundingBox_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox_xmin header(::april_msgs::msg::BoundingBox::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BoundingBox_xmin(msg_);
  }

private:
  ::april_msgs::msg::BoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::BoundingBox>()
{
  return april_msgs::msg::builder::Init_BoundingBox_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
