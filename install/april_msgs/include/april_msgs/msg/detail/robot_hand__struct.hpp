// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/RobotHand.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_HAND__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_HAND__STRUCT_HPP_

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
// Member 'robothandkinematic_list'
#include "april_msgs/msg/detail/robot_hand_kinematic__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__april_msgs__msg__RobotHand __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__RobotHand __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotHand_
{
  using Type = RobotHand_<ContainerAllocator>;

  explicit RobotHand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  explicit RobotHand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _robothandkinematic_list_type =
    std::vector<april_msgs::msg::RobotHandKinematic_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::RobotHandKinematic_<ContainerAllocator>>>;
  _robothandkinematic_list_type robothandkinematic_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__robothandkinematic_list(
    const std::vector<april_msgs::msg::RobotHandKinematic_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::RobotHandKinematic_<ContainerAllocator>>> & _arg)
  {
    this->robothandkinematic_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::RobotHand_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::RobotHand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::RobotHand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::RobotHand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::RobotHand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::RobotHand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::RobotHand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::RobotHand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::RobotHand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::RobotHand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__RobotHand
    std::shared_ptr<april_msgs::msg::RobotHand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__RobotHand
    std::shared_ptr<april_msgs::msg::RobotHand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotHand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->robothandkinematic_list != other.robothandkinematic_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotHand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotHand_

// alias to use template instance with default allocator
using RobotHand =
  april_msgs::msg::RobotHand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_HAND__STRUCT_HPP_
