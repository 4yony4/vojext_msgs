// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/PhysicalObject.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__PHYSICAL_OBJECT__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__PHYSICAL_OBJECT__BUILDER_HPP_

#include "april_msgs/msg/detail/physical_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_PhysicalObject_orientation
{
public:
  explicit Init_PhysicalObject_orientation(::april_msgs::msg::PhysicalObject & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::PhysicalObject orientation(::april_msgs::msg::PhysicalObject::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::PhysicalObject msg_;
};

class Init_PhysicalObject_position
{
public:
  explicit Init_PhysicalObject_position(::april_msgs::msg::PhysicalObject & msg)
  : msg_(msg)
  {}
  Init_PhysicalObject_orientation position(::april_msgs::msg::PhysicalObject::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_PhysicalObject_orientation(msg_);
  }

private:
  ::april_msgs::msg::PhysicalObject msg_;
};

class Init_PhysicalObject_size
{
public:
  explicit Init_PhysicalObject_size(::april_msgs::msg::PhysicalObject & msg)
  : msg_(msg)
  {}
  Init_PhysicalObject_position size(::april_msgs::msg::PhysicalObject::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_PhysicalObject_position(msg_);
  }

private:
  ::april_msgs::msg::PhysicalObject msg_;
};

class Init_PhysicalObject_shape
{
public:
  explicit Init_PhysicalObject_shape(::april_msgs::msg::PhysicalObject & msg)
  : msg_(msg)
  {}
  Init_PhysicalObject_size shape(::april_msgs::msg::PhysicalObject::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_PhysicalObject_size(msg_);
  }

private:
  ::april_msgs::msg::PhysicalObject msg_;
};

class Init_PhysicalObject_header
{
public:
  Init_PhysicalObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PhysicalObject_shape header(::april_msgs::msg::PhysicalObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PhysicalObject_shape(msg_);
  }

private:
  ::april_msgs::msg::PhysicalObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::PhysicalObject>()
{
  return april_msgs::msg::builder::Init_PhysicalObject_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__PHYSICAL_OBJECT__BUILDER_HPP_
