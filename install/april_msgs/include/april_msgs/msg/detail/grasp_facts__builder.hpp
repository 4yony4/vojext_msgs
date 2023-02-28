// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/GraspFacts.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__GRASP_FACTS__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__GRASP_FACTS__BUILDER_HPP_

#include "april_msgs/msg/detail/grasp_facts__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_GraspFacts_grasp_dimension
{
public:
  explicit Init_GraspFacts_grasp_dimension(::april_msgs::msg::GraspFacts & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::GraspFacts grasp_dimension(::april_msgs::msg::GraspFacts::_grasp_dimension_type arg)
  {
    msg_.grasp_dimension = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::GraspFacts msg_;
};

class Init_GraspFacts_grasp_location
{
public:
  explicit Init_GraspFacts_grasp_location(::april_msgs::msg::GraspFacts & msg)
  : msg_(msg)
  {}
  Init_GraspFacts_grasp_dimension grasp_location(::april_msgs::msg::GraspFacts::_grasp_location_type arg)
  {
    msg_.grasp_location = std::move(arg);
    return Init_GraspFacts_grasp_dimension(msg_);
  }

private:
  ::april_msgs::msg::GraspFacts msg_;
};

class Init_GraspFacts_grasp_type
{
public:
  explicit Init_GraspFacts_grasp_type(::april_msgs::msg::GraspFacts & msg)
  : msg_(msg)
  {}
  Init_GraspFacts_grasp_location grasp_type(::april_msgs::msg::GraspFacts::_grasp_type_type arg)
  {
    msg_.grasp_type = std::move(arg);
    return Init_GraspFacts_grasp_location(msg_);
  }

private:
  ::april_msgs::msg::GraspFacts msg_;
};

class Init_GraspFacts_header
{
public:
  Init_GraspFacts_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspFacts_grasp_type header(::april_msgs::msg::GraspFacts::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GraspFacts_grasp_type(msg_);
  }

private:
  ::april_msgs::msg::GraspFacts msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::GraspFacts>()
{
  return april_msgs::msg::builder::Init_GraspFacts_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__GRASP_FACTS__BUILDER_HPP_
