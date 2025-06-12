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
	// 단순한 정의를 내리자면 하나의 클래스가 두 개의 클래스를 상속 받는 경우를 뜻한다.
	// 바로 예시를 보는 게 이해가 빠르다.

	//	class Movable		// 움직이는 것과 관련된 클래스
	//	{
	//	protected:
	//		int speed;		// 움직이는 데에 기본적인 속도
	//	public:
	//		void Move();	// 움직이기
	//		void Jump();	// 점프하기
	//	};
	//	class Character		// 캐릭터 object 관련 클래스
	//	{
	//	protected:
	//		int hp;			// 체력
	//		int mp;			// 마나
	//	public:
	//		void Attack();	// 공격스킬
	//		void Guard();	// 방어스킬
	//	};
	//	class Warrior : public Movable,public Character
	//	{					// 둘 다 상속받아서 두 개의 기능을
	//	protected:			// 수행 가능한 클래스
	//		int steminer;	// warrior만 가진 스테미너 특성
	//	public:
	//		void Provoke();	// warrior만 가진 도발스킬
	//	};

	// 위의 예시가 올바르게 작동된 클래스 구조이다.
	// 위의 예시에서 문제점이 발생한다면 
	// 1. 멤버 함수 이름 충돌
	// 예시를 보자

	//		class UnitA
	//		{
	//		public:
	//			void ShowingHP();
	//		};
	//		class UnitB
	//		{
	//		public:
	//			void ShowingHP();
	//		};
	//		class AnotherCharacter :public UnitA,public UnitB
	//		{
	//			// todo
	//		};

	//		AnotherCharacter ac;
	//		ac.ShowingHP();	//<---- 어느 쪽에 있는 함수를 부를 까요? 하고
					// 에러 나는 중

	// 2. 다이아몬드 상속 문제
	// 위 1번 문제와 비슷하게 변수에도 똑같이 문제가 발생한다
	// 차이점은 하나의 클래스에서 두개의 클래스로 상속되고 다시 다중 상속되어
	// 다이아몬드 처럼 상속구조를 가져서 다이아몬드 상속문제 라고 한다.
	// 위 클래스 그대로 사용하겠다.
	//		class BasePawn // unit 의 상위 클래스
	//		{
	//		public:
	//			int id;		// unit 들이 가진 고유 id 같은 게 주로 발생 원인.
	//		};
	//		class UnitA : public BasePawn	// basepawn을 상속
	//		{
	//		public:
	//			// todo
	//		};
	//		class UnitB : public BasePawn	// basepawn을 상속
	//		{
	//		public:
	//			// todo
	//		};
	//		class AnotherCharacter :public UnitA, public UnitB // 위에 것들을 상속
	//		{
	//			// todo
	//		};

	//		AnotherCharacter ac;
	//		ac.id;			//<<-----  Unit A 의 id인지 Unit B의 id인지 모르기에 
	//						//                                    발생되는 문제


	// 해결 방법

	// 1번의 멤버 함수 이름 충돌의 경우는 명시적으로 접근해주면 해결된다 
	// 예시

	//	class UnitA
	//	{
	//	public:
	//		void ShowingHP();
	//	};
	//	class UnitB
	//	{
	//	public:
	//		void ShowingHP();
	//	};
	//	class AnotherCharacter :public UnitA, public UnitB
	//	{
	//		// todo
	//	};
	//	AnotherCharacter ac;
	//	ac.UnitB::ShowingHP();  // <<-- 어느 부모의 함수를 호출 할 것인지 명시

	// 2번의 다이아몬드 상속 문제의 경우는 추후 배울 Virtual 상속을 진행 해주면
	// 부모 클래스를 따라가다보면 명확해지기에 다중 상속진행 중인 클래스를
	// virtual 상속 진행 해준다.

	// 예시
	
	//	class BasePawn // unit A , B 의 상위 클래스
	//	{
	//	public:
	//		int id;		// unit 들이 가진 고유 id 같은 게 주로 발생 원인.
	//	};
	//	class UnitA : virtual public BasePawn	// virtual 로 basepawn을 상속
	//	{
	//	public:
	//		// todo
	//	};
	//	class UnitB : virtual public BasePawn	// virtual 로 BasePawn 을 상속
	//	{
	//	public:
	//		// todo
	//	};
	//	class AnotherCharacter :public UnitA, public UnitB // 위에 것들을 상속
	//	{
	//		// todo
	//	};
	//	AnotherCharacter ac;
	//	ac.id = 12512521;	// <-- 이제 어떤 것인지 명확해짐.


#pragma endregion


	return 0;
}