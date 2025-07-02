#include <iostream>
#include "Packet.h"
#include "Recource.h"

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

	shared_ptr<Recource> oil = make_shared<Recource>();
	shared_ptr<Recource> mineral = make_shared<Recource>();

	oil->Share(mineral);
	mineral->Share(oil);
	cout << oil.use_count() << endl;
	oil = nullptr;
	cout << oil->p.use_count() << endl; // 이거 머임 ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ
	




#pragma endregion



	
	
#pragma endregion


#pragma region R value L value
	// 숙제
#pragma endregion



	cout << "여기는 스택의 마무리 지점입니다" << endl;
	return 0;
}