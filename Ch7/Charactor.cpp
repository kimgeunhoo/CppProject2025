#include "Charactor.h"

void Charactor::UseSkill(Skill& skill)
{
	skill.Use();
}

void Charactor::UseHP()
{
	// HP -= 10;
	HP -= 10;
}
