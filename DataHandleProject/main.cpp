/*
	��ǥ : �޸��忡 �ִ� ���� �����͸� �ڵ�� �д� ����� �����Ѵ�.

*/

#include "ShopManager.h"

int main() 
{
	Shop shop;

	shop.ShowItems();

	Player player;

	player.Upgrade(shop.GetItems(3));
	player.ShowPlayerInfo();


	// Item items[] = [������1, ������2, ������3]
	//DataHandler loader;

	//Item items[MAX_ITEMS];

	//int count = loader.LoadItems("data.txt", items);

	//// items ������ ������
	//std::cout << "�Ǹ��ϴ� ������" << std::endl;

	//for (int i = 0; i < count; i++)
	//{
	//	std::cout << items[i].index << "\t" << items[i].name << "\t" << items[i].price << "coin " << items[i].amount << "counts" << std::endl;
	//}

	// items �����͸� �о����


}