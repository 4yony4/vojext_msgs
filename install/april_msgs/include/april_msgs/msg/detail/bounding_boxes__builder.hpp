// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__BOUNDING_BOXES__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__BOUNDING_BOXES__BUILDER_HPP_

#include "april_msgs/msg/detail/bounding_boxes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBoxes_bounding_boxes
{
public:
  explicit Init_BoundingBoxes_bounding_boxes(::april_msgs::msg::BoundingBoxes & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::BoundingBoxes bounding_boxes(::april_msgs::msg::BoundingBoxes::_bounding_boxes_type arg)
  {
    msg_.bounding_boxes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::BoundingBoxes msg_;
};

class Init_BoundingBoxes_image_header
{
public:
  explicit Init_BoundingBoxes_image_header(::april_msgs::msg::BoundingBoxes & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxes_bounding_boxes image_header(::april_msgs::msg::BoundingBoxes::_image_header_type arg)
  {
    msg_.image_header = std::move(arg);
    return Init_BoundingBoxes_bounding_boxes(msg_);
  }

private:
  ::april_msgs::msg::BoundingBoxes msg_;
};

class Init_BoundingBoxes_header
{
public:
  Init_BoundingBoxes_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBoxes_image_header header(::april_msgs::msg::BoundingBoxes::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BoundingBoxes_image_header(msg_);
  }

private:
  ::april_msgs::msg::BoundingBoxes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::BoundingBoxes>()
{
  return april_msgs::msg::builder::Init_BoundingBoxes_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__BOUNDING_BOXES__BUILDER_HPP_
