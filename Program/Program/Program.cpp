#include <iostream>
#include <math.h>
#include "Potion.h"
#include "Tool.h"
#include "WhetStone.h"
using namespace std;

class Math
{
public:
	void Square(int x) { cout << "int�� ���� �Լ� ������ : " << pow(x,2) << endl; };
	void Square(double x) { cout << "double�� ���� �Լ� ������ : " << pow(x,2) << endl; }
};

int main()
{
#pragma region ������
	// ���� ���� ���� �ٸ� ��ü�� ������ �����
	// ���� �ٸ� ������� ó���� �� �ִ� �۾��̴�.

#pragma region �Լ��� �����ε� Function overloading
	// ���� �̸��� �Լ��� �Ű� ������ �ڷ����� �Ű� ������ ����
	// �����Ͽ� ���� ���� ������ �� �ִ� ���.

	//	Math a;
	//	a.Square(3);
	//	a.Square(5.523);

	// �Լ��� �����ε��� ��� �Լ��� �Ű������� �����ϴ�
	// �μ��� ���¸� ���� ȣ���ϹǷ� , ��ȯ������ �Լ���
	// �����ε��� ������ �� ����.
#pragma endregion

#pragma region �Լ��� �������̵� Function Overriding
	// ���� Ŭ������ �ִ� �Լ��� ���� Ŭ�������� �������Ͽ�
	// ����ϴ� ���

	// Consumable* ptr[3] = { new Potion, new Tool , new WhetStone };
	// ptr[0]->Use();
	// ptr[1]->Use();
	// ptr[2]->Use();
	// 
	// cout << sizeof(Potion) << endl;
	// cout << sizeof(Tool) << endl;
	// cout << sizeof(WhetStone) << endl;
	//Potion potion;
	//Tool tool;
	//WhetStone whetstone;
	



	// �Լ��� �������̵��� ��Ӱ��迡���� �̷������,
	// ���� Ŭ�������� �Լ��� �������� �� ���� Ŭ������
	// �Լ� ���¿� ��ġ�ؾ� �Ѵ�.
#pragma endregion

#pragma region ���� �Լ�
// ���� �Լ� ���̺��� ����Ͽ� �Լ��� ȣ��Ǵ� �ð���
// ��Ÿ�ӿ� �����ϸ�, �� �� �̻��� ���� �Լ��� �����ϴ�
// Ŭ������ ���� �� ���� �Լ��� ����Ű�� �����Ͱ� �߰��ȴ�.
	int num = 0;
	Consumable* ptr = nullptr;

	while (1)
	{
		cin >> num;
		switch (num)
		{
		case 1:
			if (ptr == nullptr)
			{
				ptr = new Potion;
				ptr->Use();
				if (ptr != nullptr)
				{
					delete ptr;
					ptr = nullptr;
				}
			}
			
			break;
		case 2:
			if (ptr == nullptr)
			{
				ptr = new Tool;
				ptr->Use();
				if (ptr != nullptr)
				{
					delete ptr;
					ptr = nullptr;
				}
			}
			break;
		case 3:
			if (ptr == nullptr)
			{
				ptr = new WhetStone;
				ptr->Use();
				if (ptr != nullptr)
				{
					delete ptr;
					ptr = nullptr;
				}
			}
			break;
		default:
			break;
		}
	}

// ���� �Լ��� ���� �ð��� ���� Ŭ������ ���� ������
// ���� Ŭ������ �����ǵ� �Լ��� ȣ���� �� �ִ�.
#pragma endregion

	// �������� ������ ������ �Լ��� �Ӽ��� �����Ǵ�
	// ���� ���ε��� ���� �ʰ� ���� �ð��� �Լ���
	// �Ӽ��� ������ �� �ִ� ���� ���ε��� �����ϰ� �Ѵ�.

	// ���ε��̶� ? 
	// �������� ��ü�� ������ ���� �����Ͻ� ���� ��
	// ���� ���ε� : ������ ��.
	// ���� ���ε� : ��Ÿ�� ��.


#pragma endregion

	return 0;
}