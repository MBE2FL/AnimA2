#pragma once
#include <math.h>

class vec3
{
public:
	vec3(float x = 0.0f, float y = 0.0f, float z = 0.0f);
	~vec3();
	void normalize();
	float getLength();

	vec3 operator+(const vec3& rhs) const;
	vec3 operator-(const vec3& rhs) const;
	vec3 operator*(const float scalar) const;
	friend vec3 operator*(const float scalar, const vec3& input);
	vec3 operator+=(const vec3& rhs);
	vec3 operator/(const float divisor) const;

	float _x, _y, _z;
};