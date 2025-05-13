/*
	1. namespace 사용 시 주의사항
	2. cpp 구조체의 변경 사항 (객체를 표현하는 문법 추가)
	3. class 키워드 (코딩시간 단축 및 간략화)
	4. 
*/

// std::cout, std::cin, std::endl
// 표준 라이브러리 std : standard

//using namespace std;	// 해당 소스파일 내부의 모든 코드를 
						// namespace std 안에 있는 것으로 판단해라
// std::cout

// 주의해야 할 사항.
// std안에 있던 이름과 같은 타입의 데이터를 생성하면 모호하다는 에러가 발생한다.

//권장하는 사용 방법
//using std::cout;
//using std::endl;
//using std::cin;
//using std::string;

#include "Item.h"
#include "gameUtil.h"
#include "Player.h"

void NameSpaceExample() 
{
	int number = 0;
	cin >> number;
	cout << "number의 값 : " << number << endl;
}

// 데이터를 선언
// 함수를 선언

// 구조체 안에 함수를 실행하게끔 한다

int main() 
{
	cout << "Ch4 : 객체지향 프로그래밍" << endl;
	//NameSpaceExample();

	Item item1 = {"Sword", 100, 4, WEAPON}; // 추가된 정보를 넣어줄 것

	// 타입 item1 이름 = { 이름, 가격, 수, 타입 }

	Item item2("Potion", 5, 65, USEABLE);

	item1.ShowItemInfo();
	item2.ShowItemInfo();


	Player player1 = { "GROM", WARRIOR, 50, 10000, 0, 0 };
	player1.ShowPlayerInfo();

	Player player2 = { "Mari", ARCHOR, 45, 9500 , 0 ,0};
	player2.ShowPlayerInfo();
}
