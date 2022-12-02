#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <list> 
#include <list>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void test1()
{
	list<int> ls(10, 4);
	ls.push_front(10);
	ls.push_front(20);
	ls.push_front(30);
	ls.push_front(40);
	//ls.erase(ls.begin(),ls.end());
	ls.erase(find(ls.begin(), ls.end(), 30));
	list<int>::iterator it = ls.begin();

	for (auto e : ls)
	{
		cout << e << ' ';
	}
}

void test2()
{
	list<int> ls;
	ls.push_front(50);
	ls.push_front(20);
	ls.push_front(222);
	ls.push_front(240);
	ls.push_front(20);
	ls.push_front(30);
	ls.push_front(40);
	//ls.remove(20);
	ls.sort();
	ls.unique();
	for (auto e : ls)
	{
		cout << e << ' ';
	}
	cout << endl;
}

int main()
{
	//test1();
	test2();
	return 0;
}