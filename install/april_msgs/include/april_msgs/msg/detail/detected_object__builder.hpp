// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from april_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
#define APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_

#include "april_msgs/msg/detail/detected_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace april_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObject_class_name
{
public:
  explicit Init_DetectedObject_class_name(::april_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  ::april_msgs::msg::DetectedObject class_name(::april_msgs::msg::DetectedObject::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::april_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_class_id
{
public:
  explicit Init_DetectedObject_class_id(::april_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_class_name class_id(::april_msgs::msg::DetectedObject::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_DetectedObject_class_name(msg_);
  }

private:
  ::april_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_tracked_id
{
public:
  explicit Init_DetectedObject_tracked_id(::april_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_class_id tracked_id(::april_msgs::msg::DetectedObject::_tracked_id_type arg)
  {
    msg_.tracked_id = std::move(arg);
    return Init_DetectedObject_class_id(msg_);
  }

private:
  ::april_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_detected_id
{
public:
  explicit Init_DetectedObject_detected_id(::april_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_tracked_id detected_id(::april_msgs::msg::DetectedObject::_detected_id_type arg)
  {
    msg_.detected_id = std::move(arg);
    return Init_DetectedObject_tracked_id(msg_);
  }

private:
  ::april_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_probability
{
public:
  explicit Init_DetectedObject_probability(::april_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_detected_id probability(::april_msgs::msg::DetectedObject::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_DetectedObject_detected_id(msg_);
  }

private:
  ::april_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_segmentation_mask
{
public:
  explicit Init_DetectedObject_segmentation_mask(::april_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_probability segmentation_mask(::april_msgs::msg::DetectedObject::_segmentation_mask_type arg)
  {
    msg_.segmentation_mask = std::move(arg);
    return Init_DetectedObject_probability(msg_);
  }

private:
  ::april_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_bounding_box
{
public:
  explicit Init_DetectedObject_bounding_box(::april_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_segmentation_mask bounding_box(::april_msgs::msg::DetectedObject::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return Init_DetectedObject_segmentation_mask(msg_);
  }

private:
  ::april_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_header
{
public:
  Init_DetectedObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObject_bounding_box header(::april_msgs::msg::DetectedObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectedObject_bounding_box(msg_);
  }

private:
  ::april_msgs::msg::DetectedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::april_msgs::msg::DetectedObject>()
{
  return april_msgs::msg::builder::Init_DetectedObject_header();
}

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
