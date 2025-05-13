#pragma once

#include "Common.h"

// �⺻ Ŭ���� - �Ļ� Ŭ����

// 1. ���� ������ ���̺� ����
// private : �ڽ��� Ŭ���������� ��� ����
// protected : �ڽ� Ŭ������ ��� ����
// public : ��� Ŭ�������� ��� ����

// 2. ������ : ��� ������ Ŭ���� ������ ���ÿ� �ʱ�ȭ �ϴ� ����
//	  �Ҹ��� : Ŭ������ �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�

// 3. �޸� ����, ���� �Ҵ� ������ ������ �Ǵ°�?
// ���α׷�, ��, ���� �Ⱓ ����, �÷��� �߿� ������ ���� �߻��Ѵ�. (ȭ���� �����Ÿ���, ���� ����) �޸� ����
// ���� �Ҵ� �ּ�, ����� ���� �� �޸� ����.
// �� -> (�ｺ, ����, ...) -> ���� �Ҵ� -> ���� -> �ٽ� �״�.
// �Ҹ��� , ����Ʈ ������


class Base
{
private:
	int count;
protected:

public:
	Base() : count(0) {}
	Base(int count) : count(count) 
	{
		cout << "������ ȣ��" << endl;
	}
	virtual ~Base()
	{
		cout << "Base Ŭ������ �Ҹ�Ǿ����ϴ�." << endl;
	}

	virtual void Do();
};

class Derived : public Base
{
public:
	void Do() override;

	~Derived() override
	{
		cout << "Derived Ŭ������ �Ҹ�Ǿ����ϴ�." << endl;
	}
};
