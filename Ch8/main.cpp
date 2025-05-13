/*
	���. 
	1. ����� ������ �ϳ��� ���� ���
	2. ���� ����� �ؾߵǴ°�?	
*/

/*
	Unit�� �ൿ �ý��� ����.

	������ �����Ѵ�.
	Unit.Attack();
	1. ������ �����. �Ȱ��� ���� �ڵ带 �����ϰ� �ȴ�.
	2. virtual Ű���带 ����ϸ� ���� �ڵ尡 ����ȴ�.

*/

/*
	Unit �ڵ带 �̿��ؼ�
	Attack, Stop, Hold, ... �������.
	����� ���Ѽ� Ư���� ������ �ϵ��� �Ѵ�.
	���� Ÿ���� �ڵ������� �ٸ� ����� �����ų �� �ִ�.
*/

/*
	Monster.Attack();
	Slime. �п��Ѵ�
	Goblin. ��ȭ�� �߻�
*/

/*	
	
*/


#include "Common.h"
#include "Book.h"

#include "Monster.h"

int main() 
{
	Book book;
	SpellBook spBook;
	StoryBook stBook;
	QuestBook qBook;

	book.Read();
	spBook.Read();
	stBook.Read();
	qBook.Read();

	Probe probe1(true);
	probe1.ReturnAttacker()->Attack();

	Attacker tempAttacker;
	tempAttacker = *(probe1.ReturnAttacker());
	tempAttacker.Attack();

	Zealot zealot;
	Dragoon dragoon;

	cout << "���� ���� �ؽ�Ʈ ��� " << endl;


	probe1.Attack();
	zealot.Attack();
	dragoon.Attack();

	cout << "Unit���� ǥ���ϱ� " << endl;

	Unit& selectUnit = probe1; // ���� Ÿ������ �Ȱ��� ���·� ǥ���غ���
	Unit& selectUnit2 = zealot;
	Unit& selectUnit3 = dragoon;

	selectUnit.Attack();
	selectUnit2.Attack();
	selectUnit3.Attack();

	cout << "���� ��ų ǥ���ϱ� " << endl;

	selectUnit.UseSkill();
	selectUnit2.UseSkill();
	selectUnit3.UseSkill();
}


