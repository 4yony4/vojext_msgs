# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vojext_msgs:msg/SymbolicAction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SymbolicAction(type):
    """Metaclass of message 'SymbolicAction'."""

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
            module = import_type_support('vojext_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vojext_msgs.msg.SymbolicAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__symbolic_action
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__symbolic_action
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__symbolic_action
            cls._TYPE_SUPPORT = module.type_support_msg__msg__symbolic_action
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__symbolic_action

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from vojext_msgs.msg import GraspFacts
            if GraspFacts.__class__._TYPE_SUPPORT is None:
                GraspFacts.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SymbolicAction(metaclass=Metaclass_SymbolicAction):
    """Message class 'SymbolicAction'."""

    __slots__ = [
        '_header',
        '_action_type',
        '_target_id',
        '_grasp_facts',
        '_target_pose',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'action_type': 'string',
        'target_id': 'sequence<string>',
        'grasp_facts': 'sequence<vojext_msgs/GraspFacts>',
        'target_pose': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['vojext_msgs', 'msg'], 'GraspFacts')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.action_type = kwargs.get('action_type', str())
        self.target_id = kwargs.get('target_id', [])
        self.grasp_facts = kwargs.get('grasp_facts', [])
        self.target_pose = kwargs.get('target_pose', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.action_type != other.action_type:
            return False
        if self.target_id != other.target_id:
            return False
        if self.grasp_facts != other.grasp_facts:
            return False
        if self.target_pose != other.target_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def action_type(self):
        """Message field 'action_type'."""
        return self._action_type

    @action_type.setter
    def action_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'action_type' field must be of type 'str'"
        self._action_type = value

    @property
    def target_id(self):
        """Message field 'target_id'."""
        return self._target_id

    @target_id.setter
    def target_id(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'target_id' field must be a set or sequence and each value of type 'str'"
        self._target_id = value

    @property
    def grasp_facts(self):
        """Message field 'grasp_facts'."""
        return self._grasp_facts

    @grasp_facts.setter
    def grasp_facts(self, value):
        if __debug__:
            from vojext_msgs.msg import GraspFacts
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
                 all(isinstance(v, GraspFacts) for v in value) and
                 True), \
                "The 'grasp_facts' field must be a set or sequence and each value of type 'GraspFacts'"
        self._grasp_facts = value

    @property
    def target_pose(self):
        """Message field 'target_pose'."""
        return self._target_pose

    @target_pose.setter
    def target_pose(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'target_pose' field must be of type 'str'"
        self._target_pose = value
