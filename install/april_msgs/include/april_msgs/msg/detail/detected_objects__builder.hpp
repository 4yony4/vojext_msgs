// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/DetectedObjects.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECTS__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECTS__BUILDER_HPP_

#include "april_msgs/msg/detail/detected_objects__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObjects_rgb_image
{
public:
  explicit Init_DetectedObjects_rgb_image(::april_msgs::msg::DetectedObjects & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::DetectedObjects rgb_image(::april_msgs::msg::DetectedObjects::_rgb_image_type arg)
  {
    msg_.rgb_image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::DetectedObjects msg_;
};

class Init_DetectedObjects_detected_objects
{
public:
  explicit Init_DetectedObjects_detected_objects(::april_msgs::msg::DetectedObjects & msg)
  : msg_(msg)
  {}
  Init_DetectedObjects_rgb_image detected_objects(::april_msgs::msg::DetectedObjects::_detected_objects_type arg)
  {
    msg_.detected_objects = std::move(arg);
    return Init_DetectedObjects_rgb_image(msg_);
  }

private:
  ::april_msgs::msg::DetectedObjects msg_;
};

class Init_DetectedObjects_header
{
public:
  Init_DetectedObjects_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObjects_detected_objects header(::april_msgs::msg::DetectedObjects::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectedObjects_detected_objects(msg_);
  }

private:
  ::april_msgs::msg::DetectedObjects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::DetectedObjects>()
{
  return april_msgs::msg::builder::Init_DetectedObjects_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECTS__BUILDER_HPP_
