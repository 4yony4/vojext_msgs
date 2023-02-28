// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vojext_msgs:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice

#ifndef VOJEXT_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__TRAITS_HPP_
#define VOJEXT_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__TRAITS_HPP_

#include "vojext_msgs/msg/detail/human_parameter_intention__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'humanmotion_list'
#include "vojext_msgs/msg/detail/human_motion__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vojext_msgs::msg::HumanParameterIntention & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: motion_prediction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_prediction: ";
    value_to_yaml(msg.motion_prediction, out);
    out << "\n";
  }

  // member: engagement_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engagement_level: ";
    value_to_yaml(msg.engagement_level, out);
    out << "\n";
  }

  // member: cognitive_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cognitive_level: ";
    value_to_yaml(msg.cognitive_level, out);
    out << "\n";
  }

  // member: mood_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mood_level: ";
    value_to_yaml(msg.mood_level, out);
    out << "\n";
  }

  // member: humanmotion_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.humanmotion_list.size() == 0) {
      out << "humanmotion_list: []\n";
    } else {
      out << "humanmotion_list:\n";
      for (auto item : msg.humanmotion_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vojext_msgs::msg::HumanParameterIntention & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vojext_msgs::msg::HumanParameterIntention>()
{
  return "vojext_msgs::msg::HumanParameterIntention";
}

template<>
inline const char * name<vojext_msgs::msg::HumanParameterIntention>()
{
  return "vojext_msgs/msg/HumanParameterIntention";
}

template<>
struct has_fixed_size<vojext_msgs::msg::HumanParameterIntention>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vojext_msgs::msg::HumanParameterIntention>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vojext_msgs::msg::HumanParameterIntention>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOJEXT_MSGS__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__TRAITS_HPP_
