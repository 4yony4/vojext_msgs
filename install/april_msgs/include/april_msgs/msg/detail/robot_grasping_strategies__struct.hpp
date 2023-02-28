// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/RobotGraspingStrategies.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__STRUCT_HPP_

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
# define DEPRECATED__april_msgs__msg__RobotGraspingStrategies __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__RobotGraspingStrategies __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotGraspingStrategies_
{
  using Type = RobotGraspingStrategies_<ContainerAllocator>;

  explicit RobotGraspingStrategies_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->type.resize(3);
      this->type = {{"power"}, {"pinch"}, {"three_fingers"}};
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->location = "";
      this->timetolift = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = "";
      this->timetolift = 0.0f;
    }
  }

  explicit RobotGraspingStrategies_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->type.resize(3);
      this->type = {{"power"}, {"pinch"}, {"three_fingers"}};
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->location = "";
      this->timetolift = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = "";
      this->timetolift = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _type_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _type_type type;
  using _location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _location_type location;
  using _timetolift_type =
    float;
  _timetolift_type timetolift;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__type(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__timetolift(
    const float & _arg)
  {
    this->timetolift = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::RobotGraspingStrategies_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::RobotGraspingStrategies_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::RobotGraspingStrategies_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::RobotGraspingStrategies_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::RobotGraspingStrategies_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::RobotGraspingStrategies_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::RobotGraspingStrategies_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::RobotGraspingStrategies_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::RobotGraspingStrategies_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::RobotGraspingStrategies_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__RobotGraspingStrategies
    std::shared_ptr<april_msgs::msg::RobotGraspingStrategies_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__RobotGraspingStrategies
    std::shared_ptr<april_msgs::msg::RobotGraspingStrategies_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotGraspingStrategies_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    if (this->timetolift != other.timetolift) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotGraspingStrategies_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotGraspingStrategies_

// alias to use template instance with default allocator
using RobotGraspingStrategies =
  april_msgs::msg::RobotGraspingStrategies_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__STRUCT_HPP_
