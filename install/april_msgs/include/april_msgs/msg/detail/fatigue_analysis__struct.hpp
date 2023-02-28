// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/FatigueAnalysis.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__FATIGUE_ANALYSIS__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__FATIGUE_ANALYSIS__STRUCT_HPP_

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
# define DEPRECATED__april_msgs__msg__FatigueAnalysis __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__FatigueAnalysis __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FatigueAnalysis_
{
  using Type = FatigueAnalysis_<ContainerAllocator>;

  explicit FatigueAnalysis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->fatigue_values[0] = "low";
      this->fatigue_values[1] = "medium";
      this->fatigue_values[2] = "high";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->fatigue_values.begin(), this->fatigue_values.end(), "");
    }
  }

  explicit FatigueAnalysis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    fatigue_values(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->fatigue_values[0] = "low";
      this->fatigue_values[1] = "medium";
      this->fatigue_values[2] = "high";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->fatigue_values.begin(), this->fatigue_values.end(), "");
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fatigue_values_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 3>;
  _fatigue_values_type fatigue_values;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fatigue_values(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 3> & _arg)
  {
    this->fatigue_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::FatigueAnalysis_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::FatigueAnalysis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::FatigueAnalysis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::FatigueAnalysis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::FatigueAnalysis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::FatigueAnalysis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::FatigueAnalysis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::FatigueAnalysis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::FatigueAnalysis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::FatigueAnalysis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__FatigueAnalysis
    std::shared_ptr<april_msgs::msg::FatigueAnalysis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__FatigueAnalysis
    std::shared_ptr<april_msgs::msg::FatigueAnalysis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FatigueAnalysis_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fatigue_values != other.fatigue_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const FatigueAnalysis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FatigueAnalysis_

// alias to use template instance with default allocator
using FatigueAnalysis =
  april_msgs::msg::FatigueAnalysis_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__FATIGUE_ANALYSIS__STRUCT_HPP_
