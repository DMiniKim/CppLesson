#include <iostream>
// 클래스란 : 설계도 뭘 만들지 모르지만 일단 설계도
// 인스턴스란 : 위 설계도를 바탕으로 만든 실체
// 객체란 : 위 내용들을 뭉떵그려 표현하는 하나의 표현
using namespace std;
enum Character
{
	ZERGLING,
	MARINE,
	ZEALOT,
};

class Unit
{
private:
	int health = 0;
	int defense = 0;
	int attack = 0;

public:
	Unit(Character ch)
	{
		cout << "Created Unit" << endl;
		switch (ch)
		{
		case ZERGLING:
			health = 40;
			defense = 0;
			attack = 4;
			break;
		case MARINE:
			health = 40;
			defense = 0;
			attack = 5;
			break;
		case ZEALOT:
			health = 200;
			defense = 0;
			attack = 12;
			break;
		default:
			break;
		}
	}
	~Unit()
	{
		cout << "Destroyed" << endl;
	}
	void Stats()
	{
		cout << "Health : " << health << endl;
		cout << "Defense : " << defense << endl;
	}
};
class Item
{
private:
	int* price = nullptr;
	char grade;
public:
	Item() // 생성자
	{
		grade = 'A';
		if (price == nullptr) { price = new int(0); }

		cout << "created Item" << endl;
	}
	Item(Item& clone) // 복사 생성자
	{
#pragma region 깊은 복사
		// 객체를 복사할 때, 참조 값이 아닌 객체 자체를 새로 복사하여
		// 서로 다른 메모리를 생성하는 복사
		grade = clone.grade;
		if (price == nullptr) { price = new int(*clone.price); }
		cout << "created Item" << endl;
#pragma endregion
	}
	~Item() // 소멸자
	{
		cout << "Destroyed Item" << endl;
		if (price != nullptr) { delete price; }
	}
	void Information()
	{
		cout << "Item Grade : " << grade << endl;
		cout << "Item Price : " << *price << endl;
	}
};

void Position(int x, int y, int z = 30)
{
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
	cout << "z의 값 : " << z << endl;
}
int main()
{
#pragma region 생성자
	// 클래스의 인스턴스가 생성되는 시점에서 자동으로
	// 호출되는 특수한 멤버 함수.

	// Unit* zergling = new Unit();
	// zergling->Stats();

	// 생성자의 경우 객체가 생성될 떄 단 한 번만 호출되며
	// 생성자는 반환형이 존재하지 않기 때문에 생성자가 호출되기
	// 전에는 객체에 대한 메모리는 할당하지 않습니다.
#pragma endregion

#pragma region 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의 멤버 함수.

	// delete zergling;
	// zergling = nullptr;

	// 소멸자는 객체가 메모리에서 해제될 때 단 한 번만 호출되며,
	// 소멸자에는 매개 변수를 생성하여 사용할 수 없습니다.
#pragma endregion

#pragma region 복사 생성자
	// 같은 객체를 복사하여 생성시킬 때 호출되는 생성자.

	// Item item1;
	// Item item2(item1);
	// 
	// item1.Information();
	// item2.Information();

#pragma endregion

#pragma region 얕은 복사
	// 객체를 복사 할 때 주소 값을 복사하여 같은 메모리
	// 공간을 가리키게 하는 복사.

	// 일반 변수 적용

	//	int* temp = new int;
	//	
	//	int* p1 = temp;
	//	int* p2 = temp;
	//	
	//	cout << temp << endl;
	//	cout << p1 << endl;
	//	cout << p2 << endl;
	//	
	//	*p2 = 20;
	//	
	//	cout << "p1 이 가리키는 값은 : " << *p1 << endl;
	//	
	//	delete p1;

	// 클래스에 적용

	// Item item1;
	// Item item2(item1);
	// 
	// item1.Information();
	// item2.Information();

	// 얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을
	// 참조하고 있기 때문에 하나의 객체로 값을 변경하게 되면
	// 서로 참조된 객체도 함께 영향을 받는다.
#pragma endregion

#pragma region 깊은 복사
	// 객체를 복사할 때, 참조 값이 아닌 객체 자체를 새로 복사하여
	// 서로 다른 메모리를 생성하는 복사

	// 위에 클래스 부분 참조
#pragma endregion

#pragma region 기본 매개 변수
	// 함수의 매개 변수에 값이 전달되지 않을 때
	// 미리 값을 설정해놓는 매개 변수입니다.

	// Position(100,200);

	// 기본 매개 변수를 지정하려면 오른쪽에서 부터
	// 값을 지정해주어야 합니다.
#pragma endregion

#pragma region 멤버 이니셜라이저
	//숙제
#pragma endregion


	return 0;
}