/*
	목표: cpp 게임 화면 구성하기
	복습: Windows.h GotoXY 재구현
	입출력 : cpp 방식으로 입출력하기
	이론 : namespace 응용해보기
*/

/*
	이름 공간 사용 할 때의 장점
	1. 다른 두 프로젝트를 copy paste 합칠 때 발생하는 문제를 최소화 할 수 있다.
	2. 이름 공간에 쓰여진 이름을 통해서 코드를 분류 할 수 있다.

*/
#include <iostream>
#include <Windows.h> // 커서의 위치를 옮기는 함수 SetCursorPosition
#include <conio.h> // 입력 대기 함수 _getch()
#include <string> // 문자열의 기능을 포함하고 있는 라이브러리
#include <iomanip> // input output manipulate
#include "ConsoleUtils.h"


struct Item
{
	//char name[20]; std::string 이름의 크기를 자동 할당, 타 언어의 string 개념인 듯
	std::string name;
	int price;
};

// Item 구조체의 참조자를 받아와서 이름을 원하는 이름으로 변경하고 가격을 원하는 가격으로 설정하는 함수 만들기.

// const 사용, 참조자 사용, Item 구조체 사용

// SetItem(Item1, "Sword", 100)
void MySetItem(Item& Weapon) 
{
	Weapon.price = 50;
	Weapon.name = "short sword";
}

void SetItem(Item& item, const std::string name, int price)
{
	item.name = name; // 외부에서 가져온 item을 nName으로 설정한다.
	item.price = price;

}

void SetItem(Item& SetItem, const Item& copyItem)  // ShopItem 항목, 
{
	SetItem.name = copyItem.name;
	SetItem.price = copyItem.price;
}

// default 매개 인자 : 함수 호출시 매개변수를 부족하게 입력 시 자동으로 변수에 대입된다.
// ShowShop(Shop, 3, 10, 10);
//  shop, length << default가 아니기 때문에 앞부분에 작성해야 한다.
// 앞에 default 인자를 넣으면 오류 발생. 순서 신경쓸것
void ShowShop(Item shop[], int length, int x = 10, int y = 10)
{
	ConsoleUtils::GoToXY(x, y);
	// #include <iomapip> std::left, right
	// std::setw(정수); 문자열의 크기가 20공간을 만든다. 문자열의 빈공간은 공백문자로 출력한다.
	std::cout << std::left << std::setw(20) << "아이템 이름 " << "|"
		<< std::setw(10) << "아이템 가격" << std::endl;

	for (int i = 0; i < length; i++)
	{
		//std::cout << "이름 : " << ItemA.name << "가격 : " << ItemA.price << std::endl;
		//std::cout << "이름 : " << shop[i].name << ", 가격 : " << shop[i].price << std::endl;
		ConsoleUtils::GoToXY(x, y+1+i); // 표의 틀보다 1칸 아래에 있어야 하기에 1을 더해줌, i만큼 더해짐
		std::cout << std::left << std::setw(20) << shop[i].name << "|" << std::setw(10) << shop[i].price << "|" << std::endl;
		
	}
}

// Shop 배열, 선택한 인덱스, Item배열 인벤토리.
// copyItem
// 상점 (Item 배열)에 있는 데이터를 복사해서, 유저의 아이템 배열에 가져온다. 배열의 데이터를 변경한다.

Item& GetItem(Item shop[], int length, int index) 
{
	if (index >= length) 
	{
		std::cout << "등록되지 않은 아이템을 선택하였습니다. 0번째 아이템이 반환됩니다." << std::endl;
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
	std::cout << "아이템 예제" << std::endl;
	Item ItemA;
	Item ItemB;
	Item ItemC;

	SetItem(ItemA, "Apple", 100);
	SetItem(ItemB, "Banana", 500);
	SetItem(ItemC, "candy", 50);
	Item Shop[3] = { ItemA, ItemB, ItemC };
	ShowShop(Shop, 3, 0 ,0);
	//std::cout << "이름 : " << ItemB.name << "가격 : " << ItemB.price << std::endl;

	Item Inventory[3];
	std::cout << "구매하고 싶은 아이템 번호를 입력해 주세요." << std::endl;
	int input;
	std::cin >> input;

	AddInventory(Inventory, 3, 0, GetItem(Shop, 3, input - 1));

	// 상점으로부터 인벤토리에 아이템을 추가하는 것.
	// 몬스터 데이터가 여러개 있는데 현재 배틀 중에 등장할 몬스터를 선택한다.
	// 몬스터 데이터 불러오는 것
	// Stage 정보가 있는 특정 스테이지를 호출하고 싶다.
	// 몬스터, Stage, 데이터

	std::cout << "인벤토리의 아이템 확인 " << std::endl;
	std::cout << Inventory[0].name << ", " << Inventory[0].price << std::endl;
	_getch();

	

	// 예제 1. 10, 10좌표에 플레이어의 정보 텍스트를 출력해보세요.
	ConsoleUtils::GoToXY(10, 10);
	std::cout << "플레이어의 정보";
	system("cls");
	// 예제 2. 플레이어의 이름을 입력받아서 플레이어의 정보 텍스트 한줄 아래에 출력
	// 입력값을 정수로 받아서, 1을 받으면 플레이어 이름을 추가하기
	// 2를 받으면 화면에 플레이어 정보를 출력하기

	char name[10];
	Item longSword{"long Sword", 100 };
	//MySetItem(longSword);
	//std::cout << longSword.name << "의 가격 : " << longSword.price << std::endl;

	while (true) 
	{
		int inputNumber = 0;
		
		std::cout << "1_사용자의 이름을 변경할 수 있다. 2_플레이어의 정보를 화면에 출력한다. " << std::endl;
		std::cin >> inputNumber; // 언제 주소 연산자 사용하고 사용 안 하는데 이 부분이 이해가 안된다.
		if (inputNumber == 1)
		{
			std::cout << "이름을 입력해주세요.";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10, 10);
			std::cout << "플레이어의 정보";
			ConsoleUtils::GoToXY(10, 11);
			std::cout << "플레이어의 이름: " << name << std::endl;
			_getch();
		}
		else 
		{
			break;
		}

		int playerX = 0 , playerY = 0;
		int UIX = 35, UIY = 10;
		while (true) // 플레이어 이동 구현
		{
			system("cls");
			ConsoleUtils::InputPlayerKey(playerX, playerY);
			ConsoleUtils::GoToXY(UIX, UIY);
			std::cout << "플레이어의 좌표: " << "[" << playerX << "," << playerY << "]" << std::endl;
			ConsoleUtils::GoToXY(playerX, playerY);
			std::cout << "♥";
			Sleep(30);
			
		}
	}
}

