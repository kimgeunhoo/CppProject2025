#pragma once

#include <iostream> // input output stream
#include <fstream> // file stream
#include <sstream> // string stream

// ��Ʈ�� : �������� �帧
// �ڵ� - ���� 
// ��Ʈ�� ���̺귯�� ����, �Է°� ����� ȿ�������� �����Ѵ�.

// ������ ������ Ÿ���� �ϳ��� �̸����� �������� ���ؼ� ����

const int MAX_ITEMS = 100;

enum UpgradeType
{
	STR, DEX, INTEL, LUK, NONE
};

struct ItemDataType
{
	UpgradeType type;
	int			amount;

	ItemDataType() 
	{
		type = UpgradeType::NONE;
		amount = 0;
	}

	ItemDataType(int typeCount, int amount) : amount(amount)
	{
		if (typeCount == 0)
		{
			type = UpgradeType::STR;
		}
		else if (typeCount == 1)
		{
			type = UpgradeType::DEX;
		}
		else if (typeCount == 2)
		{
			type = UpgradeType::INTEL;
		}
		else if (typeCount == 3)
		{
			type = UpgradeType::LUK;
		}
		else {
			type = UpgradeType::NONE;
		}
	}
};

class Item
{
public:
	int index; 
	std::string name; 
	int price;
	int count;
	ItemDataType dataType;
		
public:
	Item() : index(0), name(""), price(0), count(0), dataType(ItemDataType()) {}
	Item(int idx, std::string nm, int prc, int ct, ItemDataType dataType) : 
		index(idx), name(nm), price(prc), count(ct), dataType(dataType) {}

};

class DataHandler
{
public:
	// filename �޸��� ����, items(�޸����� ������ ������ �Ű�ü)
	int LoadItems(const std::string& filename, Item items[]); // file�̸����� �޸��� ����


};

