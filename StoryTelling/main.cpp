// ascii art archeive

// ������ ���丮 ���� ���� ���
// �ܼ� ��ƿ��Ƽ �Լ�,
// Image Ŭ����
// ImageModel ��ü ����ü
// Actor - Tell(), Selection()

/*
	���� �ι�.
	���� ���.
	"���"
*/

#include "Console.h"
#include <iostream>
#include "ImageModel.h"
#include "Image.h"
#include "Actor.h"

int main() 
{
	ImageModel model;
	Actor actor;
	Console::CursorVisible(false);

	Image bat(model.batArt, 7);

	Console::GoToXY(20, 20);
	actor.Tell("�����̼�", "���㰡 �����Ͽ���"); // ���

	bat.move(0, 5, 10, 500); // ���� �ִϸ��̼�
	actor.Tell("�����̼�", "���鿡 ȣ���̰� ��Ÿ�����ϴ�.");
	actor.Tell("�����̼�", "������ ������?");
	bool b1 = actor.Selection("�����̼�", "�����Ѵ�","����ģ��");

	if (b1)
	{
		actor.Tell("�����̼�", "���㰡 ȣ���̸� �����Ͽ�����, ȣ���̸� �̱��� ���Ͽ����ϴ�.");
		std::cout << "Bad Ending";
	}
	else {
		actor.Tell("�����̼�", "����� �����ƴ�.");
		//bool b2 = actor.Selection("�����̼�", "����� �����ƴ�.", );
	}
	//bat.moveReverse(10, 5, 15, 500);

	

	while (true) 
	{

	}
}