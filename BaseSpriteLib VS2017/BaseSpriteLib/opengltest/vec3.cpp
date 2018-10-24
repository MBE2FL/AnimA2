#include "vec3.h"

vec3::vec3(float x, float y, float z) : _x(x), _y(y), _z(z)
{
}

vec3::~vec3()
{
}

void vec3::normalize()
{
	float length = getLength();

	if (length == 0.0f)
	{
		_x = 0.0f;
		_y = 0.0f;
		_z = 0.0f;
	}
	else
	{
		_x = _x / length;
		_y = _y / length;
		_z = _z / length;
	}
}

float vec3::getLength()
{
	return (sqrtf((_x * _x) + (_y * _y ) + (_z * _z)));
}

vec3 vec3::operator+(const vec3 & rhs) const
{
	vec3 result;
	result._x = _x + rhs._x;
	result._y = _y + rhs._y;
	result._z = _z + rhs._z;
	return result;
}

vec3 vec3::operator-(const vec3 & rhs) const
{
	vec3 result;
	result._x = _x - rhs._x;
	result._y = _y - rhs._y;
	result._z = _z - rhs._z;
	return result;
}

vec3 vec3::operator*(const float scalar) const
{
	vec3 result;
	result._x = _x * scalar;
	result._y = _y * scalar;
	result._z = _z * scalar;
	return result;
}

vec3 vec3::operator+=(const vec3 & rhs)
{
	vec3 result;
	result = result + rhs;
	return result;
}

vec3 vec3::operator/(const float divisor) const
{
	vec3 result;
	result._x = _x / divisor;
	result._y = _y / divisor;
	result._z = _z / divisor;
	return result;
}

vec3 operator*(const float scalar, const vec3 & input)
{
	vec3 result;
	result._x = input._x * scalar;
	result._y = input._y * scalar;
	result._z = input._z * scalar;
	return result;
}
