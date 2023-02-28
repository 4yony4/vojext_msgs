// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/PassportValidation.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__PASSPORT_VALIDATION__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__PASSPORT_VALIDATION__BUILDER_HPP_

#include "april_msgs/msg/detail/passport_validation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_PassportValidation_result
{
public:
  explicit Init_PassportValidation_result(::april_msgs::msg::PassportValidation & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::PassportValidation result(::april_msgs::msg::PassportValidation::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::PassportValidation msg_;
};

class Init_PassportValidation_passport_num
{
public:
  explicit Init_PassportValidation_passport_num(::april_msgs::msg::PassportValidation & msg)
  : msg_(msg)
  {}
  Init_PassportValidation_result passport_num(::april_msgs::msg::PassportValidation::_passport_num_type arg)
  {
    msg_.passport_num = std::move(arg);
    return Init_PassportValidation_result(msg_);
  }

private:
  ::april_msgs::msg::PassportValidation msg_;
};

class Init_PassportValidation_header
{
public:
  Init_PassportValidation_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PassportValidation_passport_num header(::april_msgs::msg::PassportValidation::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PassportValidation_passport_num(msg_);
  }

private:
  ::april_msgs::msg::PassportValidation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::PassportValidation>()
{
  return april_msgs::msg::builder::Init_PassportValidation_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__PASSPORT_VALIDATION__BUILDER_HPP_
