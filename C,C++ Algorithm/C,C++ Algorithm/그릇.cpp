#include <iostream>
#include <string>
using namespace std;
int main()
{
	int h = 10;
	string s;
	cin >> s;


	for (int i = 1; i < s.length(); i++)
	{
		if (s[i - 1] == s[i]) h += 5;
		else h += 10;
	}

	cout << h;
}