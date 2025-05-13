#pragma once

/*
	A ������ - B ������
	Player ����� ������ �صξ����ϴ�.
	B �����ڴ� Player�� �ִ� ���� �����͸� ����ؼ� Enemy�� ���� �ý����� ������ּ���.
	
	A �����ڴ� ����ؼ� �����غ��ڽ��ϴ�.
	OK 

	1. �̹� �����Ǿ� �ִ� �ڵ带 ����� ������� �����ϴ� �۾�
	2. ����� �ϰ� �ִ� ���� ��ü. ��ü�� ����� ���

*/
#include <iostream>
#include "Entity.h"

using namespace std;

enum BehaviorPattern {
	AGGRESSIVE, DEFENSIVE, COWARD
};

class Enemy : public Entity
{
private: 
	BehaviorPattern currentPattern;

	// ATK, HP, DEF ���� �ý����� �����Ѵ�.

private:
	void Attacked();
	void Defence();
	void Recovery();
	void BehaviorAI();

public:
	void Action();

};

