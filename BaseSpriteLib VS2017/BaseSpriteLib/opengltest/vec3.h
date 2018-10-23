#pragma once

class vec3
{
public:
	vec3(float x = 0.0f, float y = 0.0f, float z = 0.0f);
	~vec3();

	vec3 operator+(const vec3& rhs) const;
	vec3 operator*(const float scalar) const;
	friend vec3 operator*(const float scalar, const vec3& input);

private:
	float _x, _y, _z;
};