#include <iostream>
#include "../Program/Packet.h"
#include "../Program/Recource.h"
#include "../Program/Character.h"

using namespace std;

int* Pointer()
{
	int* ptr1 = new int;
	return ptr1;
}

int main()
{

#pragma region Smart Pointer

	//int* ptr2 = Pointer();
	//*ptr2 = 100;
	//cout << *ptr2 << endl;

	//int* ptr4 = nullptr;
	//{
	//	int* ptr3 = new int;
	//	ptr4 = ptr3; 
	//}
	//*ptr4 = 100;
	//delete ptr4;	
	// // 이런 개념

#pragma region Unique Pointer
	// 특정한 객체를 하나의 스마트 포인터로만 가리킬 수
	// 있도록 되어 있는 포인터.
	// unique_ptr<자료형> 변수명 = make_unique<자료형> ();

	//unique_ptr<Packet> packet1 = make_unique<Packet>();	// 동적 할당
	//packet1->Receive();
	//unique_ptr<Packet> packet2 = std::move(packet1);
	//
	//packet1->Receive();


#pragma endregion

#pragma region Shared Pointer
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
	// 모든 포인터 객체가 자원 객체를 필요하지 않을 때 자원 객체를
	// 해제 하도록 설계되어 있는 포인터.
	// shared_ptr<자료형> 변수명 = make_shared<자료형>();

		//shared_ptr<Recource> oil = make_shared<Recource>();
		//shared_ptr<Recource> mineral = make_shared<Recource>();
//		//
		//oil->Share(mineral);
		//mineral->Share(oil);
		//cout << oil.use_count() << endl;
		//oil = nullptr;
		//cout << oil->p.use_count() << endl; // 이거 머임 ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ





#pragma endregion

#pragma region Weak Pointer
	// 자원 객체를 소유하지 않기 때문에 공유 포인터로 관리되는 객체를
	// 가리켜서 참조 개수에 영향을 미치지 않게 하는 포인터입니다.
	// std::weak<자료형> 변수명

	shared_ptr<Character> a = make_shared<Character>();
	shared_ptr<Character> b = make_shared<Character>();

	a->Partner(b);
	b->Partner(a);

	cout << "count : " << a.use_count() << endl;
	cout << "count : " << b.use_count() << endl;



#pragma endregion




#pragma endregion


#pragma region R value L value
	// 숙제
	// L value는 메모리 공간에 이름이 있는 값으로
	// 우리가 코딩할 때 대입연산자에서
	// 좌측에 있는 피연산자에 해당되는 값이다.
	// 
	// ex) 1 = 2+1 <<-- 안됨 
	// 1은 메모리 공간에 이름이나 주소 뭐 그런게 아니기 때문에 불가
	// 
	// 그렇지만
	// 
	// int a;
	// ex ) a = 1+ 10; <<- 가능 
	// a 는 int a로 선언함과 동시에 메모리 공간이 주어지고
	// 이름이 주어지면서 주소를 알게 되고 그 주소에 접근하거나
	// 이름을 통해 추후 불러 올 수도 있다.

	// R value란 지금 이 순간에서만 사용가능 한 
	// 메모리 공간이 주어져있지 않은 "임시 값"을 말한다.

	// 위 예시 그대로 사용해 보자
	// 1 = 2+1 <<-- 여기서 R value는
	//				오른쪽에 2+1 이며
	//				2+1 을 진행하면 1회성으로 사용되고 사라지는
	//				값이다.

	// int a = 10;
	// int b;
	// b = a+10 ;	여기서 R value는 10 이며
	//				L value는 a와 b 이다
	//				그렇지만 a+10 하는 순간
	//				하나의 값으로 처리되면서 a+10도
	//				R value라고 부른다.
	//				왜? a= 10이고 +10 해서 연산하면
	//				20 이란 값이 나와서 결국 a+10 이 아닌 20이라는
	//				임시 값이 되기 때문이다.






#pragma endregion



	cout << "메인 함수 끝나는 지점" << endl;
	return 0;
};