#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	set <string> listen;
	set <string> answer;
	int N;
	int M;

	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		string name;
		cin >> name;
		listen.insert(name);
	}

	for (int i = 0; i < M; i++)
	{
		string name;
		cin >> name;

		auto ret = listen.find(name);
		if (ret != listen.end())
		{
			answer.insert(name);
		}

	}
	cout << answer.size() << "\n";
//	for (auto it = answer.begin(); it != answer.end(); it++)
//	{
//		cout << *it << "\n";
//	}
	for (string s : answer)
	{
		cout << s << "\n";
	}
}