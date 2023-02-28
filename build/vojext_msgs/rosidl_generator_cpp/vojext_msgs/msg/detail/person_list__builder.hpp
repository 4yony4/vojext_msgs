// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vojext_msgs:msg/PersonList.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__PERSON_LIST__BUILDER_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__PERSON_LIST__BUILDER_HPP_

#include "vojext_msgs/msg/detail/person_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vojext_msgs
{

namespace msg
{

namespace builder
{

class Init_PersonList_person_list
{
public:
  explicit Init_PersonList_person_list(::vojext_msgs::msg::PersonList & msg)
  : msg_(msg)
  {}
  ::vojext_msgs::msg::PersonList person_list(::vojext_msgs::msg::PersonList::_person_list_type arg)
  {
    msg_.person_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vojext_msgs::msg::PersonList msg_;
};

class Init_PersonList_image_header
{
public:
  explicit Init_PersonList_image_header(::vojext_msgs::msg::PersonList & msg)
  : msg_(msg)
  {}
  Init_PersonList_person_list image_header(::vojext_msgs::msg::PersonList::_image_header_type arg)
  {
    msg_.image_header = std::move(arg);
    return Init_PersonList_person_list(msg_);
  }

private:
  ::vojext_msgs::msg::PersonList msg_;
};

class Init_PersonList_header
{
public:
  Init_PersonList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PersonList_image_header header(::vojext_msgs::msg::PersonList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PersonList_image_header(msg_);
  }

private:
  ::vojext_msgs::msg::PersonList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vojext_msgs::msg::PersonList>()
{
  return vojext_msgs::msg::builder::Init_PersonList_header();
}

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__PERSON_LIST__BUILDER_HPP_
