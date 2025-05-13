/*
	�ۼ��� : 2025-04-11
	�ۼ��� : ���ȣ
	����   : ������
	C,cpp�� ������2. ������
*/

/*
	��ǥ: �÷��̾��� �̵��� �����ڸ� ����Ͽ� �Լ�ȭ �غ���
*/

#include <iostream>

/*
	������ ���ظ� ���� �Լ� ���� Swap �Լ� ����
*/
void SwapByValue(int num1, int num2) 
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
} // SwapByValue mainȣ������ �� num1, num2 ������ ������ ������ ��������� �ʴ´�.

void SwapByRef(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
} // num1, num2�� ���޵� ������ ������ ����Ǵ� �Լ�.

// �Լ� �����ε�, �Լ� �̸��� ���Ƶ� �Ű����� Ÿ���� �ٸ��� ������ �����ϴ�.
void SwapByRef(int& num1, int& num2)  // &num1 = ������ �ּҸ� ��ȯ�Ѵ�.
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

// ����1. SwapPointer �Լ��� �����. �ּҸ� �����ڷ� �����ϴ� �Լ��� �����.
// int type

// ������ �����ڰ� �����Ѱ� �ƴϰ�, �ּ�, �迭, ���ҵ� �����ڷ� ���� �� �ִ�.
// int arr1[3] = {1,2,3}
// int& arrRef1 = arr[0] // arrRef1�� arr[0]�� ��Ī

// int num1 = 10;
// int* numptr = &num1;
// int* &num1Ref = num1ptr; num1Ref�� num1ptr�� ��Ī

void SwapPointer(int*& num1ptr,int*& num2ptr) 
{
	int* temp = num1ptr;
	num1ptr = num2ptr;
	num2ptr = temp;
}

int main() 
{
	// namespace std�� ���ǵǾ��ִ� ���� �ȿ� cout �����ͼ� ����ϱ�
	std::cout << "2��" << std::endl;

	// ������ ����� ����� ���еȴ�.
	// �Լ��� ����� ����� ���еȴ�.
	
	int num1;
	num1 = 1;

	int* num1ptr = &num1; // num1ptr �����ͺ����� num1�� �ּ� ����

	int& num1ref = num1; // num1 ������ �����ϴ� num1ref, num1ref�� num1�� ������(��Ī),num1�� ��Ī�� num1ref�̴�

	int num2 = num1;
	num1 += 1;
	num1ref +=  1;
	std::cout << "num1�� �� : " << num1 << std::endl; // ���� ��� Cpp ������� �ۼ�
	std::cout << "num2�� �� : " << num2 << std::endl;
	std::cout << "num1�� ���� num1ref �����ڷ� ȣ�� : " << num1ref << std::endl; // �����ڴ� ���� ������ ���� ������.(����), ������ ���� ���ϸ� ���� �������� �ٲ��.
	int& num2ref = num2;
	// A. ��
	// A�� ����� �Դ´�.
	// ���� ����� �Դ´�.
	// �� �� ������ ����� ����. �̸��� �ٸ� ���̴�.

	// �׷��� �����ڸ� ��� ����ϳ�?

	int input = 0;
	// scanf("%d", input);
	// �������� ���� : c++ �����ڸ� ����ؼ� �Լ��� ����� �� *,& ��ȣ�� ������� �ʰ� ǥ���� �� �ִ�.
	// std::cin >> input;
	std::cout << "Call By Value�� Call By Reference ��� : " << std::endl;

	int value1 = 10, value2 = 20; // value1, value2 ����Ǽ� ����ϰ� �����, �Լ� �̿�
	std::cout << "Call By Value ��� " << std::endl;
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;
	SwapByValue(value1, value2);
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;

	std::cout << "Call By Reference ��� : " << std::endl;
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;
	SwapByRef(&value1, &value2); // �ּҸ� ������ �־�� �Ѵ�.
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;

	std::cout << "Call By Reference : �Ű��ּ� ���� ��� ��� " << std::endl;
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;
	SwapByRef(value1, value2); //
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;


	std::cout << "�������� ����" << std::endl;

	int ssnum1 = 1;
	int ssnum2 = 100;
	int* ssnum1ptr = &ssnum1;
	int* ssnum2ptr = &ssnum2;
	std::cout << "ssnum ������ ���� ��" << std::endl;
	std::cout << "ssnum1ptr : " << ssnum1ptr << " ssnum2ptr : " << ssnum2ptr << std::endl;
	SwapPointer(ssnum1ptr, ssnum2ptr);
	std::cout << "ssnum1ptr�κ��� �� ���, ";
	std::cout << "ssnum2ptr�κ��� �� ���" << std::endl;
	std::cout << "ssnum1ptr : " << ssnum1ptr << " ssnum2ptr : " << ssnum2ptr << std::endl;

	// �����ڸ� ����ϸ� �����Ϳ� ���� ��ȣ�� 1���ٿ��� ǥ�� �� �� �ִ�.
	// int, int������ ���� �ٲ� �� �����ڸ� ����Ѵ�.
	// int*, int* ���� �ٲ� ���� int*& int*&

	// ������ ��� �� �����ؾ� �� ����

	// int& AAA; ����1: �����ڴ� ���� �� �ݵ�� �ʱ�ȭ�� �ʿ��Ѵ�.
	int AAA = 0;
	int& AAAref = AAA; // ����1 �ذ� ���

	// const Ȱ���Ͽ��� �Լ��� ����ϴ� ������� ���̵带 �ȳ����� ��
	// void Func(const int* num1); num1�����ϴ� ���� �������� ����
	// voud Func(const int& num1); num1���� ���� �������� ����
	
	// return Ÿ�Կ� �����ڸ� ������ �� �����ؾ� �Ѵ�.

	//		�Լ��� �� ���� (int func())		�Լ����� ������ ����(int& func())
	// main �Լ������� ����		|	�Լ��� �� ����(int func())	|	�Լ����� ������ ����(int& func())
	// int a = func();			|	a�� ���� �����				|	a�� ���� �����. func�ȿ��� ���� ������ return ���� �ʾƾ� ��
	// int& a = func();			| a�� func���ϰ��� �������� �Ѵ�|	func �ȿ��� ���� ������ return ���� �ʾƾ� �Ѵ�.
	//							  a ���� 10�� �������� �Ѵ�.
	//							  a = 9; 10�� 9�� �ض�
	//							  ������ ������ �߻��Ѵ�.
	// const int& a = func();	| a ������ 10�� �������� �ض�	|	func �ȿ��� ���� ������ return ���� �ʾƾ� �Ѵ�.
	//							  10�� ������ a��� �Ѵ�.
	//							  const int& a = 10; �����ϴ�
	//							  ��Ī ���� �� �Լ��� ȣ���Ѵٸ�
	//							  ��Ī�� const�� ����ؾ� ��


}