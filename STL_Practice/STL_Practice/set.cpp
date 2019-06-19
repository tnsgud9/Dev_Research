#include <iostream>
#include <set>

using namespace std;

int main()
{
	set <int> a;


	a.insert(20);
	a.insert(55);
	a.insert(73);
	a.insert(80);
	a.insert(30);

	set<int>::iterator iter;

	for (iter = a.begin(); iter != a.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	a.erase(80);

	for (iter = a.begin(); iter != a.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;












	iter = a.find(30);

	if (iter != a.end())
	{
		cout << *iter << endl;

	}
		else
	{
		cout << "없음 : a.end()까지 탐색해서 없을시 " << endl;
	}

	a.erase(30);
	iter = a.find(30);
	if (iter != a.end())
	{
		cout << *iter << endl;

	}
	else
	{
		cout << "없음 : a.end()까지 탐색해서 없을시 " << endl;
	}
}