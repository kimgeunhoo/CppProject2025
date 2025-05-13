#pragma once

#include "Common.h"

// 이름이 Person 구조체, 나이, 이름
/*
	C와 Cpp 차이점3. 메모리 동적 할당

	malloc(memory allocate) : malloc(크기 sizeof(char) * 10);
	free(변수 이름);

	new		: Cpp 동적할당 하는 키워드	
	delete	: 메모리를 해제하는 키워드


*/

/*
	생성자 : 객체가 데이터를 생성할 때 초기화 해주는 기능
	소멸자 : 객체가 소멸할 때 자동으로 호출되는 기능
*/

/*
	age, name; age = 20; name = "이름"
	age = 외부에서 가져온 숫자 넣어라; age(age), name(name)
	주소 = 주소; 생길 수 있는 문제점
*/
enum Gender
{
	MAN,
	WOMAN
};

struct Person 
{
	int age;
	char* name;		   // 길이가 얼마인가? 메모리가 배정이 되어 있지 않다.
	string sName;
	Gender gender;
	

	Person() {} // default 생성자

	// 가장 간단한 문자열 초기화 방식
	Person(int age, const string& sName, Gender gender) : age(age), sName(sName), gender(gender) {}

	// 위와 비슷한 기능이나, 속도가 더 느리다.
	//Person(int age)
	//{
	//	this->age = age;
	//}

	// string 사용 x 방식
	
	// 생성자 오버로딩
	Person(int age, const char* str, Gender gender) : age(age), gender(gender)
	{
		// 메모리 공간을 직접 생성해 줘야 한다.
		name = new char[strlen(str) + 1]; // +1은 맨 뒤의\0 의미
		// 새로 생성한 공간에 외부에 있는 데이터를 복사해서 옮겨와야 한다.
		strcpy(name, str);
	}
	// 소멸자 : 객체가 소멸될 때 자동으로 호출된다.
	~Person()
	{
		cout << "Person의 소멸자가 호출되었습니다." << endl;
		delete[] name;
	}

	void Clone(const Person& other);

	void Show() const; // 객체 안의 데이터를 변경 없이 사용하겠다. 사용자에게 알려준다.

	string ReturnByGender();
};
