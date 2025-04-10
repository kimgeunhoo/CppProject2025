/*
	작성일: 2025-04-10
	작성자: 김근호
	주제  : C와 C++의 공통점과 차이점
*/

// ## 공통점
// 1. 기본적인 문법은 일치한다.
// 2. 변수, 반복문(for, while), 제어문(if, switch)
// 3. 배열, 함수
// 4. 포인터, 구조체, 파일 입출력

// ## 차이점
// 1. 입출력을 사용하는 함수가 변경 ( 참조자 )
// 2. 구조체 선언 시 이름으로만 선언해도 된다.
// 3. 함수 기능 추가 (오버로딩, 디폴트 연산자)
// 4. 객체(클래스)가 존재, 객체지향 프로그래밍
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // c 형태의 입출력 방식을 구현해볼 것
#include <iostream> // C++ 형태의 입출력 라이브러리

int main() {
	// 출력 함수 선언 캐릭터 이름 입력, 출력 코드 C언어로 구현해보기
	// C언어의 입출력 스타일
	printf("c 입출력 코드\n");
	char charactor[20];
	printf("캐릭터 이름 입력: ");
	scanf("%s", charactor);
	printf("캐릭터 이름: %s\n", charactor);

	// C++의 입출력 스타일
	std::cout << "c++ 입출력 코드 " << std::endl;
	std::cout << "캐릭터 이름 입력: " << std::endl;
	std::cin >> charactor;
	std::cout << "캐릭터의 이름 : " << charactor << std::endl;

	// 처음 보는 문법 (cpp)
	// 1. 이름:: - namespace
	// 2. printf("%s", name) => cout << name 연산자 오버로딩
	// 3. 같은 기능을 수행한다. std::endl == \n


}