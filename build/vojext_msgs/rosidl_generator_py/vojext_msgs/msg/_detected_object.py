# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vojext_msgs:msg/DetectedObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectedObject(type):
    """Metaclass of message 'DetectedObject'."""

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
                'vojext_msgs.msg.DetectedObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detected_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detected_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detected_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detected_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detected_object

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from vojext_msgs.msg import BoundingBox
            if BoundingBox.__class__._TYPE_SUPPORT is None:
                BoundingBox.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectedObject(metaclass=Metaclass_DetectedObject):
    """Message class 'DetectedObject'."""

    __slots__ = [
        '_header',
        '_bounding_box',
        '_segmentation_mask',
        '_probability',
        '_detected_id',
        '_tracked_id',
        '_class_id',
        '_class_name',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'bounding_box': 'vojext_msgs/BoundingBox',
        'segmentation_mask': 'sensor_msgs/Image',
        'probability': 'double',
        'detected_id': 'int16',
        'tracked_id': 'int16',
        'class_id': 'int16',
        'class_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['vojext_msgs', 'msg'], 'BoundingBox'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from vojext_msgs.msg import BoundingBox
        self.bounding_box = kwargs.get('bounding_box', BoundingBox())
        from sensor_msgs.msg import Image
        self.segmentation_mask = kwargs.get('segmentation_mask', Image())
        self.probability = kwargs.get('probability', float())
        self.detected_id = kwargs.get('detected_id', int())
        self.tracked_id = kwargs.get('tracked_id', int())
        self.class_id = kwargs.get('class_id', int())
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
        if self.bounding_box != other.bounding_box:
            return False
        if self.segmentation_mask != other.segmentation_mask:
            return False
        if self.probability != other.probability:
            return False
        if self.detected_id != other.detected_id:
            return False
        if self.tracked_id != other.tracked_id:
            return False
        if self.class_id != other.class_id:
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
    def bounding_box(self):
        """Message field 'bounding_box'."""
        return self._bounding_box

    @bounding_box.setter
    def bounding_box(self, value):
        if __debug__:
            from vojext_msgs.msg import BoundingBox
            assert \
                isinstance(value, BoundingBox), \
                "The 'bounding_box' field must be a sub message of type 'BoundingBox'"
        self._bounding_box = value

    @property
    def segmentation_mask(self):
        """Message field 'segmentation_mask'."""
        return self._segmentation_mask

    @segmentation_mask.setter
    def segmentation_mask(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'segmentation_mask' field must be a sub message of type 'Image'"
        self._segmentation_mask = value

    @property
    def probability(self):
        """Message field 'probability'."""
        return self._probability

    @probability.setter
    def probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'probability' field must be of type 'float'"
        self._probability = value

    @property
    def detected_id(self):
        """Message field 'detected_id'."""
        return self._detected_id

    @detected_id.setter
    def detected_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'detected_id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'detected_id' field must be an integer in [-32768, 32767]"
        self._detected_id = value

    @property
    def tracked_id(self):
        """Message field 'tracked_id'."""
        return self._tracked_id

    @tracked_id.setter
    def tracked_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tracked_id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'tracked_id' field must be an integer in [-32768, 32767]"
        self._tracked_id = value

    @property
    def class_id(self):
        """Message field 'class_id'."""
        return self._class_id

    @class_id.setter
    def class_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'class_id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'class_id' field must be an integer in [-32768, 32767]"
        self._class_id = value

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
