// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vojext_msgs:msg/HumanHandGesture.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HUMAN_HAND_GESTURE__STRUCT_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__HUMAN_HAND_GESTURE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__vojext_msgs__msg__HumanHandGesture __attribute__((deprecated))
#else
# define DEPRECATED__vojext_msgs__msg__HumanHandGesture __declspec(deprecated)
#endif

namespace vojext_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanHandGesture_
{
  using Type = HumanHandGesture_<ContainerAllocator>;

  explicit HumanHandGesture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->recognized_gesture = "";
    }
  }

  explicit HumanHandGesture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    recognized_gesture(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->recognized_gesture = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _recognized_gesture_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _recognized_gesture_type recognized_gesture;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__recognized_gesture(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->recognized_gesture = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vojext_msgs::msg::HumanHandGesture_<ContainerAllocator> *;
  using ConstRawPtr =
    const vojext_msgs::msg::HumanHandGesture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vojext_msgs::msg::HumanHandGesture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vojext_msgs::msg::HumanHandGesture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::HumanHandGesture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::HumanHandGesture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::HumanHandGesture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::HumanHandGesture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vojext_msgs::msg::HumanHandGesture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vojext_msgs::msg::HumanHandGesture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vojext_msgs__msg__HumanHandGesture
    std::shared_ptr<vojext_msgs::msg::HumanHandGesture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vojext_msgs__msg__HumanHandGesture
    std::shared_ptr<vojext_msgs::msg::HumanHandGesture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanHandGesture_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->recognized_gesture != other.recognized_gesture) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanHandGesture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanHandGesture_

// alias to use template instance with default allocator
using HumanHandGesture =
  vojext_msgs::msg::HumanHandGesture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__HUMAN_HAND_GESTURE__STRUCT_HPP_
