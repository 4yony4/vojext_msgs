// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vojext_msgs:msg/GraspTrajectory.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__GRASP_TRAJECTORY__STRUCT_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__GRASP_TRAJECTORY__STRUCT_HPP_

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
// Member 'hand_poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'fingers_states'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vojext_msgs__msg__GraspTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__vojext_msgs__msg__GraspTrajectory __declspec(deprecated)
#endif

namespace vojext_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraspTrajectory_
{
  using Type = GraspTrajectory_<ContainerAllocator>;

  explicit GraspTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ee_frame_id = "";
    }
  }

  explicit GraspTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ee_frame_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ee_frame_id = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ee_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ee_frame_id_type ee_frame_id;
  using _hand_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _hand_poses_type hand_poses;
  using _fingers_states_type =
    std::vector<sensor_msgs::msg::JointState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::JointState_<ContainerAllocator>>>;
  _fingers_states_type fingers_states;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ee_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ee_frame_id = _arg;
    return *this;
  }
  Type & set__hand_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->hand_poses = _arg;
    return *this;
  }
  Type & set__fingers_states(
    const std::vector<sensor_msgs::msg::JointState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::JointState_<ContainerAllocator>>> & _arg)
  {
    this->fingers_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vojext_msgs::msg::GraspTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const vojext_msgs::msg::GraspTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vojext_msgs::msg::GraspTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vojext_msgs::msg::GraspTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::GraspTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::GraspTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vojext_msgs::msg::GraspTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vojext_msgs::msg::GraspTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vojext_msgs::msg::GraspTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vojext_msgs::msg::GraspTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vojext_msgs__msg__GraspTrajectory
    std::shared_ptr<vojext_msgs::msg::GraspTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vojext_msgs__msg__GraspTrajectory
    std::shared_ptr<vojext_msgs::msg::GraspTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspTrajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ee_frame_id != other.ee_frame_id) {
      return false;
    }
    if (this->hand_poses != other.hand_poses) {
      return false;
    }
    if (this->fingers_states != other.fingers_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspTrajectory_

// alias to use template instance with default allocator
using GraspTrajectory =
  vojext_msgs::msg::GraspTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vojext_msgs

#endif  // VOJEXT_MSGS__MSG__DETAIL__GRASP_TRAJECTORY__STRUCT_HPP_
