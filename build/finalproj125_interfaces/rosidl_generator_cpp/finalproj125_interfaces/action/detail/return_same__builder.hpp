// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from finalproj125_interfaces:action/ReturnSame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "finalproj125_interfaces/action/return_same.hpp"


#ifndef FINALPROJ125_INTERFACES__ACTION__DETAIL__RETURN_SAME__BUILDER_HPP_
#define FINALPROJ125_INTERFACES__ACTION__DETAIL__RETURN_SAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "finalproj125_interfaces/action/detail/return_same__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace finalproj125_interfaces
{

namespace action
{

namespace builder
{

class Init_ReturnSame_Goal_order
{
public:
  Init_ReturnSame_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::finalproj125_interfaces::action::ReturnSame_Goal order(::finalproj125_interfaces::action::ReturnSame_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalproj125_interfaces::action::ReturnSame_Goal>()
{
  return finalproj125_interfaces::action::builder::Init_ReturnSame_Goal_order();
}

}  // namespace finalproj125_interfaces


namespace finalproj125_interfaces
{

namespace action
{

namespace builder
{

class Init_ReturnSame_Result_action_result
{
public:
  Init_ReturnSame_Result_action_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::finalproj125_interfaces::action::ReturnSame_Result action_result(::finalproj125_interfaces::action::ReturnSame_Result::_action_result_type arg)
  {
    msg_.action_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalproj125_interfaces::action::ReturnSame_Result>()
{
  return finalproj125_interfaces::action::builder::Init_ReturnSame_Result_action_result();
}

}  // namespace finalproj125_interfaces


namespace finalproj125_interfaces
{

namespace action
{

namespace builder
{

class Init_ReturnSame_Feedback_feedback
{
public:
  Init_ReturnSame_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::finalproj125_interfaces::action::ReturnSame_Feedback feedback(::finalproj125_interfaces::action::ReturnSame_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalproj125_interfaces::action::ReturnSame_Feedback>()
{
  return finalproj125_interfaces::action::builder::Init_ReturnSame_Feedback_feedback();
}

}  // namespace finalproj125_interfaces


namespace finalproj125_interfaces
{

namespace action
{

namespace builder
{

class Init_ReturnSame_SendGoal_Request_goal
{
public:
  explicit Init_ReturnSame_SendGoal_Request_goal(::finalproj125_interfaces::action::ReturnSame_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::finalproj125_interfaces::action::ReturnSame_SendGoal_Request goal(::finalproj125_interfaces::action::ReturnSame_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_SendGoal_Request msg_;
};

class Init_ReturnSame_SendGoal_Request_goal_id
{
public:
  Init_ReturnSame_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReturnSame_SendGoal_Request_goal goal_id(::finalproj125_interfaces::action::ReturnSame_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ReturnSame_SendGoal_Request_goal(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalproj125_interfaces::action::ReturnSame_SendGoal_Request>()
{
  return finalproj125_interfaces::action::builder::Init_ReturnSame_SendGoal_Request_goal_id();
}

}  // namespace finalproj125_interfaces


namespace finalproj125_interfaces
{

namespace action
{

namespace builder
{

class Init_ReturnSame_SendGoal_Response_stamp
{
public:
  explicit Init_ReturnSame_SendGoal_Response_stamp(::finalproj125_interfaces::action::ReturnSame_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::finalproj125_interfaces::action::ReturnSame_SendGoal_Response stamp(::finalproj125_interfaces::action::ReturnSame_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_SendGoal_Response msg_;
};

class Init_ReturnSame_SendGoal_Response_accepted
{
public:
  Init_ReturnSame_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReturnSame_SendGoal_Response_stamp accepted(::finalproj125_interfaces::action::ReturnSame_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ReturnSame_SendGoal_Response_stamp(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalproj125_interfaces::action::ReturnSame_SendGoal_Response>()
{
  return finalproj125_interfaces::action::builder::Init_ReturnSame_SendGoal_Response_accepted();
}

}  // namespace finalproj125_interfaces


namespace finalproj125_interfaces
{

namespace action
{

namespace builder
{

class Init_ReturnSame_SendGoal_Event_response
{
public:
  explicit Init_ReturnSame_SendGoal_Event_response(::finalproj125_interfaces::action::ReturnSame_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::finalproj125_interfaces::action::ReturnSame_SendGoal_Event response(::finalproj125_interfaces::action::ReturnSame_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_SendGoal_Event msg_;
};

class Init_ReturnSame_SendGoal_Event_request
{
public:
  explicit Init_ReturnSame_SendGoal_Event_request(::finalproj125_interfaces::action::ReturnSame_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ReturnSame_SendGoal_Event_response request(::finalproj125_interfaces::action::ReturnSame_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ReturnSame_SendGoal_Event_response(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_SendGoal_Event msg_;
};

class Init_ReturnSame_SendGoal_Event_info
{
public:
  Init_ReturnSame_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReturnSame_SendGoal_Event_request info(::finalproj125_interfaces::action::ReturnSame_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ReturnSame_SendGoal_Event_request(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalproj125_interfaces::action::ReturnSame_SendGoal_Event>()
{
  return finalproj125_interfaces::action::builder::Init_ReturnSame_SendGoal_Event_info();
}

}  // namespace finalproj125_interfaces


namespace finalproj125_interfaces
{

namespace action
{

namespace builder
{

class Init_ReturnSame_GetResult_Request_goal_id
{
public:
  Init_ReturnSame_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::finalproj125_interfaces::action::ReturnSame_GetResult_Request goal_id(::finalproj125_interfaces::action::ReturnSame_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalproj125_interfaces::action::ReturnSame_GetResult_Request>()
{
  return finalproj125_interfaces::action::builder::Init_ReturnSame_GetResult_Request_goal_id();
}

}  // namespace finalproj125_interfaces


namespace finalproj125_interfaces
{

namespace action
{

namespace builder
{

class Init_ReturnSame_GetResult_Response_result
{
public:
  explicit Init_ReturnSame_GetResult_Response_result(::finalproj125_interfaces::action::ReturnSame_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::finalproj125_interfaces::action::ReturnSame_GetResult_Response result(::finalproj125_interfaces::action::ReturnSame_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_GetResult_Response msg_;
};

class Init_ReturnSame_GetResult_Response_status
{
public:
  Init_ReturnSame_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReturnSame_GetResult_Response_result status(::finalproj125_interfaces::action::ReturnSame_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ReturnSame_GetResult_Response_result(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalproj125_interfaces::action::ReturnSame_GetResult_Response>()
{
  return finalproj125_interfaces::action::builder::Init_ReturnSame_GetResult_Response_status();
}

}  // namespace finalproj125_interfaces


namespace finalproj125_interfaces
{

namespace action
{

namespace builder
{

class Init_ReturnSame_GetResult_Event_response
{
public:
  explicit Init_ReturnSame_GetResult_Event_response(::finalproj125_interfaces::action::ReturnSame_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::finalproj125_interfaces::action::ReturnSame_GetResult_Event response(::finalproj125_interfaces::action::ReturnSame_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_GetResult_Event msg_;
};

class Init_ReturnSame_GetResult_Event_request
{
public:
  explicit Init_ReturnSame_GetResult_Event_request(::finalproj125_interfaces::action::ReturnSame_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ReturnSame_GetResult_Event_response request(::finalproj125_interfaces::action::ReturnSame_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ReturnSame_GetResult_Event_response(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_GetResult_Event msg_;
};

class Init_ReturnSame_GetResult_Event_info
{
public:
  Init_ReturnSame_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReturnSame_GetResult_Event_request info(::finalproj125_interfaces::action::ReturnSame_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ReturnSame_GetResult_Event_request(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalproj125_interfaces::action::ReturnSame_GetResult_Event>()
{
  return finalproj125_interfaces::action::builder::Init_ReturnSame_GetResult_Event_info();
}

}  // namespace finalproj125_interfaces


namespace finalproj125_interfaces
{

namespace action
{

namespace builder
{

class Init_ReturnSame_FeedbackMessage_feedback
{
public:
  explicit Init_ReturnSame_FeedbackMessage_feedback(::finalproj125_interfaces::action::ReturnSame_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::finalproj125_interfaces::action::ReturnSame_FeedbackMessage feedback(::finalproj125_interfaces::action::ReturnSame_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_FeedbackMessage msg_;
};

class Init_ReturnSame_FeedbackMessage_goal_id
{
public:
  Init_ReturnSame_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReturnSame_FeedbackMessage_feedback goal_id(::finalproj125_interfaces::action::ReturnSame_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ReturnSame_FeedbackMessage_feedback(msg_);
  }

private:
  ::finalproj125_interfaces::action::ReturnSame_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::finalproj125_interfaces::action::ReturnSame_FeedbackMessage>()
{
  return finalproj125_interfaces::action::builder::Init_ReturnSame_FeedbackMessage_goal_id();
}

}  // namespace finalproj125_interfaces

#endif  // FINALPROJ125_INTERFACES__ACTION__DETAIL__RETURN_SAME__BUILDER_HPP_