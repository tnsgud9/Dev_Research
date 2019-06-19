#include <iostream>
#include <queue>

using namespace std;

int main()
{

	queue <int> q;

	for (int i = 0; i <= 10; i++) {
		q.push(i);
	}

	cout << q.front() << "\n";
	cout << q.size() << "\n";

	q.pop();

	cout << q.front() << "\n";
	cout << q.size() << "\n";

	while (!q.empty())
	{

		cout << "========\n";
		cout << q.front() << "\n";
		cout << q.size() << "\n";
		cout << "========\n";
		q.pop();
	}
	if (q.empty()) cout << "큐가 비어있음\n";


	return 0;
}