#pragma once
#ifndef __SPACE_SHIP__
#define __SPACE_SHIP__
#include "DisplayObject.h"
#include "TextureManager.h"
#include "Util.h"

class SpaceShip final : public DisplayObject
{
public:
	// constructor(s)
	SpaceShip();

	// destructor
	~SpaceShip();
	
	// life-cycle methods inherited from DisplayObject
	void draw() override;
	void update() override;
	void clean() override;
	void setOrientation(glm::vec2 orientation);

	// getters and setters
	void setDestination(glm::vec2 destination);
	void setMaxSpeed(float speed);
	void setRotation(float angle);
	float getRotaion();

private:
	glm::vec2 m_destination;
	glm::vec2 m_targetDirection;
	glm::vec2 m_orientation;
	float m_rotationAngle;
	float m_maxSpeed;

	void m_Move();
	
};

#endif /* defined (__SPACE_SHIP__) */