// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/EmergencyRequestStatus.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__BUILDER_HPP_

#include "april_msgs/msg/detail/emergency_request_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_EmergencyRequestStatus_request_result
{
public:
  explicit Init_EmergencyRequestStatus_request_result(::april_msgs::msg::EmergencyRequestStatus & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::EmergencyRequestStatus request_result(::april_msgs::msg::EmergencyRequestStatus::_request_result_type arg)
  {
    msg_.request_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::EmergencyRequestStatus msg_;
};

class Init_EmergencyRequestStatus_request_progress
{
public:
  explicit Init_EmergencyRequestStatus_request_progress(::april_msgs::msg::EmergencyRequestStatus & msg)
  : msg_(msg)
  {}
  Init_EmergencyRequestStatus_request_result request_progress(::april_msgs::msg::EmergencyRequestStatus::_request_progress_type arg)
  {
    msg_.request_progress = std::move(arg);
    return Init_EmergencyRequestStatus_request_result(msg_);
  }

private:
  ::april_msgs::msg::EmergencyRequestStatus msg_;
};

class Init_EmergencyRequestStatus_header
{
public:
  Init_EmergencyRequestStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyRequestStatus_request_progress header(::april_msgs::msg::EmergencyRequestStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EmergencyRequestStatus_request_progress(msg_);
  }

private:
  ::april_msgs::msg::EmergencyRequestStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::EmergencyRequestStatus>()
{
  return april_msgs::msg::builder::Init_EmergencyRequestStatus_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__BUILDER_HPP_
