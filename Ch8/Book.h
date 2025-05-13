#pragma once
#include "Common.h"

// å.
// Spell book, Story Book, Quest Book 

// ��� å���� �ؾ� �ϴ� ���?
// ���� �� �ִ°�?, �д´�.

/*
	����� 3���� ���
	public, private, protected ���

	1. public ����� �ϸ� �ȴ�.
	2. protected, private 
	3. private? public? protected? ���� ����
*/

class BookMark
{
	int page;

public:
	void ShowPage();
};
// ���  protected �Ǵ� private ���·� �ڵ带 �����´�.


// ������ ������ �ִ� �ڵ� class Book : public BookMark
// å�� �ݵ�� BookMark�� ������ �ִ� �����Դϴ�.
// �ʿ� ���� �ڵ尡 �߰��ȴ�.

// Is-A ���� Has-A
// (B) Is-A  : B�� A�̴�
// (B) Has-A : B�� A�� ������ 
class Book// å�� å�����̴�. å�� å���Ǹ� ���� �ִ�.
{
private:
	BookMark* bookMark; //BookMark* bookMark = NULL;	

public:
	void Read();
};

class SpellBook : public Book // SpellBook�� Book�̴�
{

};

class StoryBook : public Book
{

};

class QuestBook : public Book
{

};