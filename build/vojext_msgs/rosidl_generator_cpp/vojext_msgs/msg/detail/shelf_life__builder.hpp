// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/ShelfLife.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__SHELF_LIFE__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__SHELF_LIFE__BUILDER_HPP_

#include "vojext_msgs/msg/detail/shelf_life__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_ShelfLife_shelf_life
{
public:
  explicit Init_ShelfLife_shelf_life(::vojext_msgs::msg::ShelfLife & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::ShelfLife shelf_life(::vojext_msgs::msg::ShelfLife::_shelf_life_type arg)
  {
    msg_.shelf_life = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::ShelfLife msg_;
};

class Init_ShelfLife_object_id
{
public:
  explicit Init_ShelfLife_object_id(::vojext_msgs::msg::ShelfLife & msg)
  : msg_(msg)
  {}
  Init_ShelfLife_shelf_life object_id(::vojext_msgs::msg::ShelfLife::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_ShelfLife_shelf_life(msg_);
  }

private:
  ::vojext_msgs::msg::ShelfLife msg_;
};

class Init_ShelfLife_header
{
public:
  Init_ShelfLife_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShelfLife_object_id header(::vojext_msgs::msg::ShelfLife::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ShelfLife_object_id(msg_);
  }

private:
  ::vojext_msgs::msg::ShelfLife msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::ShelfLife>()
{
  return vojext_msgs::msg::builder::Init_ShelfLife_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__SHELF_LIFE__BUILDER_HPP_
