// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vojext_msgs:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__STRUCT_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'humanmotion_list'
#include "vojext_msgs/msg/detail/human_motion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vojext_msgs__msg__HumanParameterIntention __attribute__((deprecated))
#else
# define DEPRECATED__vojext_msgs__msg__HumanParameterIntention __declspec(deprecated)
#endif

namespace vojext_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanParameterIntention_
{
  using Type = HumanParameterIntention_<ContainerAllocator>;

  explicit HumanParameterIntention_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_prediction = "";
      this->engagement_level = 0.0f;
      this->cognitive_level = 0.0f;
      this->mood_level = 0.0f;
    }
  }

  explicit HumanParameterIntention_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    motion_prediction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_prediction = "";
      this->engagement_level = 0.0f;
      this->cognitive_level = 0.0f;
      this->mood_level = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _motion_prediction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _motion_prediction_type motion_prediction;
  using _engagement_level_type =
    float;
  _engagement_level_type engagement_level;
  using _cognitive_level_type =
    float;
  _cognitive_level_type cognitive_level;
  using _mood_level_type =
    float;
  _mood_level_type mood_level;
  using _humanmotion_list_type =
    std::vector<vojext_msgs::msg::HumanMotion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vojext_msgs::msg::HumanMotion_<ContainerAllocator>>>;
  _humanmotion_list_type humanmotion_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__motion_prediction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->motion_prediction = _arg;
    return *this;
  }
  Type & set__engagement_level(
    const float & _arg)
  {
    this->engagement_level = _arg;
    return *this;
  }
  Type & set__cognitive_level(
    const float & _arg)
  {
    this->cognitive_level = _arg;
    return *this;
  }
  Type & set__mood_level(
    const float & _arg)
  {
    this->mood_level = _arg;
    return *this;
  }
  Type & set__humanmotion_list(
    const std::vector<vojext_msgs::msg::HumanMotion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vojext_msgs::msg::HumanMotion_<ContainerAllocator>>> & _arg)
  {
    this->humanmotion_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vojext_msgs::msg::HumanParameterIntention_<ContainerAllocator> *;
  using ConstRawPtr =
    const vojext_msgs::msg::HumanParameterIntention_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vojext_msgs::msg::HumanParameterIntention_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vojext_msgs::msg::HumanParameterIntention_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::HumanParameterIntention_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::HumanParameterIntention_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::HumanParameterIntention_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::HumanParameterIntention_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vojext_msgs::msg::HumanParameterIntention_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vojext_msgs::msg::HumanParameterIntention_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vojext_msgs__msg__HumanParameterIntention
    std::shared_ptr<vojext_msgs::msg::HumanParameterIntention_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vojext_msgs__msg__HumanParameterIntention
    std::shared_ptr<vojext_msgs::msg::HumanParameterIntention_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanParameterIntention_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->motion_prediction != other.motion_prediction) {
      return false;
    }
    if (this->engagement_level != other.engagement_level) {
      return false;
    }
    if (this->cognitive_level != other.cognitive_level) {
      return false;
    }
    if (this->mood_level != other.mood_level) {
      return false;
    }
    if (this->humanmotion_list != other.humanmotion_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanParameterIntention_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanParameterIntention_

// alias to use template instance with default allocator
using HumanParameterIntention =
  vojext_msgs::msg::HumanParameterIntention_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__STRUCT_HPP_
