// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xarmrob_interfaces:action/ME439MoveToTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarmrob_interfaces/action/me439_move_to_target.hpp"


#ifndef XARMROB_INTERFACES__ACTION__DETAIL__ME439_MOVE_TO_TARGET__BUILDER_HPP_
#define XARMROB_INTERFACES__ACTION__DETAIL__ME439_MOVE_TO_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xarmrob_interfaces/action/detail/me439_move_to_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_ME439MoveToTarget_Goal_xyz
{
public:
  Init_ME439MoveToTarget_Goal_xyz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xarmrob_interfaces::action::ME439MoveToTarget_Goal xyz(::xarmrob_interfaces::action::ME439MoveToTarget_Goal::_xyz_type arg)
  {
    msg_.xyz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::ME439MoveToTarget_Goal>()
{
  return xarmrob_interfaces::action::builder::Init_ME439MoveToTarget_Goal_xyz();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_ME439MoveToTarget_Result_xyz
{
public:
  Init_ME439MoveToTarget_Result_xyz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xarmrob_interfaces::action::ME439MoveToTarget_Result xyz(::xarmrob_interfaces::action::ME439MoveToTarget_Result::_xyz_type arg)
  {
    msg_.xyz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::ME439MoveToTarget_Result>()
{
  return xarmrob_interfaces::action::builder::Init_ME439MoveToTarget_Result_xyz();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_ME439MoveToTarget_Feedback_xyz
{
public:
  Init_ME439MoveToTarget_Feedback_xyz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xarmrob_interfaces::action::ME439MoveToTarget_Feedback xyz(::xarmrob_interfaces::action::ME439MoveToTarget_Feedback::_xyz_type arg)
  {
    msg_.xyz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::ME439MoveToTarget_Feedback>()
{
  return xarmrob_interfaces::action::builder::Init_ME439MoveToTarget_Feedback_xyz();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_ME439MoveToTarget_SendGoal_Request_goal
{
public:
  explicit Init_ME439MoveToTarget_SendGoal_Request_goal(::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request goal(::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request msg_;
};

class Init_ME439MoveToTarget_SendGoal_Request_goal_id
{
public:
  Init_ME439MoveToTarget_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ME439MoveToTarget_SendGoal_Request_goal goal_id(::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ME439MoveToTarget_SendGoal_Request_goal(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Request>()
{
  return xarmrob_interfaces::action::builder::Init_ME439MoveToTarget_SendGoal_Request_goal_id();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_ME439MoveToTarget_SendGoal_Response_stamp
{
public:
  explicit Init_ME439MoveToTarget_SendGoal_Response_stamp(::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response stamp(::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response msg_;
};

class Init_ME439MoveToTarget_SendGoal_Response_accepted
{
public:
  Init_ME439MoveToTarget_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ME439MoveToTarget_SendGoal_Response_stamp accepted(::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ME439MoveToTarget_SendGoal_Response_stamp(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Response>()
{
  return xarmrob_interfaces::action::builder::Init_ME439MoveToTarget_SendGoal_Response_accepted();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_ME439MoveToTarget_SendGoal_Event_response
{
public:
  explicit Init_ME439MoveToTarget_SendGoal_Event_response(::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event response(::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event msg_;
};

class Init_ME439MoveToTarget_SendGoal_Event_request
{
public:
  explicit Init_ME439MoveToTarget_SendGoal_Event_request(::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ME439MoveToTarget_SendGoal_Event_response request(::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ME439MoveToTarget_SendGoal_Event_response(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event msg_;
};

class Init_ME439MoveToTarget_SendGoal_Event_info
{
public:
  Init_ME439MoveToTarget_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ME439MoveToTarget_SendGoal_Event_request info(::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ME439MoveToTarget_SendGoal_Event_request(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::ME439MoveToTarget_SendGoal_Event>()
{
  return xarmrob_interfaces::action::builder::Init_ME439MoveToTarget_SendGoal_Event_info();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_ME439MoveToTarget_GetResult_Request_goal_id
{
public:
  Init_ME439MoveToTarget_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request goal_id(::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Request>()
{
  return xarmrob_interfaces::action::builder::Init_ME439MoveToTarget_GetResult_Request_goal_id();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_ME439MoveToTarget_GetResult_Response_result
{
public:
  explicit Init_ME439MoveToTarget_GetResult_Response_result(::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response result(::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response msg_;
};

class Init_ME439MoveToTarget_GetResult_Response_status
{
public:
  Init_ME439MoveToTarget_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ME439MoveToTarget_GetResult_Response_result status(::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ME439MoveToTarget_GetResult_Response_result(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Response>()
{
  return xarmrob_interfaces::action::builder::Init_ME439MoveToTarget_GetResult_Response_status();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_ME439MoveToTarget_GetResult_Event_response
{
public:
  explicit Init_ME439MoveToTarget_GetResult_Event_response(::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event response(::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event msg_;
};

class Init_ME439MoveToTarget_GetResult_Event_request
{
public:
  explicit Init_ME439MoveToTarget_GetResult_Event_request(::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ME439MoveToTarget_GetResult_Event_response request(::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ME439MoveToTarget_GetResult_Event_response(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event msg_;
};

class Init_ME439MoveToTarget_GetResult_Event_info
{
public:
  Init_ME439MoveToTarget_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ME439MoveToTarget_GetResult_Event_request info(::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ME439MoveToTarget_GetResult_Event_request(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::ME439MoveToTarget_GetResult_Event>()
{
  return xarmrob_interfaces::action::builder::Init_ME439MoveToTarget_GetResult_Event_info();
}

}  // namespace xarmrob_interfaces


namespace xarmrob_interfaces
{

namespace action
{

namespace builder
{

class Init_ME439MoveToTarget_FeedbackMessage_feedback
{
public:
  explicit Init_ME439MoveToTarget_FeedbackMessage_feedback(::xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage feedback(::xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage msg_;
};

class Init_ME439MoveToTarget_FeedbackMessage_goal_id
{
public:
  Init_ME439MoveToTarget_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ME439MoveToTarget_FeedbackMessage_feedback goal_id(::xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ME439MoveToTarget_FeedbackMessage_feedback(msg_);
  }

private:
  ::xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarmrob_interfaces::action::ME439MoveToTarget_FeedbackMessage>()
{
  return xarmrob_interfaces::action::builder::Init_ME439MoveToTarget_FeedbackMessage_goal_id();
}

}  // namespace xarmrob_interfaces

#endif  // XARMROB_INTERFACES__ACTION__DETAIL__ME439_MOVE_TO_TARGET__BUILDER_HPP_