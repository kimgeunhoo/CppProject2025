#include "MonsterHandler.h"

void MonsterHandler::BattleWithPlayer(Monster& monster)
{
	// ���͵��� ������, ��ũ?


	//if(monster == ������)

	if (dynamic_cast<Slime*>(&monster))
	{
		cout << "�������� ������ ����˴ϴ�." << endl;
	}

	//if(monster == ��ũ)

	if (dynamic_cast<Orc*>(&monster))
	{
		cout << "��ũ�� ������ ����˴ϴ�." << endl;
	}

	// �÷��̾��� ���� �����Ѵ�.
	// �÷��̾�� ������ �Ѵ�.
	monster.Attack();

}
