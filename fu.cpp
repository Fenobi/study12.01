#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
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
	return 0;
}