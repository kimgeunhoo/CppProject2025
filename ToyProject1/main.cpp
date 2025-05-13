/*
	��ǥ: cpp ���� ȭ�� �����ϱ�
	����: Windows.h GotoXY �籸��
	����� : cpp ������� ������ϱ�
	�̷� : namespace �����غ���
*/

/*
	�̸� ���� ��� �� ���� ����
	1. �ٸ� �� ������Ʈ�� copy paste ��ĥ �� �߻��ϴ� ������ �ּ�ȭ �� �� �ִ�.
	2. �̸� ������ ������ �̸��� ���ؼ� �ڵ带 �з� �� �� �ִ�.

*/
#include <iostream>
#include <Windows.h> // Ŀ���� ��ġ�� �ű�� �Լ� SetCursorPosition
#include <conio.h> // �Է� ��� �Լ� _getch()
#include <string> // ���ڿ��� ����� �����ϰ� �ִ� ���̺귯��
#include <iomanip> // input output manipulate
#include "ConsoleUtils.h"


struct Item
{
	//char name[20]; std::string �̸��� ũ�⸦ �ڵ� �Ҵ�, Ÿ ����� string ������ ��
	std::string name;
	int price;
};

// Item ����ü�� �����ڸ� �޾ƿͼ� �̸��� ���ϴ� �̸����� �����ϰ� ������ ���ϴ� �������� �����ϴ� �Լ� �����.

// const ���, ������ ���, Item ����ü ���

// SetItem(Item1, "Sword", 100)
void MySetItem(Item& Weapon) 
{
	Weapon.price = 50;
	Weapon.name = "short sword";
}

void SetItem(Item& item, const std::string name, int price)
{
	item.name = name; // �ܺο��� ������ item�� nName���� �����Ѵ�.
	item.price = price;

}

void SetItem(Item& SetItem, const Item& copyItem)  // ShopItem �׸�, 
{
	SetItem.name = copyItem.name;
	SetItem.price = copyItem.price;
}

// default �Ű� ���� : �Լ� ȣ��� �Ű������� �����ϰ� �Է� �� �ڵ����� ������ ���Եȴ�.
// ShowShop(Shop, 3, 10, 10);
//  shop, length << default�� �ƴϱ� ������ �պκп� �ۼ��ؾ� �Ѵ�.
// �տ� default ���ڸ� ������ ���� �߻�. ���� �Ű澵��
void ShowShop(Item shop[], int length, int x = 10, int y = 10)
{
	ConsoleUtils::GoToXY(x, y);
	// #include <iomapip> std::left, right
	// std::setw(����); ���ڿ��� ũ�Ⱑ 20������ �����. ���ڿ��� ������� ���鹮�ڷ� ����Ѵ�.
	std::cout << std::left << std::setw(20) << "������ �̸� " << "|"
		<< std::setw(10) << "������ ����" << std::endl;

	for (int i = 0; i < length; i++)
	{
		//std::cout << "�̸� : " << ItemA.name << "���� : " << ItemA.price << std::endl;
		//std::cout << "�̸� : " << shop[i].name << ", ���� : " << shop[i].price << std::endl;
		ConsoleUtils::GoToXY(x, y+1+i); // ǥ�� Ʋ���� 1ĭ �Ʒ��� �־�� �ϱ⿡ 1�� ������, i��ŭ ������
		std::cout << std::left << std::setw(20) << shop[i].name << "|" << std::setw(10) << shop[i].price << "|" << std::endl;
		
	}
}

// Shop �迭, ������ �ε���, Item�迭 �κ��丮.
// copyItem
// ���� (Item �迭)�� �ִ� �����͸� �����ؼ�, ������ ������ �迭�� �����´�. �迭�� �����͸� �����Ѵ�.

Item& GetItem(Item shop[], int length, int index) 
{
	if (index >= length) 
	{
		std::cout << "��ϵ��� ���� �������� �����Ͽ����ϴ�. 0��° �������� ��ȯ�˴ϴ�." << std::endl;
		return shop[0];
	}
	return shop[index];
}

void AddInventory(Item inventory[], int length, int index, const Item& buyItem) 
{
	inventory[index].name = buyItem.name;
	inventory[index].price = buyItem.price;
}

int main() 
{
	std::cout << "������ ����" << std::endl;
	Item ItemA;
	Item ItemB;
	Item ItemC;

	SetItem(ItemA, "Apple", 100);
	SetItem(ItemB, "Banana", 500);
	SetItem(ItemC, "candy", 50);
	Item Shop[3] = { ItemA, ItemB, ItemC };
	ShowShop(Shop, 3, 0 ,0);
	//std::cout << "�̸� : " << ItemB.name << "���� : " << ItemB.price << std::endl;

	Item Inventory[3];
	std::cout << "�����ϰ� ���� ������ ��ȣ�� �Է��� �ּ���." << std::endl;
	int input;
	std::cin >> input;

	AddInventory(Inventory, 3, 0, GetItem(Shop, 3, input - 1));

	// �������κ��� �κ��丮�� �������� �߰��ϴ� ��.
	// ���� �����Ͱ� ������ �ִµ� ���� ��Ʋ �߿� ������ ���͸� �����Ѵ�.
	// ���� ������ �ҷ����� ��
	// Stage ������ �ִ� Ư�� ���������� ȣ���ϰ� �ʹ�.
	// ����, Stage, ������

	std::cout << "�κ��丮�� ������ Ȯ�� " << std::endl;
	std::cout << Inventory[0].name << ", " << Inventory[0].price << std::endl;
	_getch();

	

	// ���� 1. 10, 10��ǥ�� �÷��̾��� ���� �ؽ�Ʈ�� ����غ�����.
	ConsoleUtils::GoToXY(10, 10);
	std::cout << "�÷��̾��� ����";
	system("cls");
	// ���� 2. �÷��̾��� �̸��� �Է¹޾Ƽ� �÷��̾��� ���� �ؽ�Ʈ ���� �Ʒ��� ���
	// �Է°��� ������ �޾Ƽ�, 1�� ������ �÷��̾� �̸��� �߰��ϱ�
	// 2�� ������ ȭ�鿡 �÷��̾� ������ ����ϱ�

	char name[10];
	Item longSword{"long Sword", 100 };
	//MySetItem(longSword);
	//std::cout << longSword.name << "�� ���� : " << longSword.price << std::endl;

	while (true) 
	{
		int inputNumber = 0;
		
		std::cout << "1_������� �̸��� ������ �� �ִ�. 2_�÷��̾��� ������ ȭ�鿡 ����Ѵ�. " << std::endl;
		std::cin >> inputNumber; // ���� �ּ� ������ ����ϰ� ��� �� �ϴµ� �� �κ��� ���ذ� �ȵȴ�.
		if (inputNumber == 1)
		{
			std::cout << "�̸��� �Է����ּ���.";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10, 10);
			std::cout << "�÷��̾��� ����";
			ConsoleUtils::GoToXY(10, 11);
			std::cout << "�÷��̾��� �̸�: " << name << std::endl;
			_getch();
		}
		else 
		{
			break;
		}

		int playerX = 0 , playerY = 0;
		int UIX = 35, UIY = 10;
		while (true) // �÷��̾� �̵� ����
		{
			system("cls");
			ConsoleUtils::InputPlayerKey(playerX, playerY);
			ConsoleUtils::GoToXY(UIX, UIY);
			std::cout << "�÷��̾��� ��ǥ: " << "[" << playerX << "," << playerY << "]" << std::endl;
			ConsoleUtils::GoToXY(playerX, playerY);
			std::cout << "��";
			Sleep(30);
			
		}
	}
}

