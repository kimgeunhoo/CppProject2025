#include "Weapon.h"

int Weapon::DoUpgrade()
{
    return lv * (baseATK + weight);
}

void Weapon::ShowInfo()
{
    cout << name << " ���� ���ݷ� : " << DoUpgrade() << endl;
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
    cout << "â���� ��ϴ�. ";
    Weapon::Attack();
    cout << "�� ������ " << endl;
}

void Spear::Upgrade()
{
    // â���� ������ ���ݷ¸�ŭ �߰��� ���ݷ��� ������.
    FinalATK = DoUpgrade() + specialAtk;

    cout << FinalATK << "â ���׷��̵� ������� ���ݷ��� ����߽��ϴ�." << endl;
}


void Sword::Attack()
{
    cout << "������ ���ϴ�. ";
    Weapon::Attack();
    cout << "�� ������ "<< endl;
}

void Sword::Upgrade()
{
    // 10�� ���ݷ��� �߰��� ���
    FinalATK = DoUpgrade() + 10;

    cout << FinalATK << "Į ���׷��̵� ������� ���ݷ��� ����߽��ϴ�." << endl;
}

void Arrow::Attack() 
{
    cout << "Ȱ���� �ֵθ��ϴ�. ";
    Weapon::Attack();
    cout << "�� ������ " << endl;
}

void Arrow::Upgrade()
{
    FinalATK = DoUpgrade() + 10;
    cout << FinalATK << "Ȱ ���׷��̵� ������� ���ݷ��� ����߽��ϴ�." << endl;
}
