// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/RobotArm.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_ARM__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_ARM__STRUCT_HPP_

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
// Member 'robotarmkinematic_list'
#include "april_msgs/msg/detail/robot_arm_kinematic__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__april_msgs__msg__RobotArm __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__RobotArm __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotArm_
{
  using Type = RobotArm_<ContainerAllocator>;

  explicit RobotArm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  explicit RobotArm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _robotarmkinematic_list_type =
    std::vector<april_msgs::msg::RobotArmKinematic_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::RobotArmKinematic_<ContainerAllocator>>>;
  _robotarmkinematic_list_type robotarmkinematic_list;

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
  Type & set__robotarmkinematic_list(
    const std::vector<april_msgs::msg::RobotArmKinematic_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::RobotArmKinematic_<ContainerAllocator>>> & _arg)
  {
    this->robotarmkinematic_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::RobotArm_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::RobotArm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::RobotArm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::RobotArm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::RobotArm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::RobotArm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::RobotArm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::RobotArm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::RobotArm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::RobotArm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__RobotArm
    std::shared_ptr<april_msgs::msg::RobotArm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__RobotArm
    std::shared_ptr<april_msgs::msg::RobotArm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotArm_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->robotarmkinematic_list != other.robotarmkinematic_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotArm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotArm_

// alias to use template instance with default allocator
using RobotArm =
  april_msgs::msg::RobotArm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_ARM__STRUCT_HPP_
