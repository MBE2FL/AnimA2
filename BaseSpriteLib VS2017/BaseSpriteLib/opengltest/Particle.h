#pragma once

#include "vec3.h"
#include "Sprite.h"

class Particle
{
public:
	Particle();
	~Particle();
	void update(float deltaTime);
	void applyForce(const vec3& force);
	void draw();
	void reset();

private:
	vec3 _pos;
	vec3 _vel;
	float accScale;
	vec3 _force;
	vec3 _size;
	float _mass;
	bool _isAlive;
	float _lifeTime;
	Sprite* _sprite;
	vec3 _target;
};