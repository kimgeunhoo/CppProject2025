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

	// ������ - ����ü�� �̸��� �����ؾ� �Ѵ� + ()
	// ��� �̴ϼȶ����� (member initialize)
	Item(string name, int price, int itemCount, ItemType type)
		: name(name), price(price), itemCount(itemCount), type(type)
	{}

	void ShowItemInfo();

	string ReturnByTypeName();

};
