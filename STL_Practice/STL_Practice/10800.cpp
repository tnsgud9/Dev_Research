#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> ball;
	vector<vector<pair<int, int>>> colorball(n);
	vector<int> answer;

	for (int i = 0; i < n; i++)
	{
		int color, size;
		cin >> color >> size;
		color -= 1;
		ball.push_back({ size, i });
		colorball[color].push_back({ size,i });
	}
	sort(ball.begin(), ball.end());
	for (int i = 0; i < n; i++)
	{
		sort(colorball[i].begin(), colorball[i].end());
	}

	int sum = 0, tmp = 0;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		tmp = 0;
		for (int j = 1; j < colorball[i].size(); j++) {
			if (colorball[i][j].first == colorball[i][j - 1].first)
			{
				tmp += colorball[i][j=1].first;
				answer[colorball[i][j].second] -= sum;
			}
			else
			{
				sum += colorball[i][j-1].first;
				tmp = 0;
				answer[colorball[i][j].second] = sum;
			}
		}
	}

	for (int ans : answer)
	{
		cout << ans << "\n";
	}

}