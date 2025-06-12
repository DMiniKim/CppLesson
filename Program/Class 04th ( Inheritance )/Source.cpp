#include <iostream>

#include "../Program/Scooter.h"
#include "../Program/Boat.h"
#include "../Program/Bicycle.h"

using namespace std;

class Monster
{
protected:
	int health;
	int defense;

public:
	Monster(int heal, int def) :health(heal), defense(def) {};
};

class WorkingMonster : public Monster
{
protected:
	const char* name;
	int attackDamage;
public:
	WorkingMonster(const char* n, int _hlth, int _def, int atd) : name(n), Monster(_hlth, _def), attackDamage(atd) {};
	void Stats()
	{
		cout << "이 몬스터의 이름은 : " << name << " 입니다" << endl;
		cout << "가진 체력은 " << health << " 입니다" << endl;
		cout << "가진 방어력은 " << defense << " 입니다" << endl;
		cout << "가진 공격력은 " << attackDamage << " 입니다" << endl;
	}
};


int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록 설정해주는 기능

	//	WorkingMonster goblin("Goblin", 100, 5, 30);
	//	WorkingMonster juniorGolem("JoniorGolem", 200, 10, 55);
	//	WorkingMonster slime("Slime", 50, 1, 0);

	//	goblin.Stats();
	//	juniorGolem.Stats();
	//	slime.Stats();

	//	cout << "goblin의 메모리 용량은 : " << sizeof(goblin) << endl;
	//	cout << "juniorGolem의 메모리 용량은 : " << sizeof(juniorGolem) << endl;
	//	cout << "Slime의 메모리 용량은 : " << sizeof(slime) << endl;
	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의
	// 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의
	// 메모리를 포함한 상태로 메모리의 크기가 결정.
#pragma endregion

	//	Scooter scooter(100.f, "Scooter", 50);
	//	Boat boat(250.f, "Boat", 100);
	//	Bicycle bicycle("Bicycle", 20);
	//	cout << "=====================" << endl;
	//	scooter.Move();
	//	boat.Move();
	//	bicycle.Move();
	//	cout << "=====================" << endl;
	//	cout << "Scooter의 오브젝트 크기 : " << sizeof(scooter) << endl;
	//	cout << "Boat의 오브젝트 크기 : " << sizeof(boat) << endl;
	//	cout << "Bicycle의 오브젝트 크기 : " << sizeof(bicycle) << endl;

#pragma region 다중 상속 및 문제점
	// 숙제
#pragma endregion


	return 0;
}