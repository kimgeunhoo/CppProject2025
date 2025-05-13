#pragma once

#include "DataHandler.h"

class Shop
{
private:
	DataHandler loader;
	Item items[MAX_ITEMS];
	int count;
public:
	Shop() : count(0)
	{
		LoadItems("data.txt");
	}


	bool LoadItems(const std::string& filename);

	void ShowItems();

	Item& GetItems(int index)
	{
		return items[index];
	}

};

