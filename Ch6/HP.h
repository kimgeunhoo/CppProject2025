#pragma once

// ��ǥ : ���� ���� ������, ���� ����

// private, public
// struct - �⺻ Ÿ�� public
// class - �⺻ Ÿ�� private
#include <iostream>

using namespace std;

class HP
{
private:
	int HP;
	int MaxHP;
	bool isDeath;
public:
	void AttackedBy(int damage);
	void Recovery(int heal);
};