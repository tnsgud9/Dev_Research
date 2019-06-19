#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
	queue <int> q;

	int count;
	string in;

	cin >> count;
	int data;
	for (int i = 0; i <= count; i++)
	{
		getline(cin, in);
		if (in.find("push"))
		{
			in.erase(0, 5);
			data = atoi(in.c_str());
			q.push(data);
			cout << data<<"\n";
		}
		if (in.find("pop"))
		{
			if (q.empty()) cout << "-1\n";
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		if (in.find("empty"))
		{
			if (q.empty() == true)
				cout << "1\n";
			else
				cout << "0\n";
		}
		if (in.find("front"))
		{
			cout << q.front() << "\n";
			if (q.empty()) cout << "-1\n";
			else {
				cout << q.front() << "\n";
			}
		}
		if (in.find("back"))
		{
			if (q.empty()) cout << "-1\n";
			else cout << q.back() << "\n";
		}

	}

}