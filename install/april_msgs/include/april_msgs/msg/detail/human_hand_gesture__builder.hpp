// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/HumanHandGesture.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HUMAN_HAND_GESTURE__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__HUMAN_HAND_GESTURE__BUILDER_HPP_

#include "april_msgs/msg/detail/human_hand_gesture__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanHandGesture_recognized_gesture
{
public:
  explicit Init_HumanHandGesture_recognized_gesture(::april_msgs::msg::HumanHandGesture & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::HumanHandGesture recognized_gesture(::april_msgs::msg::HumanHandGesture::_recognized_gesture_type arg)
  {
    msg_.recognized_gesture = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::HumanHandGesture msg_;
};

class Init_HumanHandGesture_header
{
public:
  Init_HumanHandGesture_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanHandGesture_recognized_gesture header(::april_msgs::msg::HumanHandGesture::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HumanHandGesture_recognized_gesture(msg_);
  }

private:
  ::april_msgs::msg::HumanHandGesture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::HumanHandGesture>()
{
  return april_msgs::msg::builder::Init_HumanHandGesture_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__HUMAN_HAND_GESTURE__BUILDER_HPP_
