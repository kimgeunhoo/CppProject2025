#include "Weapon.h"

int Weapon::DoUpgrade()
{
    return lv * (baseATK + weight);
}

void Weapon::ShowInfo()
{
    cout << name << " 최종 공격력 : " << DoUpgrade() << endl;
}

void Weapon::Attack()
{
    cout << DoUpgrade();
}

void Weapon::Upgrade()
{
    DoUpgrade();
}

void Spear::Attack()
{
    cout << "창으로 찌릅니다. ";
    Weapon::Attack();
    cout << "의 데미지 " << endl;
}

void Spear::Upgrade()
{
    // 창마다 고유의 공격력만큼 추가로 공격력이 오른다.
    FinalATK = DoUpgrade() + specialAtk;

    cout << FinalATK << "창 업그레이드 방식으로 공격력이 상승했습니다." << endl;
}


void Sword::Attack()
{
    cout << "검으로 벱니다. ";
    Weapon::Attack();
    cout << "의 데미지 "<< endl;
}

void Sword::Upgrade()
{
    // 10의 공격력이 추가로 상승
    FinalATK = DoUpgrade() + 10;

    cout << FinalATK << "칼 업그레이드 방식으로 공격력이 상승했습니다." << endl;
}

void Arrow::Attack() 
{
    cout << "활으로 휘두릅니다. ";
    Weapon::Attack();
    cout << "의 데미지 " << endl;
}

void Arrow::Upgrade()
{
    FinalATK = DoUpgrade() + 10;
    cout << FinalATK << "활 업그레이드 방식으로 공격력이 상승했습니다." << endl;
}
