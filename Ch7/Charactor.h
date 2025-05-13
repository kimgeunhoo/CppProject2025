#pragma once

#include "Skill.h"
#include "Entity.h"
// 스킬, 전투, 상점, 모험, 

class Charactor: public Entity
{
	
private: 

public:
	void UseSkill(Skill& skill);

	void UseHP();

};

