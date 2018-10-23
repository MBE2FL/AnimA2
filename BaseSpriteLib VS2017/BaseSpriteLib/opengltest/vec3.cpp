#include "vec3.h"

vec3::vec3(float x, float y, float z) : _x(x), _y(y), _z(z)
{
}

vec3::~vec3()
{
}

vec3 vec3::operator+(const vec3 & rhs) const
{
	vec3 result;
	result._x = _x + rhs._x;
	result._y = _y + rhs._y;
	result._z = _z + rhs._z;
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

vec3 operator*(const float scalar, const vec3 & input)
{
	vec3 result;
	result._x = input._x * scalar;
	result._y = input._y * scalar;
	result._z = input._z * scalar;
	return result;
}
