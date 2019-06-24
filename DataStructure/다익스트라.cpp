#include <stdio.h>
#define N 15


int A[N + 1][N + 1], DIST[N + 1], check[N+1];
int n,k;
int S, E;
int MIN;

void reset()
{
	int i, j;
	for (i = 0; i <= n; i++) {
		for (j = 0; j <= n; j++)
		{
			if (i == j) continue;
			A[i][j] = 987654321;
		}
	}
}

void input()
{
	int a, b, c;

	reset();
	scanf("%d %d", &n, &k);
	for(int i=1;i<=k;i++)
	scanf("%d %d %d", &a, &b, &c);
	
	scanf("%d %d", &S, &E);
	for (int i = 0; i <= n; i++)
		DIST[i] = A[S][i];

}

void run()
{
	int i, j, min;

	for (j = 0; j < n; j++)
	{
		MIN = 987654321;
		for (i = 0; i <= n; i++)
		{
			if (DIST[i] < MIN&&DIST[i] && !check[i])
			{
				MIN = DIST[i];
				min = i;
			}
		}
		check[i] = 1;
		for (i = 0; i <= n; i++)
		{

		}
	}
}

void main()
{
	reset();
	input();


}