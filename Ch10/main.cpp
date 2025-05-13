/*
	��ǥ : Ŭ���� ���� ���踦 ����
	����� �̿��� ��ü�� �ý��� ����
*/

/*
	��ȭ �ý��� - ��Ӱ� �Բ� �����Ѵ�.
	// lv * (baseATK + weight) = �������ݷ�;
*/

#include "Common.h"
#include "Weapon.h"
#include "UpgradeSystem.h"

int main() 
{
	Weapon weapon("�ռҵ�", 1, 3, 5);
	weapon.ShowInfo();
	//weapon.Attack();

	Weapon weapon2("���ҵ�", 1, 4, 7);
	weapon2.ShowInfo();
	//weapon2.Attack();

	Spear â("â", 1, 3, 5, 2);
	Sword Į("Į", 1, 4, 7);
	Arrow Ȱ("Ȱ", 1, 2, 3);
	â.Attack();
	Į.Attack();

	// ������
	// ���� ����ε� �ٸ��� ǥ���� �� �ִ�.

	// ������
	// Ư�� Ÿ�� ������ ����Ų��.
	// Weapon* Spear �����Ѷ� � ����� ������?

	Weapon* wptr = &â;
	Weapon* wptr2 = &Į;
	wptr->Attack(); // virtual �����ÿ� Weapon::ATK �Լ��� ����
	wptr2->Attack();

	UpgradeSystem upgradeSystem;

	upgradeSystem.Upgrade(&â);
	upgradeSystem.Upgrade(&Į);
	upgradeSystem.Upgrade(&Ȱ);
}



