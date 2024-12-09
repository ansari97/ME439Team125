# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xarmrob_interfaces:srv/ME439XArmForwardKinematics.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'joint_angles'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ME439XArmForwardKinematics_Request(type):
    """Metaclass of message 'ME439XArmForwardKinematics_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xarmrob_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarmrob_interfaces.srv.ME439XArmForwardKinematics_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__me439_x_arm_forward_kinematics__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__me439_x_arm_forward_kinematics__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__me439_x_arm_forward_kinematics__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__me439_x_arm_forward_kinematics__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__me439_x_arm_forward_kinematics__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ME439XArmForwardKinematics_Request(metaclass=Metaclass_ME439XArmForwardKinematics_Request):
    """Message class 'ME439XArmForwardKinematics_Request'."""

    __slots__ = [
        '_joint_angles',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'joint_angles': 'sequence<float>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_angles = array.array('f', kwargs.get('joint_angles', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.joint_angles != other.joint_angles:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_angles(self):
        """Message field 'joint_angles'."""
        return self._joint_angles

    @joint_angles.setter
    def joint_angles(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'joint_angles' array.array() must have the type code of 'f'"
                self._joint_angles = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_angles' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_angles = array.array('f', value)


# Import statements for member types

# Member 'joint_angles'
# Member 'endpoint'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ME439XArmForwardKinematics_Response(type):
    """Metaclass of message 'ME439XArmForwardKinematics_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xarmrob_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarmrob_interfaces.srv.ME439XArmForwardKinematics_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__me439_x_arm_forward_kinematics__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__me439_x_arm_forward_kinematics__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__me439_x_arm_forward_kinematics__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__me439_x_arm_forward_kinematics__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__me439_x_arm_forward_kinematics__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODIFIED__DEFAULT': False,
        }

    @property
    def MODIFIED__DEFAULT(cls):
        """Return default value for message field 'modified'."""
        return False


class ME439XArmForwardKinematics_Response(metaclass=Metaclass_ME439XArmForwardKinematics_Response):
    """Message class 'ME439XArmForwardKinematics_Response'."""

    __slots__ = [
        '_joint_angles',
        '_endpoint',
        '_modified',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'joint_angles': 'sequence<float>',
        'endpoint': 'sequence<float>',
        'modified': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_angles = array.array('f', kwargs.get('joint_angles', []))
        self.endpoint = array.array('f', kwargs.get('endpoint', []))
        self.modified = kwargs.get(
            'modified', ME439XArmForwardKinematics_Response.MODIFIED__DEFAULT)

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.joint_angles != other.joint_angles:
            return False
        if self.endpoint != other.endpoint:
            return False
        if self.modified != other.modified:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_angles(self):
        """Message field 'joint_angles'."""
        return self._joint_angles

    @joint_angles.setter
    def joint_angles(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'joint_angles' array.array() must have the type code of 'f'"
                self._joint_angles = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint_angles' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_angles = array.array('f', value)

    @builtins.property
    def endpoint(self):
        """Message field 'endpoint'."""
        return self._endpoint

    @endpoint.setter
    def endpoint(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'endpoint' array.array() must have the type code of 'f'"
                self._endpoint = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'endpoint' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._endpoint = array.array('f', value)

    @builtins.property
    def modified(self):
        """Message field 'modified'."""
        return self._modified

    @modified.setter
    def modified(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'modified' field must be of type 'bool'"
        self._modified = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ME439XArmForwardKinematics_Event(type):
    """Metaclass of message 'ME439XArmForwardKinematics_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xarmrob_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarmrob_interfaces.srv.ME439XArmForwardKinematics_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__me439_x_arm_forward_kinematics__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__me439_x_arm_forward_kinematics__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__me439_x_arm_forward_kinematics__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__me439_x_arm_forward_kinematics__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__me439_x_arm_forward_kinematics__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ME439XArmForwardKinematics_Event(metaclass=Metaclass_ME439XArmForwardKinematics_Event):
    """Message class 'ME439XArmForwardKinematics_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<xarmrob_interfaces/ME439XArmForwardKinematics_Request, 1>',
        'response': 'sequence<xarmrob_interfaces/ME439XArmForwardKinematics_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['xarmrob_interfaces', 'srv'], 'ME439XArmForwardKinematics_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['xarmrob_interfaces', 'srv'], 'ME439XArmForwardKinematics_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from xarmrob_interfaces.srv import ME439XArmForwardKinematics_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, ME439XArmForwardKinematics_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'ME439XArmForwardKinematics_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from xarmrob_interfaces.srv import ME439XArmForwardKinematics_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, ME439XArmForwardKinematics_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'ME439XArmForwardKinematics_Response'"
        self._response = value


class Metaclass_ME439XArmForwardKinematics(type):
    """Metaclass of service 'ME439XArmForwardKinematics'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xarmrob_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarmrob_interfaces.srv.ME439XArmForwardKinematics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__me439_x_arm_forward_kinematics

            from xarmrob_interfaces.srv import _me439_x_arm_forward_kinematics
            if _me439_x_arm_forward_kinematics.Metaclass_ME439XArmForwardKinematics_Request._TYPE_SUPPORT is None:
                _me439_x_arm_forward_kinematics.Metaclass_ME439XArmForwardKinematics_Request.__import_type_support__()
            if _me439_x_arm_forward_kinematics.Metaclass_ME439XArmForwardKinematics_Response._TYPE_SUPPORT is None:
                _me439_x_arm_forward_kinematics.Metaclass_ME439XArmForwardKinematics_Response.__import_type_support__()
            if _me439_x_arm_forward_kinematics.Metaclass_ME439XArmForwardKinematics_Event._TYPE_SUPPORT is None:
                _me439_x_arm_forward_kinematics.Metaclass_ME439XArmForwardKinematics_Event.__import_type_support__()


class ME439XArmForwardKinematics(metaclass=Metaclass_ME439XArmForwardKinematics):
    from xarmrob_interfaces.srv._me439_x_arm_forward_kinematics import ME439XArmForwardKinematics_Request as Request
    from xarmrob_interfaces.srv._me439_x_arm_forward_kinematics import ME439XArmForwardKinematics_Response as Response
    from xarmrob_interfaces.srv._me439_x_arm_forward_kinematics import ME439XArmForwardKinematics_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
