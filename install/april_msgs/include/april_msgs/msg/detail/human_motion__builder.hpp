// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/HumanMotion.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HUMAN_MOTION__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__HUMAN_MOTION__BUILDER_HPP_

#include "april_msgs/msg/detail/human_motion__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanMotion_tools_acceleration
{
public:
  explicit Init_HumanMotion_tools_acceleration(::april_msgs::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::HumanMotion tools_acceleration(::april_msgs::msg::HumanMotion::_tools_acceleration_type arg)
  {
    msg_.tools_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::HumanMotion msg_;
};

class Init_HumanMotion_tools_velocity
{
public:
  explicit Init_HumanMotion_tools_velocity(::april_msgs::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_tools_acceleration tools_velocity(::april_msgs::msg::HumanMotion::_tools_velocity_type arg)
  {
    msg_.tools_velocity = std::move(arg);
    return Init_HumanMotion_tools_acceleration(msg_);
  }

private:
  ::april_msgs::msg::HumanMotion msg_;
};

class Init_HumanMotion_tools_position
{
public:
  explicit Init_HumanMotion_tools_position(::april_msgs::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_tools_velocity tools_position(::april_msgs::msg::HumanMotion::_tools_position_type arg)
  {
    msg_.tools_position = std::move(arg);
    return Init_HumanMotion_tools_velocity(msg_);
  }

private:
  ::april_msgs::msg::HumanMotion msg_;
};

class Init_HumanMotion_body_acceleration
{
public:
  explicit Init_HumanMotion_body_acceleration(::april_msgs::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_tools_position body_acceleration(::april_msgs::msg::HumanMotion::_body_acceleration_type arg)
  {
    msg_.body_acceleration = std::move(arg);
    return Init_HumanMotion_tools_position(msg_);
  }

private:
  ::april_msgs::msg::HumanMotion msg_;
};

class Init_HumanMotion_body_velocity
{
public:
  explicit Init_HumanMotion_body_velocity(::april_msgs::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_body_acceleration body_velocity(::april_msgs::msg::HumanMotion::_body_velocity_type arg)
  {
    msg_.body_velocity = std::move(arg);
    return Init_HumanMotion_body_acceleration(msg_);
  }

private:
  ::april_msgs::msg::HumanMotion msg_;
};

class Init_HumanMotion_body_position
{
public:
  explicit Init_HumanMotion_body_position(::april_msgs::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_body_velocity body_position(::april_msgs::msg::HumanMotion::_body_position_type arg)
  {
    msg_.body_position = std::move(arg);
    return Init_HumanMotion_body_velocity(msg_);
  }

private:
  ::april_msgs::msg::HumanMotion msg_;
};

class Init_HumanMotion_hand_acceleration
{
public:
  explicit Init_HumanMotion_hand_acceleration(::april_msgs::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_body_position hand_acceleration(::april_msgs::msg::HumanMotion::_hand_acceleration_type arg)
  {
    msg_.hand_acceleration = std::move(arg);
    return Init_HumanMotion_body_position(msg_);
  }

private:
  ::april_msgs::msg::HumanMotion msg_;
};

class Init_HumanMotion_hand_velocity
{
public:
  explicit Init_HumanMotion_hand_velocity(::april_msgs::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_hand_acceleration hand_velocity(::april_msgs::msg::HumanMotion::_hand_velocity_type arg)
  {
    msg_.hand_velocity = std::move(arg);
    return Init_HumanMotion_hand_acceleration(msg_);
  }

private:
  ::april_msgs::msg::HumanMotion msg_;
};

class Init_HumanMotion_hand_position
{
public:
  explicit Init_HumanMotion_hand_position(::april_msgs::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_hand_velocity hand_position(::april_msgs::msg::HumanMotion::_hand_position_type arg)
  {
    msg_.hand_position = std::move(arg);
    return Init_HumanMotion_hand_velocity(msg_);
  }

private:
  ::april_msgs::msg::HumanMotion msg_;
};

class Init_HumanMotion_header
{
public:
  Init_HumanMotion_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanMotion_hand_position header(::april_msgs::msg::HumanMotion::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HumanMotion_hand_position(msg_);
  }

private:
  ::april_msgs::msg::HumanMotion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::HumanMotion>()
{
  return april_msgs::msg::builder::Init_HumanMotion_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__HUMAN_MOTION__BUILDER_HPP_
