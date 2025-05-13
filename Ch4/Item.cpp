#include "Item.h"

/*

*/


/*
	반환형타입 객체 이름::함수이름()	// 객체에 들어있는 함수를 정의하는 방법
*/

void Item::ShowItemInfo()
{
	cout << " 아이템 이름 : " << name << " 아이템 타입 : " << ReturnByTypeName()
		<< " 가격 : " << price << " 소지 개수 : " << itemCount << endl;
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
