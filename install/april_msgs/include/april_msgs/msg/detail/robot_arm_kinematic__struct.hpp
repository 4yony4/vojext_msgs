// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/RobotArmKinematic.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_ARM_KINEMATIC__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_ARM_KINEMATIC__STRUCT_HPP_

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
# define DEPRECATED__april_msgs__msg__RobotArmKinematic __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__RobotArmKinematic __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotArmKinematic_
{
  using Type = RobotArmKinematic_<ContainerAllocator>;

  explicit RobotArmKinematic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = "";
      this->velocity = "";
      this->acceleration = "";
      this->forces = "";
    }
  }

  explicit RobotArmKinematic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc),
    velocity(_alloc),
    acceleration(_alloc),
    forces(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = "";
      this->velocity = "";
      this->acceleration = "";
      this->forces = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _position_type position;
  using _velocity_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _velocity_type velocity;
  using _acceleration_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _acceleration_type acceleration;
  using _forces_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _forces_type forces;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__forces(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->forces = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::RobotArmKinematic_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::RobotArmKinematic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::RobotArmKinematic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::RobotArmKinematic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::RobotArmKinematic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::RobotArmKinematic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::RobotArmKinematic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::RobotArmKinematic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::RobotArmKinematic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::RobotArmKinematic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__RobotArmKinematic
    std::shared_ptr<april_msgs::msg::RobotArmKinematic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__RobotArmKinematic
    std::shared_ptr<april_msgs::msg::RobotArmKinematic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotArmKinematic_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->forces != other.forces) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotArmKinematic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotArmKinematic_

// alias to use template instance with default allocator
using RobotArmKinematic =
  april_msgs::msg::RobotArmKinematic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_ARM_KINEMATIC__STRUCT_HPP_
