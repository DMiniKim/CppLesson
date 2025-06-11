#include <iostream>

using namespace std;

class Temp
{
public:
	static void Show()
	{
		cout << "Show" << endl;
	}
};



class GameObject
{
#pragma region ���� ������
	// Ŭ���� ���ο� ���ԵǾ� �ִ� �Ӽ��� ���� ������
	// �����ϴ� ������

	// public	: Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ����
	//			  �׸��� Ŭ���� �ܺο����� ������ ����ϴ� ������

	// protected: Ŭ���� ���ο� �ڱ��� ����ϰ� �ִ� Ŭ����������
	//			  ������ ����ϴ� ������.

	// private	: Ŭ���� ���ξȿ����� ������ ����ϴ� ������.
#pragma endregion

	static int Gamecount;
private:
	int x;
protected:
	int	y;
public:
	int z;
public:
	void SetX(int value)
	{
		if (value > 100)
		{
			std::cout << "Exception" << endl;
			return;
		}
		else
		{
			x = value;
		}
	}
	void SetY(int value)
	{

		if (value > 100)
		{
			std::cout << "Exception" << endl;
		}
		else
		{
			y = value;
		}
	}
	void SetZ(int value)
	{
		if (value > 100)
		{
			std::cout << "Exception" << endl;
		}
		else
		{
			z = value;
		}
	}
	const int& GetX()
	{
		return x;
	}
	const int& GetY()
	{
		return y;
	}
	const int& GetZ()
	{
		return z;
	}
	void Increase()
	{
		Gamecount += 1;
	}
	GameObject()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	~GameObject()
	{
		std::cout << "gameobject �Ҹ�" << endl;
	}
};

int GameObject::Gamecount = 0;

class Player
{

	static int playerCount;			// ���� ��ü�α� �ľ�
public:
	Player() { playerCount++; }		// ���� ��ü ������ �ڵ� ī��Ʈ
	~Player() { playerCount--; }	// ���� ��ü ������ �ڵ� ī��Ʈ
public:
	static int GetPlayerCount()	// ���� ���� ����� ������� ���� ���� static �Լ�
	{
		return playerCount;			// ��ü �α� ����
	}
};
int Player::playerCount = 0;

void Swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void Swap(GameObject& object1, GameObject& object2)
{
	int temp = object1.z;
	object1.z = object2.z;
	object2.z = temp;
}
int main()
{
#pragma region ������
	// �ϳ��� ������ �� �ٸ� �̸��� �����ϴ� ������

	//	int x = 10;
	//	int y = 20;
	//	int& xRef = x;
	//	
	//	// cout << "x�� �� : " << x << endl;
	//	// cout << "xRef�� �� : " << xRef << endl;
	//	// 
	//	// cout << "x�� �ּ� : " << &x << endl;
	//	// cout << "xRef�� �ּ� : " << &xRef << endl;
	//	
	//	Swap(x, y);
	//	cout << "x�� �� : " << x << endl;
	//	cout << "y�� �� : " << y << endl;

	//
#pragma endregion

#pragma region Ŭ���� Class
	// ����� ���� �ڷ������� �Ӽ��� �Լ��� ���ԵǾ� ������,
	// Ŭ������ ���� ��ü�� �����Ͽ� �����ϰ� ����ϴ� ����ü.

	// GameObject gameObject1;
	// gameObject1.z = 100;
	// cout << "gameobject1�� z�� : " << gameObject1.z << endl;
	// 
	// 
	// gameObject1.SetX(102);
	// cout << "gameObject1�� x�� : " << gameObject1.GetX() << endl;
	// gameObject1.SetY(20);
	// cout << "gameObject1�� y�� : " << gameObject1.GetY() << endl;
	// 
	// cout << "GameObject�� ũ�� : " << sizeof(GameObject) << " Byte" << endl;



	// Ŭ������ ��� Ŭ���� ���ο� �ִ� ������ Ŭ������ �޸� ������
	// ���Ե�����, ���� ������ �Լ��� �޸𸮴� Ŭ���� ������ ���Ե��� �ʴ´�. ex) static 
#pragma endregion

#pragma region ���� ��� �Լ�
	// ���� ��� �Լ��� class ���ο� static�� ���� ��� �Լ���
	// �ν��Ͻ� (��ü) �� ��� Ŭ���� ��ü�� ȣ���� ������ �Լ���.

	// ex) �������� ���
	// Temp temp;
	// temp.Show(); // temp ��� �ν��Ͻ��� ���� �� 
	// 			 // ������ �Լ��� ȣ��.
	// 
	// // static�� Ȱ���� ���
	// Temp::Show();// ���� temp ���̵� ȣ�� ������
	// 			 // ������ �� show�� �ι� �� ����.

	// ��� ���ø� ���� ���ڸ� ������ �����ϰ� ���� �� ���� 
	// ����,��𼭵�,���� ���� ���� ��ü�� �����ϰ� �����ؾ��ϴ� �Ϳ�
	// static�� �ٿ��� �Լ��� �������ִ� ���� ����.
	// ex ) �ػ�,����,�ܼ� ��ü���� �Ÿ����, ������Ʈ ���� �ľ� ���,,

	//	Player p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;							// �÷��̾� 10�� ����
	//	cout << "���� �÷��̾�� : " << Player::GetPlayerCount() << endl; // �����Ͻ� 10���� ������.




#pragma endregion


	return 0;
}