#pragma once

#include "Skill.h"
#include "Entity.h"
// ��ų, ����, ����, ����, 

class Charactor: public Entity
{
	
private: 

public:
	void UseSkill(Skill& skill);

	void UseHP();

};

