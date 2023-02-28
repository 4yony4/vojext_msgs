// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_

#include "vojext_msgs/msg/detail/person__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_Person_right_hand
{
public:
  explicit Init_Person_right_hand(::vojext_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::Person right_hand(::vojext_msgs::msg::Person::_right_hand_type arg)
  {
    msg_.right_hand = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::Person msg_;
};

class Init_Person_left_hand
{
public:
  explicit Init_Person_left_hand(::vojext_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_right_hand left_hand(::vojext_msgs::msg::Person::_left_hand_type arg)
  {
    msg_.left_hand = std::move(arg);
    return Init_Person_right_hand(msg_);
  }

private:
  ::vojext_msgs::msg::Person msg_;
};

class Init_Person_final_result_right
{
public:
  explicit Init_Person_final_result_right(::vojext_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_left_hand final_result_right(::vojext_msgs::msg::Person::_final_result_right_type arg)
  {
    msg_.final_result_right = std::move(arg);
    return Init_Person_left_hand(msg_);
  }

private:
  ::vojext_msgs::msg::Person msg_;
};

class Init_Person_final_result_left
{
public:
  explicit Init_Person_final_result_left(::vojext_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_final_result_right final_result_left(::vojext_msgs::msg::Person::_final_result_left_type arg)
  {
    msg_.final_result_left = std::move(arg);
    return Init_Person_final_result_right(msg_);
  }

private:
  ::vojext_msgs::msg::Person msg_;
};

class Init_Person_result_static_right
{
public:
  explicit Init_Person_result_static_right(::vojext_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_final_result_left result_static_right(::vojext_msgs::msg::Person::_result_static_right_type arg)
  {
    msg_.result_static_right = std::move(arg);
    return Init_Person_final_result_left(msg_);
  }

private:
  ::vojext_msgs::msg::Person msg_;
};

class Init_Person_result_static_left
{
public:
  explicit Init_Person_result_static_left(::vojext_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_result_static_right result_static_left(::vojext_msgs::msg::Person::_result_static_left_type arg)
  {
    msg_.result_static_left = std::move(arg);
    return Init_Person_result_static_right(msg_);
  }

private:
  ::vojext_msgs::msg::Person msg_;
};

class Init_Person_result_dynamic_right
{
public:
  explicit Init_Person_result_dynamic_right(::vojext_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_result_static_left result_dynamic_right(::vojext_msgs::msg::Person::_result_dynamic_right_type arg)
  {
    msg_.result_dynamic_right = std::move(arg);
    return Init_Person_result_static_left(msg_);
  }

private:
  ::vojext_msgs::msg::Person msg_;
};

class Init_Person_result_dynamic_left
{
public:
  explicit Init_Person_result_dynamic_left(::vojext_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_result_dynamic_right result_dynamic_left(::vojext_msgs::msg::Person::_result_dynamic_left_type arg)
  {
    msg_.result_dynamic_left = std::move(arg);
    return Init_Person_result_dynamic_right(msg_);
  }

private:
  ::vojext_msgs::msg::Person msg_;
};

class Init_Person_header
{
public:
  Init_Person_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Person_result_dynamic_left header(::vojext_msgs::msg::Person::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Person_result_dynamic_left(msg_);
  }

private:
  ::vojext_msgs::msg::Person msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::Person>()
{
  return vojext_msgs::msg::builder::Init_Person_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_
