#include "Weapon.h"

void Weapon::ShowWeaponStatus()
{
	cout << "���� ����" << endl;
	cout << Weapon::name << "\t" 
		<< "���� ���� : " << ShowATKType() << "\t" 
		<< "���� ���ݷ� : " << Weapon::weaponATK << "\t" 
		<< "��ȭ ��� : " << Weapon::inhance << "\t" 
		<< "���� ������ : " << WeaponSize() << endl;;

}


string Weapon::ShowATKType()
{
	switch (ATT)
	{
	case 0:
		return "����";
	case 1:
		return "����";
	case 2:
		return "Ÿ��";
	case 3:
		return "���Ӽ�";
	}
}

string Weapon::WeaponSize()
{
	switch (size)
	{
	case 0:
		return "����";
	case 1:
		return "����";
	case 2:
		return "����";
	case 3:
		return "Ư����";
	}
}
