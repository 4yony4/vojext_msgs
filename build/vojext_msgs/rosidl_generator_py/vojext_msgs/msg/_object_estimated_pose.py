# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vojext_msgs:msg/ObjectEstimatedPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectEstimatedPose(type):
    """Metaclass of message 'ObjectEstimatedPose'."""

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
                'vojext_msgs.msg.ObjectEstimatedPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_estimated_pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_estimated_pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_estimated_pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_estimated_pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_estimated_pose

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectEstimatedPose(metaclass=Metaclass_ObjectEstimatedPose):
    """Message class 'ObjectEstimatedPose'."""

    __slots__ = [
        '_header',
        '_point_cloud',
        '_estimated_pose',
        '_id',
        '_sclass',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'point_cloud': 'sensor_msgs/PointCloud2',
        'estimated_pose': 'geometry_msgs/Pose',
        'id': 'int16',
        'sclass': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from sensor_msgs.msg import PointCloud2
        self.point_cloud = kwargs.get('point_cloud', PointCloud2())
        from geometry_msgs.msg import Pose
        self.estimated_pose = kwargs.get('estimated_pose', Pose())
        self.id = kwargs.get('id', int())
        self.sclass = kwargs.get('sclass', str())

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
        if self.point_cloud != other.point_cloud:
            return False
        if self.estimated_pose != other.estimated_pose:
            return False
        if self.id != other.id:
            return False
        if self.sclass != other.sclass:
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
    def point_cloud(self):
        """Message field 'point_cloud'."""
        return self._point_cloud

    @point_cloud.setter
    def point_cloud(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'point_cloud' field must be a sub message of type 'PointCloud2'"
        self._point_cloud = value

    @property
    def estimated_pose(self):
        """Message field 'estimated_pose'."""
        return self._estimated_pose

    @estimated_pose.setter
    def estimated_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'estimated_pose' field must be a sub message of type 'Pose'"
        self._estimated_pose = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'id' field must be an integer in [-32768, 32767]"
        self._id = value

    @property
    def sclass(self):
        """Message field 'sclass'."""
        return self._sclass

    @sclass.setter
    def sclass(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sclass' field must be of type 'str'"
        self._sclass = value
