#include <iostream>
#include <Windows.h>

using namespace std;

template <typename T>
bool Same(T x, T y)
{
	//bool isSame = x == y;
	cout << "x 입력 값 : " << x << endl;
	cout << "y 입력 값 : " << y << endl;
	cout << "참일 시 1 ,거짓일 시 0 과연 => " << (x == y) << endl;
	return x == y;
}
template <> 
bool Same(const char* left, const char* right)
{
	return strlen(left) == strlen(right);
}


#define SIZE 5

template<typename T>

class Container
{
private:
	T temp[SIZE];
	int count = 0;
public:
	Container()
	{
		for (auto i = 0; i < SIZE; i++)
		{
			temp[i] = NULL;
		}
	}
	T& operator[] (int data) // 해당 인덱스로 접근해서 출력용.
	{
		return this->temp[data];
	}
	void Add(T num) 
	{
		if (count < SIZE)
		{
			if (temp[count] == NULL)
			{
				temp[count++] = num;
			}
		}
		else
		{
			cout << "꽊 차서 못 넣어요.." << endl;
			return;
		}
	}
	
};

int main()
{
#pragma region 템플릿 Template
	// 데이터 형식에 의존하지 않고 , 하나의 값이 여러 다른 데이터
	// 형식을 가진 기술에 중점을 두어 재사용성을 높일 수 있는 기능.
	// Same(4, 4);
	// Same(1.2, 1.1);
	// Same('A', 'a');
	// Same("Dong Min", "GeumSoo");
	
	
	Container<int> temp;
	temp.Add(54);
	cout << temp[0] << endl;


#pragma endregion
	
#pragma region 템플릿의 특수화
	// 특정 자료형에 대해 다르게 처리하고 싶은 경우
	// 특정한 자료형만 다른 형식으로 동작시키는 기능.
	// cout << Same("DongMin", "GeumSoo") << endl;
#pragma endregion
	


	return 0;
}