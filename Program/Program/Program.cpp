#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main()
{
#pragma region 선형 컨테이너

#pragma region Vector Container

	// vector<int> vector;
	// vector.reserve(10);
	// vector.push_back(10);
	// vector.push_back(20);
	// cout << vector.capacity() << endl;
	// vector.push_back(30);
	// vector.push_back(40);
	// vector.push_back(50);
	// cout << vector.capacity() << endl;
	// cout << "======================" << endl;
	// vector.pop_back();
	// vector.pop_back();
	// for (auto i = 0; i < vector.size(); i++)
	// {
	// 	cout << vector[i] << "\n";
	// }

#pragma endregion

#pragma region List Container
	//	list<int> lst;
//
	//	lst.push_back(20);
	//	lst.push_back(30);
	//	lst.push_front(10);
	//	for (auto it = lst.begin();it != lst.end(); ++it)
	//	{
	//		cout << *it << endl;
	//	}
	//	cout << "=================" << endl;
	//	lst.pop_front();
	//	for (auto element : lst)
	//	{
	//		cout << element << endl;
	//	}
	//	cout << "=================" << endl;
//
	//	lst.assign(3, 50);
	//	for (auto element : lst)
	//	{
	//		cout << element << endl;
	//	}
	//	cout << "list size ? : " << lst.size() << endl;
				
#pragma endregion

#pragma region string
	//	string content;
	//	cout << content.capacity() << endl;
	//	content = "League of Legends";
//
	//	cout << content << endl;
	//	cout << content.capacity() << endl;
//
	//	content = "Battle Field";
//
	//	cout << content << endl;
	//	cout << content.capacity() << endl;
//
	//	cout << &content[0] << endl;

#pragma endregion


#pragma endregion

#pragma region 컨테이너 어댑터
	 
#pragma region Stack
	//	stack<int> stack;
	//	stack.push(10);
	//	stack.push(20);
	//	stack.push(30);
	//	stack.push(40);
	//	stack.push(50);
//
	//	//stack.empty() ==> 있으면 0 없으면 1
	//	while (!stack.empty())	// stack에 데이터가 있는 상태면 0 이니 
	//	{								// 1 이되면 조건 비해당. 1==0 <== 는 false 이므로 while 정지 			
	//		cout << stack.top() << endl;
	//		stack.pop();
	//	}
#pragma endregion

#pragma region Queue

	//	queue<int> queue;
//
	//	queue.push(10);
	//	queue.push(20);
	//	queue.push(30);
	//	queue.push(40);
	//	queue.push(50);
//
	//	while (!queue.empty())
	//	{
	//		cout << queue.front() << endl;
	//		queue.pop();
	//	}




#pragma endregion

		

#pragma endregion




	return 0;
}