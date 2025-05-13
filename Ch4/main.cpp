/*
	1. namespace ��� �� ���ǻ���
	2. cpp ����ü�� ���� ���� (��ü�� ǥ���ϴ� ���� �߰�)
	3. class Ű���� (�ڵ��ð� ���� �� ����ȭ)
	4. 
*/

// std::cout, std::cin, std::endl
// ǥ�� ���̺귯�� std : standard

//using namespace std;	// �ش� �ҽ����� ������ ��� �ڵ带 
						// namespace std �ȿ� �ִ� ������ �Ǵ��ض�
// std::cout

// �����ؾ� �� ����.
// std�ȿ� �ִ� �̸��� ���� Ÿ���� �����͸� �����ϸ� ��ȣ�ϴٴ� ������ �߻��Ѵ�.

//�����ϴ� ��� ���
//using std::cout;
//using std::endl;
//using std::cin;
//using std::string;

#include "Item.h"
#include "gameUtil.h"
#include "Player.h"

void NameSpaceExample() 
{
	int number = 0;
	cin >> number;
	cout << "number�� �� : " << number << endl;
}

// �����͸� ����
// �Լ��� ����

// ����ü �ȿ� �Լ��� �����ϰԲ� �Ѵ�

int main() 
{
	cout << "Ch4 : ��ü���� ���α׷���" << endl;
	//NameSpaceExample();

	Item item1 = {"Sword", 100, 4, WEAPON}; // �߰��� ������ �־��� ��

	// Ÿ�� item1 �̸� = { �̸�, ����, ��, Ÿ�� }

	Item item2("Potion", 5, 65, USEABLE);

	item1.ShowItemInfo();
	item2.ShowItemInfo();


	Player player1 = { "GROM", WARRIOR, 50, 10000, 0, 0 };
	player1.ShowPlayerInfo();

	Player player2 = { "Mari", ARCHOR, 45, 9500 , 0 ,0};
	player2.ShowPlayerInfo();
}
