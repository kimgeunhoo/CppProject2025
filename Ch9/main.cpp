/*
	ĸ��ȭ 
	��� - ����� �ڵ带 �ϳ��� ���� �� �ִ�.
	����� ���� �ؾ� �ϴ°�? "Is-A" == ��� O "Has-A" ��� x �ٸ��������

	����� ����ϸ� � ������ �ִ°�?
	
*/

/*
	���� ������ ������ ����

	std::cout << "���� �ó��� n�� �̻� ���̸�" �ڵ尡 ����ȴ�. ���� ���� 50% ���� ��;
	���ӽó���			-
	����: �ó��� (����) -

*/

#include "Monster.h"
#include "MonsterHandler.h"

int main()
{
	MonsterHandler monsterHandler;

	Monster slime2(1,5);
	Slime slime(1, 5);
	Orc orc(2, 10);

	monsterHandler.BattleWithPlayer(slime2);
	monsterHandler.BattleWithPlayer(slime);
	monsterHandler.BattleWithPlayer(orc);



	// ������ ���̽�
	// �����͸� ���� �����.
	// �����͸� �����Ѵ�. �迭�� �����Ѵ�.
	// �����͸� �˻��ϰ� ����Ѵ�.

	// Ž�� �˰���. 
}