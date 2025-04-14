#include <iostream>

/*
	x,y의 정수형 좌표를 함수의 매개변수로 받아서 외부에서 값이 변경되도록 하는 
	void PlayerInput(int& x, int& y);
	반환값 없는 함수.
	이름이 PlayerInput(int& a, int &b) 호출할수 있다;
	타입 해석 : 정수형 데이터, 참조한 데이터를 수정할 수 있다.
*/

/*
	반환타입 함수이름(타입 이름, ...) {}

	1. 반환타입 - 참조자로 사용되는 경우, 아닌 경우
	2. 매개변수 - 참조자로 사용되는 경우, 아닌 경우
*/

/*
	함수 오버로딩(overloading)
	플레이어의 x,y 좌표를 입력받아서 좌표를 변경시키는 함수
	플레이어의 좌표 구조체를 입력받아서 좌표를 변경시키는 함수
	같은 이름 타입만 다르게 받으면 컴퓨터(컴파일러)가 구분할 수 있다.
*/

// c++ typedef 선언 없어도 struct 이름으로 타입과 구조체 동시 사용 가능
struct Pos {
	int x;
	int y;
};

/*
	함수 오버로딩.
	c++ 함수를 호출하는 방법을 알려준다. 이름(타입 이름 ),
	함수 오버로딩은 함수의 이름과 함수의 매개 변수의 타입의 갯수로 구분한다.

	주의점
	- 반환형이 달라도 같은 함수로 판단한다.	void PlayerInput(), int PlayerInput() 오버로드 할 수 없다.
	- 매개 변수의 이름이 달라도 타입의 갯수가 같으면 오버로드 할 수 없다.
	void PlayerInput(int x, int y);
	void PlayerInput(int a, int b);
	같다고 인식한다.
*/

/*
	참조자를 반환형에 사용하는 경우

*/

int& RetrunRef()	// int& num1 = ReturnRef(); 
					// num공간 숫자 20을 넣고 5를 더한다. num 별명을 num1로 한다.
					// num 지역 변수 함수가 종료되면 소멸한다.
					// 댕글링 레퍼런스, 
{
	int num = 20;
	num += 5;
	return num;
}

// 구조체 배열
// 아이템, 상점, 인벤토리
// 방해 요소 선인장, 선인장의 크기, 작거나 큰거
// 슬라임 3종류, 작은 슬라임, 중간 슬라임, 큰 슬라임
// 참조자를 이 개념에 대립해본다.

void PlayerInput() // 이름 PlayerInput, 매개변수 0개
{
	std::cout << "PlayerInput 함수 실행" << std::endl;
}

void PlayerInput(Pos& playerPos) // 이름 PalyerInput, 매개변수 1개 Pos
{
	playerPos.x += 1;
	playerPos.y += 1;
}

void PlayerInput(int& a, int& b) // 이름 PalyerInput, 매개변수 1개 int&, int&
{
	a += 1;
	b += 1;
}

int main() {
	std::cout << "Ch3 구조체와 참조자" << std::endl;

	int playerX = 0, playerY = 0;
	PlayerInput(playerX, playerY);
	std::cout << "PlayerInput 출력 결과" << std::endl;
	std::cout << "X값: " << playerX 
		<< ", " << "y의 값:" << playerY << std::endl;

	Pos playerPos = { playerX, playerY };
	PlayerInput(playerPos);
	std::cout << "PlayerInput 출력 결과" << std::endl;
	std::cout << "X값: " << playerPos.x
		<< ", " << "y의 값:" << playerPos.y << std::endl;

	

}