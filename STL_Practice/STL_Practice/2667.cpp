#include <iostream>
#include <vector>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	
	int n;
	vector<vector<int>> v;
	vector<int> answer;

	int DFS(int y, int x)
	{
		if (v[y][x] != 1) reutrn 0;
		if (y < 0 || x < 0 || y >= n || x >= n) return 0;
		return 1 + dfs(y - 1, x) + dfs(y + 1, x) + dfs(y, x - 1) + dfs(y, x + 1);
	}




}
