#include <iostream> // Stream �̶� �����͸� �۽��ϰ� �����ϴ� ��ζ�� ��������.

using namespace std;
int packet = 20;


namespace KDM
{
	int dm = 33;
	void Function()
	{
		cout << "KDM fucntion." << endl;
		cout << "Kim Dong Min : " << dm << endl;
	}
}
namespace Manual
{
	const char* manual = "==========MANUAL==========";
	void Function()
	{
		cout << manual << endl;
	}
}
//using namespace Manual;


int main()
{
#pragma region ��Ʈ��
	// �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧�Դϴ�.

	// int series = 5;
	// 
	// std::cout << series << std::endl;
	// std::cout << "Program"<< std::endl;

	//	int num1 = 0;
	//	std::cin >> num1;
	//	system("cls");
	//	for (int i = 1; i <= num1; i++)
	//	{
	//		std::cout << "Play Station " << i << std::endl;
	//	}
	


	// ��Ʈ���� �ü���� ���� �����Ǹ�
	// ��Ʈ�� ��ü�� ���۶�� �ӽ� �޸� ������ �����Ѵ�.
#pragma endregion

#pragma region ���� ���� ������
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴ� ��
	// ����ϴ� �����ڴ�.

	//	int packet = 10;
	//	std::cout << "���� ������ �� : " << packet << std::endl;
	//	std::cout << "���� ������ �� : " << ::packet << std::endl;

	// ���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������
	// ����Ǿ��� �� ���� ����� ������ ����� ������ �̸���
	// ����ϴ� ���� ��Ģ�� �����ϱ� ������ ���� ������ ȣ����� �ʽ��ϴ�.
#pragma endregion

#pragma region �̸� ����
	// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.

	//	Function();
	//	Function();
	//	KDM::Function();

#pragma endregion

#pragma region ���� �Ҵ�
	//	 int* p = new int;
	//	 *p = 100;
	//	 cout <<"���� �Ҵ� �� ������ ������ ����? : "<< * p << endl;
	//	 delete p;
	//	 p = nullptr;
	//	 cout << "�޸� ���� �� �ּ� �ʱ�ȭ �Ǿ����� 0�� ���;���. : " << p << endl;
	//	 p = new int[5];
	//	 
	//	 for (auto i = 0; i < 5; i++)
	//	 {
	//	 	p[i] = (i + 1) * 10;
	//	 	cout << p[i] << endl;
	//	 }
	//	 
	//	 delete[] p;
	//	 p = nullptr;
	//	 cout << "�޸� ���� �� �ּ� �ʱ�ȭ �Ǿ����� 0�� ���;���. : " << p << endl;
#pragma endregion

#pragma region ������ ����Ʈ Sequence Point // ������ Sequencing 
	//	// ������ ����Ʈ�� "�ռ� ������ ��� ���� �ڿ�
	//	// ���� ������ ���۵Ǵ� ��Ȯ�� �������� ���� �� �� �ִ�
//
//
	//	// ���� ��� ����� ���δٰ� ���� ��
	//	// ���� �غ��Ѵ� -> ���� ���δ� -> ��� ������ �ִ´� -> ������ -> ���� ���� �Դ´�
	//	
	//	// �̷��� ������� �����ؾ� ������
	//	// ���� ���� �� ��� ������ �ְ� ���� �� ���� ��? �翬�� ����
	//	// �׷��⿡ �� �ܰ谡 �Ϸ�� �� ���� �ܰ�� �Ѿ�� ��Ȯ�� ������ �ʿ��� ������.
//
	//	// ���� ���� ex)
	//	int i = 0;
	//	int a = i++ + ++i;
//
	//	// i++ �̶� ++i �� �� �� i�� ++ �ϸ鼭 �����̵��� ����.
	//	// �� ������ ��� ������� �����Ϸ� ���� �ٸ��� �����.
	//	// �̰��� ���ǵ��� ���� ���� �� , Undefined Behavior ��� �θ���.
//
	//	// �� �ڵ� ���� ���� ex)
	//	int j = 0;
	//	int temp1 = j++;		// temp���� ������ �ʿ信 ���� ����
	//	int temp2 = ++j;		//
	//	int b = temp1 + temp2;
//
//
	//	// �������� �Ǽ� ���� ex)
	//	player->SetHP(player->GetHP() - player->TakeDamage());
	//	// �÷��̾��� HP�� �ǽð����ε� �������� �޾Ƽ��� ������ ��
	//	// setHP ()<-- �ȿ��� Takedamage�� �� ȣ���ϴ� �Լ��� ���� ���
	//	// ������ ���������� ü�� ����� ������ �߻���.
//
	//	// �� �ڵ� ���� ���� ex)
	//	int damage = player->TakeDamage();
	//	int newHP = player->GetHP() - damage;
	//	player->SetHP(newHP);
//
	//	// �̷��� �������� �� �����Ͽ� ������� �ɰ����
	//	// ������̸� , ������������ ����.
	//	
	//	// �θ� �˷��� ������ ����Ʈ�� �����ϴ� ��ǥ���� �����Ǵ� �����ڴ� �Ʒ��� ����.
//
	//	// ; -----> �����ݷ� 
	//	int asg; 
	//	
	//	// && , || ------> �� ������ 
	//	if (asg > 0 || asg == 0) {}
	//		//      || �������� ������ ������ ���� �� �������� ������ ���� ��
//
	//	// ? : -----> ���� ������ 
	//	switch ((asg > 0) ? false : true)	// ? �� �������� ������ ����ǰ�
	//	{									// �������� true false�� ������.
	//	case 0:
	//		cout << "False";
	//		break;
	//	case 1:
	//		cout << "True";
	//		break;
	//	default:
	//		break;
	//	}
//
	//	// , : -----> ��ǥ ������
	//	int d, f, g, h, ll;
	//		// �ڷ��� int Ÿ������ ����Ǵ� ������ ,���� ���ʺ��� ���� ����ȴ�.




#pragma endregion


	return 0;
}