// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/EnvironmentNode.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__BUILDER_HPP_

#include "april_msgs/msg/detail/environment_node__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvironmentNode_class_name
{
public:
  explicit Init_EnvironmentNode_class_name(::april_msgs::msg::EnvironmentNode & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::EnvironmentNode class_name(::april_msgs::msg::EnvironmentNode::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::EnvironmentNode msg_;
};

class Init_EnvironmentNode_image_3d
{
public:
  explicit Init_EnvironmentNode_image_3d(::april_msgs::msg::EnvironmentNode & msg)
  : msg_(msg)
  {}
  Init_EnvironmentNode_class_name image_3d(::april_msgs::msg::EnvironmentNode::_image_3d_type arg)
  {
    msg_.image_3d = std::move(arg);
    return Init_EnvironmentNode_class_name(msg_);
  }

private:
  ::april_msgs::msg::EnvironmentNode msg_;
};

class Init_EnvironmentNode_image_rgb
{
public:
  explicit Init_EnvironmentNode_image_rgb(::april_msgs::msg::EnvironmentNode & msg)
  : msg_(msg)
  {}
  Init_EnvironmentNode_image_3d image_rgb(::april_msgs::msg::EnvironmentNode::_image_rgb_type arg)
  {
    msg_.image_rgb = std::move(arg);
    return Init_EnvironmentNode_image_3d(msg_);
  }

private:
  ::april_msgs::msg::EnvironmentNode msg_;
};

class Init_EnvironmentNode_header
{
public:
  Init_EnvironmentNode_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvironmentNode_image_rgb header(::april_msgs::msg::EnvironmentNode::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EnvironmentNode_image_rgb(msg_);
  }

private:
  ::april_msgs::msg::EnvironmentNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::EnvironmentNode>()
{
  return april_msgs::msg::builder::Init_EnvironmentNode_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__ENVIRONMENT_NODE__BUILDER_HPP_
