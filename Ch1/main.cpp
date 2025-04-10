#include <iostream> // 입출력 함수를 C++부터는 이걸로 사용

/*
	cpp 추가된 문법을 이해한다.
	1. std::cout 분석
	2. 코드에서 "std::" 지워보기 
	3. 결과: 식별자 cout이 정의되어 있지 않습니다. 
	Q1. iostream 추가했는데 왜 "cout"을 찾을수 없나?
	A1. "cout"은 특별한 공간에 존재하기 때문에 찾을 수 없다.
	Q2. 그 특별한 공간은 어떻게 사용하나?
	A2. namespace에 대한 이해가 필요하다.
*/

// A회사 ACOM, B회사 BCOM
// ACOM에서 만든 goods, BCOM에서 만든 goods
// 문제점 : 특정 키워드의 이름이 같으면 컴퓨터가 둘을 구별하여 판별할 수 없다. = 에러 발생
// 변수의 이름 앞에 이름공간을 추가 해준다.
// ACOM - goods
// BCOM - goods 구별 가능해진다

namespace ACOM 
{
	char goods[10];
	int sum;
}

namespace BCOM
{
	char goods[10];
	int sum;
}


int main() 
{
	std::cout << "Ch1" << std::endl;
	std::cout << "이름 공간에 대한 이해" << std::endl;

	std::cin >> ACOM::goods;
	std::cout << "A회사의 상품 이름 : " << ACOM::goods << std::endl;
	std::cin >> BCOM::goods;
	std::cout << "B회사의 상품 이름 : " << BCOM::goods << std::endl;

	// 문제1. 숫자를 5개 입력을 받아서 A회사의 합계 저장 한 다음, 숫자를 5개 입력을 받아서 B회사의 합계에도 저장하시오
	// A회사 B회사 랍계 변수 이름은 int sum 동일하게 작성하기

	// 1. std::cin int 값 입력받기
	// 2. for 반복문 5회 출력하기
	// 3. 이름 공간의 sum 변수에 저장하고 출력하기
	int number = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "_A 상품 계수 입력" << std::endl; // \n 써도 되긴함. 추가 설명이 필요하고 엔터가 필요할떄 사용
		std::cin >> number;
		ACOM::sum += number;
	}
	std::cout << "A회사의 상품 합계: " << ACOM::sum << std::endl;

	number = 0;
	for (int i = 0; i < 5; i++) {
		std::cout << i + 1<< "_B 상품 계수 입력" << std::endl;
		std::cin >> number;
		BCOM::sum += number;
	}
	std::cout << "B회사의 상품 합계 : " << BCOM::sum << std::endl;

	// ToyProject 프로젝트. c++ 추가된 문법을 게임에 적용하는 시간
	// 겜프1, 2 개인 프로젝트를 c++로 이식해보기 시도.
	// namespace를 게임에 적용해보는 것
	// c버전 프로젝트 -> c++ 버번 프로젝트로 변경
	// readme 오늘 날짜 Change log


}