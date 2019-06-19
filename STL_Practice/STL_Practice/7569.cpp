#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

struct POS {
	int x, y, z;
	int day;
};
void main()
{

	int m, n, h;
	cin >> m >> n >> h;

	vector<vector<vector<int>>> box(h, vector<vector<int>>(n, vector<int>(m)));
	vector<POS> q;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				cin >> box[i][j][k];
				if (box[i][j][k] == 1)
				{
					POS p;
					p.z = i;
					p.y = j;
					p.x = k;
					p.day = 0;
					q.push(p);
				}

			}
		}
	}
	int dx[] = {0,0,-1,1,0,0};
	int dy[] = {0,0,0,0,1,-1};
	int dz[] = {-1,1,0,0,0,0};
	while (!q.empty())
	{
		POS now = q.front();
		q.pop();
		for (int i = 0; i < 6; i++)
		{
			POS next = now;
			next.y
		}

	}

}