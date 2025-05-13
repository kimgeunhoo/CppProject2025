#include "Weapon.h"

void Weapon::ShowWeaponStatus()
{
	cout << "무기 스펙" << endl;
	cout << Weapon::name << "\t" 
		<< "공격 유형 : " << ShowATKType() << "\t" 
		<< "무기 공격력 : " << Weapon::weaponATK << "\t" 
		<< "강화 등급 : " << Weapon::inhance << "\t" 
		<< "무기 사이즈 : " << WeaponSize() << endl;;

}


string Weapon::ShowATKType()
{
	switch (ATT)
	{
	case 0:
		return "베기";
	case 1:
		return "관통";
	case 2:
		return "타격";
	case 3:
		return "무속성";
	}
}

string Weapon::WeaponSize()
{
	switch (size)
	{
	case 0:
		return "소형";
	case 1:
		return "중형";
	case 2:
		return "대형";
	case 3:
		return "특수형";
	}
}
