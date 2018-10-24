#pragma once

#include <vector>

#include "Particle.h"

using std::vector;

class ParticleSystem
{
public:
	ParticleSystem();
	ParticleSystem(const vec3& pointOfEmission, int totalParticles, vector<Sprite*>& drawList);
	~ParticleSystem();
	void update(float deltaTime);
	void draw();
	void resetSystem();


private:
	vector<Particle*> _particles;
	vec3 _pointOfEmission;
	int _totalParticles;
	int _currNumOfParticles;
};