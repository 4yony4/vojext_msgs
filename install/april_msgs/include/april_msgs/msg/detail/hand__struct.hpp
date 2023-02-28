// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HAND__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__HAND__STRUCT_HPP_

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
# define DEPRECATED__april_msgs__msg__Hand __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__Hand __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Hand_
{
  using Type = Hand_<ContainerAllocator>;

  explicit Hand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
      this->width = 0ll;
      this->height = 0ll;
    }
  }

  explicit Hand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
      this->width = 0ll;
      this->height = 0ll;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_type =
    int64_t;
  _x_type x;
  using _y_type =
    int64_t;
  _y_type y;
  using _width_type =
    int64_t;
  _width_type width;
  using _height_type =
    int64_t;
  _height_type height;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__x(
    const int64_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int64_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__width(
    const int64_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int64_t & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::Hand_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::Hand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::Hand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::Hand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::Hand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::Hand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::Hand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::Hand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::Hand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::Hand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__Hand
    std::shared_ptr<april_msgs::msg::Hand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__Hand
    std::shared_ptr<april_msgs::msg::Hand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hand_

// alias to use template instance with default allocator
using Hand =
  april_msgs::msg::Hand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__HAND__STRUCT_HPP_
