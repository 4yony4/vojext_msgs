// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__BUILDER_HPP_

#include "april_msgs/msg/detail/human_behaviour__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanBehaviour_humamgrasping_list
{
public:
  explicit Init_HumanBehaviour_humamgrasping_list(::april_msgs::msg::HumanBehaviour & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::HumanBehaviour humamgrasping_list(::april_msgs::msg::HumanBehaviour::_humamgrasping_list_type arg)
  {
    msg_.humamgrasping_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::HumanBehaviour msg_;
};

class Init_HumanBehaviour_body_posture
{
public:
  explicit Init_HumanBehaviour_body_posture(::april_msgs::msg::HumanBehaviour & msg)
  : msg_(msg)
  {}
  Init_HumanBehaviour_humamgrasping_list body_posture(::april_msgs::msg::HumanBehaviour::_body_posture_type arg)
  {
    msg_.body_posture = std::move(arg);
    return Init_HumanBehaviour_humamgrasping_list(msg_);
  }

private:
  ::april_msgs::msg::HumanBehaviour msg_;
};

class Init_HumanBehaviour_header
{
public:
  Init_HumanBehaviour_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanBehaviour_body_posture header(::april_msgs::msg::HumanBehaviour::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HumanBehaviour_body_posture(msg_);
  }

private:
  ::april_msgs::msg::HumanBehaviour msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::HumanBehaviour>()
{
  return april_msgs::msg::builder::Init_HumanBehaviour_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__BUILDER_HPP_
