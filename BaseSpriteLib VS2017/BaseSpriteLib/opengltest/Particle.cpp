#include "Particle.h"

Particle::Particle()
{
}

Particle::Particle(const vec3 & pos, Sprite * sprite)
{
	_pos = pos;
	_sprite = sprite;
	_accScale = rand() % 200 + 50;
}

Particle::~Particle()
{
	delete _sprite;
	_sprite = nullptr;
}

void Particle::update(float deltaTime)
{
	vec3 dir = (_target - _pos);
	dir.normalize();

	vec3 acc = _accScale * dir;

	_vel = _vel + (acc * deltaTime);

	_pos = _pos + (_vel * deltaTime);
	_sprite->setPosition(_pos._x, _pos._y);

	_force = vec3();
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
	_vel = vec3();
}

void Particle::setTarget(const vec3 & target)
{
	_target = target;
}
