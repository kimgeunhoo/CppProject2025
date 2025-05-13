#include "Shop.h"


bool Shop::LoadItems(const std::string& filename)
{
	count = loader.LoadItems("data.txt", items);

	return count > 0; // �������� �Ѱ��� �������� LoadItem "True" // "False"
}

void Shop::ShowItems()
{
	std::cout << "�Ǹ��ϴ� ������" << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << items[i].index << "\t" << items[i].name << "\t" << items[i].price << "coin " << items[i].count << "counts " << 
			"\tŸ��: " << items[i].dataType.type << 
			"\t��ġ: "<< items[i].dataType.amount << std::endl;
	}

}
