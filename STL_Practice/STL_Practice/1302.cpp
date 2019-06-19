#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

void main()
{
	int in;
	map <string, int> lib;
	cin >> in;
	int maxcnt = 0;
	while (in--)
	{
		string title;
		cin >> title;
		auto ret = lib.insert({ title,1 });
		if (!ret.second) {
			(*ret.first).second += 1;
			if (maxcnt < (*ret.first).second)
			{
				maxcnt = (*ret.first).second;
			}
		}
	}

	for (auto book : lib)
	{
		if (book.second == maxcnt)
		{
			cout << book.first;
			break;
		}
	}
}