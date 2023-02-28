// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from april_msgs:msg/ObjectEstimatedPose.idl
// generated code does not contain a copyright notice

#ifndef APRIL_MSGS__MSG__DETAIL__OBJECT_ESTIMATED_POSE__STRUCT_HPP_
#define APRIL_MSGS__MSG__DETAIL__OBJECT_ESTIMATED_POSE__STRUCT_HPP_

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
// Member 'point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'estimated_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__april_msgs__msg__ObjectEstimatedPose __attribute__((deprecated))
#else
# define DEPRECATED__april_msgs__msg__ObjectEstimatedPose __declspec(deprecated)
#endif

namespace april_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectEstimatedPose_
{
  using Type = ObjectEstimatedPose_<ContainerAllocator>;

  explicit ObjectEstimatedPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    point_cloud(_init),
    estimated_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->sclass = "";
    }
  }

  explicit ObjectEstimatedPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    point_cloud(_alloc, _init),
    estimated_pose(_alloc, _init),
    sclass(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->sclass = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _point_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _point_cloud_type point_cloud;
  using _estimated_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _estimated_pose_type estimated_pose;
  using _id_type =
    int16_t;
  _id_type id;
  using _sclass_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sclass_type sclass;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__point_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->point_cloud = _arg;
    return *this;
  }
  Type & set__estimated_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->estimated_pose = _arg;
    return *this;
  }
  Type & set__id(
    const int16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__sclass(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sclass = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__april_msgs__msg__ObjectEstimatedPose
    std::shared_ptr<april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__april_msgs__msg__ObjectEstimatedPose
    std::shared_ptr<april_msgs::msg::ObjectEstimatedPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectEstimatedPose_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->point_cloud != other.point_cloud) {
      return false;
    }
    if (this->estimated_pose != other.estimated_pose) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->sclass != other.sclass) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectEstimatedPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectEstimatedPose_

// alias to use template instance with default allocator
using ObjectEstimatedPose =
  april_msgs::msg::ObjectEstimatedPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace april_msgs

#endif  // APRIL_MSGS__MSG__DETAIL__OBJECT_ESTIMATED_POSE__STRUCT_HPP_
