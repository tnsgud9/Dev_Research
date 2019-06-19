#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> points(n);
	
	for (int i = 0; i < n; i++)
	{

		cin >> points[i].first >> points[i].second;
	}
	int answer = 0;
	for (int i = 0; i < n; i++)
	{
		int minl = 1000000001;
		for (int j = 0; j < n; j++)
		{
			if (j == i) continue;

			if (points[i].second == points[i].second)
			{
				int dist = points[i].first - points[j].first;
				if (minl > dist) minl = dist;
			}
		}
		if (minl== 1000000001) minl = 0;
		answer += minl;
	}
	cout << answer;
}