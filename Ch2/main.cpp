/*
	작성일 : 2025-04-11
	작성자 : 김근호
	주제   : 참조자
	C,cpp의 차이점2. 참조자
*/

/*
	목표: 플레이어의 이동을 참조자를 사용하여 함수화 해보기
*/

#include <iostream>

/*
	참조자 이해를 위한 함수 구현 Swap 함수 구현
*/
void SwapByValue(int num1, int num2) 
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
} // SwapByValue main호출했을 때 num1, num2 전달한 변수가 실제로 변경되지는 않는다.

void SwapByRef(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
} // num1, num2의 전달된 변수가 실제로 변경되는 함수.

// 함수 오버로딩, 함수 이름이 같아도 매개변수 타입이 다르면 구분이 가능하다.
void SwapByRef(int& num1, int& num2)  // &num1 = 변수의 주소를 반환한다.
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

// 문제1. SwapPointer 함수를 만든다. 주소를 참조자로 변경하는 함수를 만든다.
// int type

// 변수만 참조자가 가능한게 아니고, 주소, 배열, 원소도 참조자로 만들 수 있다.
// int arr1[3] = {1,2,3}
// int& arrRef1 = arr[0] // arrRef1은 arr[0]의 별칭

// int num1 = 10;
// int* numptr = &num1;
// int* &num1Ref = num1ptr; num1Ref는 num1ptr의 별칭

void SwapPointer(int*& num1ptr,int*& num2ptr) 
{
	int* temp = num1ptr;
	num1ptr = num2ptr;
	num2ptr = temp;
}

int main() 
{
	// namespace std로 정의되어있는 공간 안에 cout 가져와서 사용하기
	std::cout << "2강" << std::endl;

	// 참조자 선언과 사용이 구분된다.
	// 함수도 선언과 사용이 구분된다.
	
	int num1;
	num1 = 1;

	int* num1ptr = &num1; // num1ptr 포인터변수에 num1의 주소 저장

	int& num1ref = num1; // num1 변수를 참조하는 num1ref, num1ref는 num1의 참조자(별칭),num1의 별칭은 num1ref이다

	int num2 = num1;
	num1 += 1;
	num1ref +=  1;
	std::cout << "num1의 값 : " << num1 << std::endl; // 변수 출력 Cpp 방식으로 작성
	std::cout << "num2의 값 : " << num2 << std::endl;
	std::cout << "num1의 값을 num1ref 참조자로 호출 : " << num1ref << std::endl; // 참조자는 원본 변수의 값을 가진다.(가변), 참조자 값이 변하면 원본 변수값도 바뀐다.
	int& num2ref = num2;
	// A. 개
	// A가 사과를 먹는다.
	// 개가 사과를 먹는다.
	// 위 두 문장의 결과는 같다. 이름만 다를 뿐이다.

	// 그래서 참조자를 어디서 사용하나?

	int input = 0;
	// scanf("%d", input);
	// 참조자의 장점 : c++ 참조자를 사용해서 함수를 사용할 때 *,& 기호를 사용하지 않고 표현할 수 있다.
	// std::cin >> input;
	std::cout << "Call By Value와 Call By Reference 출력 : " << std::endl;

	int value1 = 10, value2 = 20; // value1, value2 변경되서 출력하게 만들기, 함수 이용
	std::cout << "Call By Value 결과 " << std::endl;
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;
	SwapByValue(value1, value2);
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;

	std::cout << "Call By Reference 결과 : " << std::endl;
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;
	SwapByRef(&value1, &value2); // 주소를 전달해 주어야 한다.
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;

	std::cout << "Call By Reference : 매개주소 전달 사용 결과 " << std::endl;
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;
	SwapByRef(value1, value2); //
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;


	std::cout << "참조자의 응용" << std::endl;

	int ssnum1 = 1;
	int ssnum2 = 100;
	int* ssnum1ptr = &ssnum1;
	int* ssnum2ptr = &ssnum2;
	std::cout << "ssnum 참조자 응용 전" << std::endl;
	std::cout << "ssnum1ptr : " << ssnum1ptr << " ssnum2ptr : " << ssnum2ptr << std::endl;
	SwapPointer(ssnum1ptr, ssnum2ptr);
	std::cout << "ssnum1ptr로부터 값 출력, ";
	std::cout << "ssnum2ptr로부터 값 출력" << std::endl;
	std::cout << "ssnum1ptr : " << ssnum1ptr << " ssnum2ptr : " << ssnum2ptr << std::endl;

	// 참조자를 사용하면 포인터에 사용된 기호를 1개줄여서 표현 할 수 있다.
	// int, int끼리의 값을 바꿀 땐 참조자를 사용한다.
	// int*, int* 끼리 바꿀 때는 int*& int*&

	// 참조자 사용 시 주의해야 할 사항

	// int& AAA; 에러1: 참조자는 선언 시 반드시 초기화가 필요한다.
	int AAA = 0;
	int& AAAref = AAA; // 에러1 해결 결과

	// const 활용하여서 함수를 사용하는 사람에게 가이드를 안내해줄 것
	// void Func(const int* num1); num1참조하는 값을 변경하지 말라
	// voud Func(const int& num1); num1참조 값을 변경하지 말라
	
	// return 타입에 참조자를 선언할 때 주의해야 한다.

	//		함수의 값 리턴 (int func())		함수에서 참조자 리턴(int& func())
	// main 함수에서의 선언		|	함수의 값 리턴(int func())	|	함수에서 참조자 리턴(int& func())
	// int a = func();			|	a에 값이 복사됨				|	a에 같이 복사됨. func안에서 지역 변수를 return 하지 않아야 함
	// int& a = func();			| a는 func리턴값을 별명으로 한다|	func 안에서 지역 변수를 return 하지 않아야 한다.
	//							  a 별명에 10을 별명으로 한다.
	//							  a = 9; 10을 9로 해라
	//							  컴파일 에러가 발생한다.
	// const int& a = func();	| a 별명을 10의 별명으로 해라	|	func 안에서 지역 변수를 return 하지 않아야 한다.
	//							  10의 별멍을 a라고 한다.
	//							  const int& a = 10; 가능하다
	//							  별칭 선언 시 함수를 호출한다면
	//							  별칭은 const를 사용해야 함


}