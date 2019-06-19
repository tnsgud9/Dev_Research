#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main() {

	int N, M;
	cin >> N >> M;
	queue <int> q;
	vector <int> answer;
	for (int i = 1; i <= N; i++)
		q.push(i);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		answer.push_back(q.front());
		q.pop();
	}

	cout << "<" << answer[0];
	for (int i = 1; i <= answer.size()-1; i++)
		cout << ", " << answer[i];
	cout << " > ";

}