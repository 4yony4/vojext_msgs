# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vojext_msgs:msg/EnvironmentNode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnvironmentNode(type):
    """Metaclass of message 'EnvironmentNode'."""

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
                'vojext_msgs.msg.EnvironmentNode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__environment_node
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__environment_node
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__environment_node
            cls._TYPE_SUPPORT = module.type_support_msg__msg__environment_node
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__environment_node

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud
            if PointCloud.__class__._TYPE_SUPPORT is None:
                PointCloud.__class__.__import_type_support__()

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


class EnvironmentNode(metaclass=Metaclass_EnvironmentNode):
    """Message class 'EnvironmentNode'."""

    __slots__ = [
        '_header',
        '_image_rgb',
        '_image_3d',
        '_class_name',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'image_rgb': 'sensor_msgs/Image',
        'image_3d': 'sensor_msgs/PointCloud',
        'class_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from sensor_msgs.msg import Image
        self.image_rgb = kwargs.get('image_rgb', Image())
        from sensor_msgs.msg import PointCloud
        self.image_3d = kwargs.get('image_3d', PointCloud())
        self.class_name = kwargs.get('class_name', str())

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
        if self.image_rgb != other.image_rgb:
            return False
        if self.image_3d != other.image_3d:
            return False
        if self.class_name != other.class_name:
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
    def image_rgb(self):
        """Message field 'image_rgb'."""
        return self._image_rgb

    @image_rgb.setter
    def image_rgb(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image_rgb' field must be a sub message of type 'Image'"
        self._image_rgb = value

    @property
    def image_3d(self):
        """Message field 'image_3d'."""
        return self._image_3d

    @image_3d.setter
    def image_3d(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud
            assert \
                isinstance(value, PointCloud), \
                "The 'image_3d' field must be a sub message of type 'PointCloud'"
        self._image_3d = value

    @property
    def class_name(self):
        """Message field 'class_name'."""
        return self._class_name

    @class_name.setter
    def class_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'class_name' field must be of type 'str'"
        self._class_name = value
