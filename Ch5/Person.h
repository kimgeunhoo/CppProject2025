#pragma once

#include "Common.h"

// �̸��� Person ����ü, ����, �̸�
/*
	C�� Cpp ������3. �޸� ���� �Ҵ�

	malloc(memory allocate) : malloc(ũ�� sizeof(char) * 10);
	free(���� �̸�);

	new		: Cpp �����Ҵ� �ϴ� Ű����	
	delete	: �޸𸮸� �����ϴ� Ű����


*/

/*
	������ : ��ü�� �����͸� ������ �� �ʱ�ȭ ���ִ� ���
	�Ҹ��� : ��ü�� �Ҹ��� �� �ڵ����� ȣ��Ǵ� ���
*/

/*
	age, name; age = 20; name = "�̸�"
	age = �ܺο��� ������ ���� �־��; age(age), name(name)
	�ּ� = �ּ�; ���� �� �ִ� ������
*/
enum Gender
{
	MAN,
	WOMAN
};

struct Person 
{
	int age;
	char* name;		   // ���̰� ���ΰ�? �޸𸮰� ������ �Ǿ� ���� �ʴ�.
	string sName;
	Gender gender;
	

	Person() {} // default ������

	// ���� ������ ���ڿ� �ʱ�ȭ ���
	Person(int age, const string& sName, Gender gender) : age(age), sName(sName), gender(gender) {}

	// ���� ����� ����̳�, �ӵ��� �� ������.
	//Person(int age)
	//{
	//	this->age = age;
	//}

	// string ��� x ���
	
	// ������ �����ε�
	Person(int age, const char* str, Gender gender) : age(age), gender(gender)
	{
		// �޸� ������ ���� ������ ��� �Ѵ�.
		name = new char[strlen(str) + 1]; // +1�� �� ����\0 �ǹ�
		// ���� ������ ������ �ܺο� �ִ� �����͸� �����ؼ� �Űܿ;� �Ѵ�.
		strcpy(name, str);
	}
	// �Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ȣ��ȴ�.
	~Person()
	{
		cout << "Person�� �Ҹ��ڰ� ȣ��Ǿ����ϴ�." << endl;
		delete[] name;
	}

	void Clone(const Person& other);

	void Show() const; // ��ü ���� �����͸� ���� ���� ����ϰڴ�. ����ڿ��� �˷��ش�.

	string ReturnByGender();
};
