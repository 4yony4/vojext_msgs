// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_HPP_

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
// Member 'humamgrasping_list'
#include "april_msgs/msg/detail/human_grasping_strategies__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__april_msgs__msg__HumanBehaviour __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__HumanBehaviour __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanBehaviour_
{
  using Type = HumanBehaviour_<ContainerAllocator>;

  explicit HumanBehaviour_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->body_posture = "";
    }
  }

  explicit HumanBehaviour_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    body_posture(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->body_posture = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _body_posture_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _body_posture_type body_posture;
  using _humamgrasping_list_type =
    std::vector<april_msgs::msg::HumanGraspingStrategies_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::HumanGraspingStrategies_<ContainerAllocator>>>;
  _humamgrasping_list_type humamgrasping_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__body_posture(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->body_posture = _arg;
    return *this;
  }
  Type & set__humamgrasping_list(
    const std::vector<april_msgs::msg::HumanGraspingStrategies_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::HumanGraspingStrategies_<ContainerAllocator>>> & _arg)
  {
    this->humamgrasping_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::HumanBehaviour_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::HumanBehaviour_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::HumanBehaviour_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::HumanBehaviour_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::HumanBehaviour_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::HumanBehaviour_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::HumanBehaviour_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::HumanBehaviour_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::HumanBehaviour_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::HumanBehaviour_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__HumanBehaviour
    std::shared_ptr<april_msgs::msg::HumanBehaviour_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__HumanBehaviour
    std::shared_ptr<april_msgs::msg::HumanBehaviour_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanBehaviour_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->body_posture != other.body_posture) {
      return false;
    }
    if (this->humamgrasping_list != other.humamgrasping_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanBehaviour_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanBehaviour_

// alias to use template instance with default allocator
using HumanBehaviour =
  april_msgs::msg::HumanBehaviour_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_HPP_
