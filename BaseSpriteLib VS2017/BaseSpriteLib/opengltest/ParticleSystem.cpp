#include "ParticleSystem.h"

ParticleSystem::ParticleSystem()
{
	_pointOfEmission = vec3();
}

ParticleSystem::ParticleSystem(const vec3 & pointOfEmission, int totalParticles, vector<Sprite*>& drawList)
{
	_pointOfEmission = pointOfEmission;
	_totalParticles = totalParticles;

	for (int i = 0; i < totalParticles; i++)
	{
		Sprite* sprite = new Sprite("images/particle.png");
		sprite->setNumberOfAnimations(1);
		sprite->setSpriteFrameSize(16, 16);
		sprite->addSpriteAnimFrame(0, 0, 0);
		sprite->setPosition(_pointOfEmission._x, _pointOfEmission._y);
		sprite->setCenter(8, 8); // center of the sprites origin for rotation
		sprite->setLayerID(3);

		Particle* particle = new Particle(_pointOfEmission, sprite);
		_particles.push_back(particle);
	}
}

ParticleSystem::~ParticleSystem()
{
	vector<Particle*>::iterator it;
	for (it = _particles.begin(); it != _particles.end(); it++)
	{
		delete (*it);
		*it = nullptr;
	}
}

void ParticleSystem::update(float deltaTime)
{
	draw();
}

void ParticleSystem::draw()
{
	vector<Particle*>::iterator it;
	for (it = _particles.begin(); it != _particles.end(); it++)
	{
		(*it)->draw();
	}
}

void ParticleSystem::resetSystem()
{
}
