#include "Item.h"

/*

*/


/*
	��ȯ��Ÿ�� ��ü �̸�::�Լ��̸�()	// ��ü�� ����ִ� �Լ��� �����ϴ� ���
*/

void Item::ShowItemInfo()
{
	cout << " ������ �̸� : " << name << " ������ Ÿ�� : " << ReturnByTypeName()
		<< " ���� : " << price << " ���� ���� : " << itemCount << endl;
}

string Item::ReturnByTypeName()
{
	switch (type)
	{
		case AROMR: return "AROMR";
		case WEAPON: return "WEAPON";
		case USEABLE: return "USEABLE";
		default: return "error";
	}
}
