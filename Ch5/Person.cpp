#include "Person.h"

/*
	���� ���� : �������� ���� �״�� �ٸ� ������ �������� ��. ũ�Ⱑ ���� �� ���
	���� ���� : �ּҸ� ���� �Ҵ��ؼ� ���� �����ؼ� �����ϴ� ��. �� �޸� ���� �Ҵ�
*/

void Person::Clone(const Person& other)
{
	// ���� ���� -> ���� ���� ��������� �Ѵ�.
	age = other.age;
	name = new char[strlen(other.name) + 1]; // ���ο� �޸� ���� ����
	gender = other.gender;
	strcpy(name, other.name);
}

void Person::Show() const
{
	cout << "���� : " << age << endl;
	cout << "�̸� : " << name << endl;
	cout << "���� : " << gender << endl;
}

// const ������� ���� gender ǥ�� ���� ����
string Person::ReturnByGender()
{
	switch (gender)
	{
	case MAN: return "Man";
	case WOMAN: return "Woman";
	default: return "error";
	}
}
