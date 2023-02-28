// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/ObjectsEstimatedPoses.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__STRUCT_HPP_

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
// Member 'objects_estimated_poses'
#include "april_msgs/msg/detail/object_estimated_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__april_msgs__msg__ObjectsEstimatedPoses __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__ObjectsEstimatedPoses __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectsEstimatedPoses_
{
  using Type = ObjectsEstimatedPoses_<ContainerAllocator>;

  explicit ObjectsEstimatedPoses_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ObjectsEstimatedPoses_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _objects_estimated_poses_type =
    std::vector<april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator>>>;
  _objects_estimated_poses_type objects_estimated_poses;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__objects_estimated_poses(
    const std::vector<april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator>>> & _arg)
  {
    this->objects_estimated_poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::ObjectsEstimatedPoses_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::ObjectsEstimatedPoses_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::ObjectsEstimatedPoses_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::ObjectsEstimatedPoses_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::ObjectsEstimatedPoses_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::ObjectsEstimatedPoses_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::ObjectsEstimatedPoses_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::ObjectsEstimatedPoses_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::ObjectsEstimatedPoses_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::ObjectsEstimatedPoses_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__ObjectsEstimatedPoses
    std::shared_ptr<april_msgs::msg::ObjectsEstimatedPoses_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__ObjectsEstimatedPoses
    std::shared_ptr<april_msgs::msg::ObjectsEstimatedPoses_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectsEstimatedPoses_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->objects_estimated_poses != other.objects_estimated_poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectsEstimatedPoses_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectsEstimatedPoses_

// alias to use template instance with default allocator
using ObjectsEstimatedPoses =
  april_msgs::msg::ObjectsEstimatedPoses_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__OBJECTS_ESTIMATED_POSES__STRUCT_HPP_
