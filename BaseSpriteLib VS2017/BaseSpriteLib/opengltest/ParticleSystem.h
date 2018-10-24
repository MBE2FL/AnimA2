#pragma once

#include <vector>

#include "Particle.h"

using std::vector;

class ParticleSystem
{
public:
	ParticleSystem();
	~ParticleSystem();
	void update(float deltaTime);


private:
	vector<Particle*> particles;
};