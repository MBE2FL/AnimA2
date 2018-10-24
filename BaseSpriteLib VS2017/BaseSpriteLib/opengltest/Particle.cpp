#include "Particle.h"

Particle::Particle()
{
}

Particle::~Particle()
{
}

void Particle::update(float deltaTime)
{
	vec3 dir = (_target - _pos);
	dir.normalize();

	vec3 acc = accScale * dir;

	_vel = _vel + (acc * deltaTime);

	_pos = _pos + (_vel * deltaTime);
}

void Particle::applyForce(const vec3 & force)
{
	_force += force;
}

void Particle::draw()
{
	_sprite->draw();
}

void Particle::reset()
{
}
