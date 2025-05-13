#pragma once
#include <iostream>
#include "gameUtil.h"


enum ItemType {
	AROMR,
	WEAPON,
	USEABLE
};

struct Item
{
	string name;
	int			price;
	int			itemCount;
	ItemType	type;

	// 생성자 - 구조체의 이름과 동일해야 한다 + ()
	// 멤버 이니셜라이즈 (member initialize)
	Item(string name, int price, int itemCount, ItemType type)
		: name(name), price(price), itemCount(itemCount), type(type)
	{}

	void ShowItemInfo();

	string ReturnByTypeName();

};
