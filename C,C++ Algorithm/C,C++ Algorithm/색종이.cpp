#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

int MAP[40][40];
int main()
{

	freopen("input.txt", "r", stdin);

	int n;
	int pos[20][20];
	int sum = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int x, y;
		cin >> x >> y;

		for (int j = y; j <= y + 10; y++) {
			for (int k = x; k < x + 10; k++)
			{
				pos[y][x] = 1;
			}
		}

		sum = x * y;
	}


	for (int i = 1; i <= n; i++)
	{
		
	}
	

	return 0;
}