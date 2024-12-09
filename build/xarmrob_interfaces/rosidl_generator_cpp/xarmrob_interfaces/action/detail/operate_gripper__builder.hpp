// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xarmrob_interfaces:action/OperateGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/action/operate_gripper.hpp"


#ifndef XARMROB_INTERFACES__ACTION__DETAIL__OPERATE_GRIPPER__BUILDER_HPP_
#define XARMROB_INTERFACES__ACTION__DETAIL__OPERATE_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xarmrob_interfaces/action/detail/operate_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_OperateGripper_Goal_order
{
public:
  Init_OperateGripper_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xarmrob_interfaces::action::OperateGripper_Goal order(::xarmrob_interfaces::action::OperateGripper_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::OperateGripper_Goal>()
{
  return xarmrob_interfaces::action::builder::Init_OperateGripper_Goal_order();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_OperateGripper_Result_result
{
public:
  Init_OperateGripper_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xarmrob_interfaces::action::OperateGripper_Result result(::xarmrob_interfaces::action::OperateGripper_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::OperateGripper_Result>()
{
  return xarmrob_interfaces::action::builder::Init_OperateGripper_Result_result();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_OperateGripper_Feedback_feedback
{
public:
  Init_OperateGripper_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xarmrob_interfaces::action::OperateGripper_Feedback feedback(::xarmrob_interfaces::action::OperateGripper_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::OperateGripper_Feedback>()
{
  return xarmrob_interfaces::action::builder::Init_OperateGripper_Feedback_feedback();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_OperateGripper_SendGoal_Request_goal
{
public:
  explicit Init_OperateGripper_SendGoal_Request_goal(::xarmrob_interfaces::action::OperateGripper_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::action::OperateGripper_SendGoal_Request goal(::xarmrob_interfaces::action::OperateGripper_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_SendGoal_Request msg_;
};

class Init_OperateGripper_SendGoal_Request_goal_id
{
public:
  Init_OperateGripper_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperateGripper_SendGoal_Request_goal goal_id(::xarmrob_interfaces::action::OperateGripper_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_OperateGripper_SendGoal_Request_goal(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::OperateGripper_SendGoal_Request>()
{
  return xarmrob_interfaces::action::builder::Init_OperateGripper_SendGoal_Request_goal_id();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_OperateGripper_SendGoal_Response_stamp
{
public:
  explicit Init_OperateGripper_SendGoal_Response_stamp(::xarmrob_interfaces::action::OperateGripper_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::action::OperateGripper_SendGoal_Response stamp(::xarmrob_interfaces::action::OperateGripper_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_SendGoal_Response msg_;
};

class Init_OperateGripper_SendGoal_Response_accepted
{
public:
  Init_OperateGripper_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperateGripper_SendGoal_Response_stamp accepted(::xarmrob_interfaces::action::OperateGripper_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_OperateGripper_SendGoal_Response_stamp(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::OperateGripper_SendGoal_Response>()
{
  return xarmrob_interfaces::action::builder::Init_OperateGripper_SendGoal_Response_accepted();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_OperateGripper_SendGoal_Event_response
{
public:
  explicit Init_OperateGripper_SendGoal_Event_response(::xarmrob_interfaces::action::OperateGripper_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::action::OperateGripper_SendGoal_Event response(::xarmrob_interfaces::action::OperateGripper_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_SendGoal_Event msg_;
};

class Init_OperateGripper_SendGoal_Event_request
{
public:
  explicit Init_OperateGripper_SendGoal_Event_request(::xarmrob_interfaces::action::OperateGripper_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_OperateGripper_SendGoal_Event_response request(::xarmrob_interfaces::action::OperateGripper_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_OperateGripper_SendGoal_Event_response(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_SendGoal_Event msg_;
};

class Init_OperateGripper_SendGoal_Event_info
{
public:
  Init_OperateGripper_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperateGripper_SendGoal_Event_request info(::xarmrob_interfaces::action::OperateGripper_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_OperateGripper_SendGoal_Event_request(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::OperateGripper_SendGoal_Event>()
{
  return xarmrob_interfaces::action::builder::Init_OperateGripper_SendGoal_Event_info();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_OperateGripper_GetResult_Request_goal_id
{
public:
  Init_OperateGripper_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xarmrob_interfaces::action::OperateGripper_GetResult_Request goal_id(::xarmrob_interfaces::action::OperateGripper_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::OperateGripper_GetResult_Request>()
{
  return xarmrob_interfaces::action::builder::Init_OperateGripper_GetResult_Request_goal_id();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_OperateGripper_GetResult_Response_result
{
public:
  explicit Init_OperateGripper_GetResult_Response_result(::xarmrob_interfaces::action::OperateGripper_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::action::OperateGripper_GetResult_Response result(::xarmrob_interfaces::action::OperateGripper_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_GetResult_Response msg_;
};

class Init_OperateGripper_GetResult_Response_status
{
public:
  Init_OperateGripper_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperateGripper_GetResult_Response_result status(::xarmrob_interfaces::action::OperateGripper_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_OperateGripper_GetResult_Response_result(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::OperateGripper_GetResult_Response>()
{
  return xarmrob_interfaces::action::builder::Init_OperateGripper_GetResult_Response_status();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_OperateGripper_GetResult_Event_response
{
public:
  explicit Init_OperateGripper_GetResult_Event_response(::xarmrob_interfaces::action::OperateGripper_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::action::OperateGripper_GetResult_Event response(::xarmrob_interfaces::action::OperateGripper_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_GetResult_Event msg_;
};

class Init_OperateGripper_GetResult_Event_request
{
public:
  explicit Init_OperateGripper_GetResult_Event_request(::xarmrob_interfaces::action::OperateGripper_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_OperateGripper_GetResult_Event_response request(::xarmrob_interfaces::action::OperateGripper_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_OperateGripper_GetResult_Event_response(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_GetResult_Event msg_;
};

class Init_OperateGripper_GetResult_Event_info
{
public:
  Init_OperateGripper_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperateGripper_GetResult_Event_request info(::xarmrob_interfaces::action::OperateGripper_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_OperateGripper_GetResult_Event_request(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::OperateGripper_GetResult_Event>()
{
  return xarmrob_interfaces::action::builder::Init_OperateGripper_GetResult_Event_info();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_OperateGripper_FeedbackMessage_feedback
{
public:
  explicit Init_OperateGripper_FeedbackMessage_feedback(::xarmrob_interfaces::action::OperateGripper_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::action::OperateGripper_FeedbackMessage feedback(::xarmrob_interfaces::action::OperateGripper_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_FeedbackMessage msg_;
};

class Init_OperateGripper_FeedbackMessage_goal_id
{
public:
  Init_OperateGripper_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperateGripper_FeedbackMessage_feedback goal_id(::xarmrob_interfaces::action::OperateGripper_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_OperateGripper_FeedbackMessage_feedback(msg_);
  }

private:
  ::xarmrob_interfaces::action::OperateGripper_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::OperateGripper_FeedbackMessage>()
{
  return xarmrob_interfaces::action::builder::Init_OperateGripper_FeedbackMessage_goal_id();
}

}  // namespace xarmrob_interfaces

#endif  // XARMROB_INTERFACES__ACTION__DETAIL__OPERATE_GRIPPER__BUILDER_HPP_
