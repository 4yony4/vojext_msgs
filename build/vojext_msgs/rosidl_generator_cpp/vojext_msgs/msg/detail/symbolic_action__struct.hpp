// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vojext_msgs:msg/SymbolicAction.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__STRUCT_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__STRUCT_HPP_

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
// Member 'grasp_facts'
#include "vojext_msgs/msg/detail/grasp_facts__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vojext_msgs__msg__SymbolicAction __attribute__((deprecated))
#else
# define DEPRECATED__vojext_msgs__msg__SymbolicAction __declspec(deprecated)
#endif

namespace vojext_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SymbolicAction_
{
  using Type = SymbolicAction_<ContainerAllocator>;

  explicit SymbolicAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_type = "";
      this->target_pose = "";
    }
  }

  explicit SymbolicAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    action_type(_alloc),
    target_pose(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_type = "";
      this->target_pose = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _action_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _action_type_type action_type;
  using _target_id_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _target_id_type target_id;
  using _grasp_facts_type =
    std::vector<vojext_msgs::msg::GraspFacts_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vojext_msgs::msg::GraspFacts_<ContainerAllocator>>>;
  _grasp_facts_type grasp_facts;
  using _target_pose_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_pose_type target_pose;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__action_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->action_type = _arg;
    return *this;
  }
  Type & set__target_id(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->target_id = _arg;
    return *this;
  }
  Type & set__grasp_facts(
    const std::vector<vojext_msgs::msg::GraspFacts_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vojext_msgs::msg::GraspFacts_<ContainerAllocator>>> & _arg)
  {
    this->grasp_facts = _arg;
    return *this;
  }
  Type & set__target_pose(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vojext_msgs::msg::SymbolicAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const vojext_msgs::msg::SymbolicAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vojext_msgs::msg::SymbolicAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vojext_msgs::msg::SymbolicAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::SymbolicAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::SymbolicAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::SymbolicAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::SymbolicAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vojext_msgs::msg::SymbolicAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vojext_msgs::msg::SymbolicAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vojext_msgs__msg__SymbolicAction
    std::shared_ptr<vojext_msgs::msg::SymbolicAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vojext_msgs__msg__SymbolicAction
    std::shared_ptr<vojext_msgs::msg::SymbolicAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SymbolicAction_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->action_type != other.action_type) {
      return false;
    }
    if (this->target_id != other.target_id) {
      return false;
    }
    if (this->grasp_facts != other.grasp_facts) {
      return false;
    }
    if (this->target_pose != other.target_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SymbolicAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SymbolicAction_

// alias to use template instance with default allocator
using SymbolicAction =
  vojext_msgs::msg::SymbolicAction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__SYMBOLIC_ACTION__STRUCT_HPP_
