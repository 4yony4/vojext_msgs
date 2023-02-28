// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/GraspFacts.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__GRASP_FACTS__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__GRASP_FACTS__BUILDER_HPP_

#include "vojext_msgs/msg/detail/grasp_facts__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_GraspFacts_grasp_dimension
{
public:
  explicit Init_GraspFacts_grasp_dimension(::vojext_msgs::msg::GraspFacts & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::GraspFacts grasp_dimension(::vojext_msgs::msg::GraspFacts::_grasp_dimension_type arg)
  {
    msg_.grasp_dimension = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::GraspFacts msg_;
};

class Init_GraspFacts_grasp_location
{
public:
  explicit Init_GraspFacts_grasp_location(::vojext_msgs::msg::GraspFacts & msg)
  : msg_(msg)
  {}
  Init_GraspFacts_grasp_dimension grasp_location(::vojext_msgs::msg::GraspFacts::_grasp_location_type arg)
  {
    msg_.grasp_location = std::move(arg);
    return Init_GraspFacts_grasp_dimension(msg_);
  }

private:
  ::vojext_msgs::msg::GraspFacts msg_;
};

class Init_GraspFacts_grasp_type
{
public:
  explicit Init_GraspFacts_grasp_type(::vojext_msgs::msg::GraspFacts & msg)
  : msg_(msg)
  {}
  Init_GraspFacts_grasp_location grasp_type(::vojext_msgs::msg::GraspFacts::_grasp_type_type arg)
  {
    msg_.grasp_type = std::move(arg);
    return Init_GraspFacts_grasp_location(msg_);
  }

private:
  ::vojext_msgs::msg::GraspFacts msg_;
};

class Init_GraspFacts_header
{
public:
  Init_GraspFacts_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspFacts_grasp_type header(::vojext_msgs::msg::GraspFacts::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GraspFacts_grasp_type(msg_);
  }

private:
  ::vojext_msgs::msg::GraspFacts msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::GraspFacts>()
{
  return vojext_msgs::msg::builder::Init_GraspFacts_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__GRASP_FACTS__BUILDER_HPP_
