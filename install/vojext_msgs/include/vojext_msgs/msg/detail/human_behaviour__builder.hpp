// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__BUILDER_HPP_

#include "vojext_msgs/msg/detail/human_behaviour__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanBehaviour_humamgrasping_list
{
public:
  explicit Init_HumanBehaviour_humamgrasping_list(::vojext_msgs::msg::HumanBehaviour & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::HumanBehaviour humamgrasping_list(::vojext_msgs::msg::HumanBehaviour::_humamgrasping_list_type arg)
  {
    msg_.humamgrasping_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::HumanBehaviour msg_;
};

class Init_HumanBehaviour_body_posture
{
public:
  explicit Init_HumanBehaviour_body_posture(::vojext_msgs::msg::HumanBehaviour & msg)
  : msg_(msg)
  {}
  Init_HumanBehaviour_humamgrasping_list body_posture(::vojext_msgs::msg::HumanBehaviour::_body_posture_type arg)
  {
    msg_.body_posture = std::move(arg);
    return Init_HumanBehaviour_humamgrasping_list(msg_);
  }

private:
  ::vojext_msgs::msg::HumanBehaviour msg_;
};

class Init_HumanBehaviour_header
{
public:
  Init_HumanBehaviour_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanBehaviour_body_posture header(::vojext_msgs::msg::HumanBehaviour::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HumanBehaviour_body_posture(msg_);
  }

private:
  ::vojext_msgs::msg::HumanBehaviour msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::HumanBehaviour>()
{
  return vojext_msgs::msg::builder::Init_HumanBehaviour_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__BUILDER_HPP_
