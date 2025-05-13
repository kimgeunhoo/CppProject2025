#pragma once

// ��ü ���� ���α׷��� OOP(Object Oriented Programming)

#include <iostream>
#include <stdexcept>

using std::cout;
using std::endl;
using std::cin;
using std::string;

// ����1. ��ǥ�� ǥ���ϴ� ����ü Pos
// ��ǥ. �ܼ� ȭ�� â�� �簢���� �׸��� ��ü�� ��������

// ��ǥ : �簢��, ��, �ܼ�
// Ű����: ���� ���� ������

// struct. �⺻ ���谡 public, class�� private

class Point 
{
private:
	int x;
	int y;
public:
	Point() {}

	Point(int x, int y) : x(x), y(y) {}
};

// ���� ���� ������
// private public protected

// private : ��ü ���ο����� ���Ǵ� ���� ���
// public : ��ü �ܺο����� ����� �� �� �ִ� ���� ���

// class Ű����� �⺻��(default)���� private ����

// ���� ���� : �ܺο��� ������� ���ϰ� ���� ��
// �� �ܺο��� ����ϸ� �ȵǳ�?
// �����ϰ� ������ �ڵ忡���� �ܺη� ����ǵ��� �����.

class cPoint
{
private:
	int x;
	int y;
public: 
	// ������ �ڵ����� ������ִ� ���
	// ���� �����ڸ� �����ϸ� ����Ʈ �����ڰ� �ڵ����� ��������� �ʴ´�,

	cPoint() {}

	cPoint(int outX, int outY) 
	{
		if (outX < 0 || outY < 0) 
		{
			cout << "��ȿ���� ���� ������ �����Ǿ����ϴ�." << endl;
			// ���� ó��
			// ������ �Ǹ� �ڵ尡 ���߰� ���� ������ ����Ѵ�.
			throw std::invalid_argument("��ȿ���� ���� ������ �����Ǿ����ϴ�.");
		}

		x = outX;
		y = outY;
	}

	int GetX() const;
	int GetY() const;

	void SetX(int amount);
	void SetY(int amount);

};

class Rectangle 
{
private:
	cPoint leftUpPoint; // ���� �� x �۰� y ŭ
	cPoint rightDownPoint; // ������ �Ʒ� x ũ�� y ����
public:
	Rectangle() {}
	Rectangle(cPoint p1, cPoint p2) // p1, p2 ��ǥ�� lu, rd ������ �ƴ� ��쿡�� ������ �߻��� �� �ִ�.
	{
		if (p1.GetX() < p2.GetX() && p1.GetY() > p2.GetY()) {
			leftUpPoint = p1;
			rightDownPoint = p2;
		}
		else {
			leftUpPoint = p2;
			rightDownPoint = p1;
		}
		// p1 x��ǥ p2 x��ǥ ��
		// p1 y��ǥ p2 y��ǥ ��
		// p1, p2

	}
	Rectangle(int x1, int x2, int y1, int y2)
	{

		cPoint newLeftUp;
		cPoint newRightDown;

		if (x1 < x2) 
		{
			newLeftUp.SetX(x1);
			newRightDown.SetX(x2);
		}
		else if (x1 > x2) {
			newLeftUp.SetX(x2);
			newRightDown.SetX(x1);
		}
		else {
			cout << "x�� ��ǥ�� ���� �� �����ϴ�." << endl;
		}

		if (y1 < y2)
		{
			newLeftUp.SetY(y2);
			newRightDown.SetY(y1);
		}
		else if (y1 > y2) {
			newLeftUp.SetY(y1);
			newRightDown.SetY(y2);
		}
		else {
			cout << "y�� ��ǥ�� ���� �� �����ϴ�." << endl;
		}

		leftUpPoint = newLeftUp;
		rightDownPoint = newRightDown;
	}

	void Draw();
};


void Example1();
void Example2();
void Example3();