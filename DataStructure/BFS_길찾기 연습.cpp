//학급 회장 선발 BFS

#include <stdio.h>
#define N 10

int n, k;
int A[N][N];
int Q[N][3];

int check[N];
int end, work;
int MIN = 987654321;

void reset()
{

	for (int i = 1; i <= n; i++)
		check[i] = 0;
}
void BFS(int start, int L)
{
	int i;
	for (i = 1; i <= 26; i++)
	if (A[start][i] && !check[i])
	{
		end++;
		Q[end][1] = i;
		Q[end][2] = L+1;
		check[i] = i;
	}
}


void main()
{

	int i, j;
	int a, b;
	int output;
	scanf("%c %c", &n, &k);
	for (i = 1; i <= k; i++)
	{
		scanf("%c %c", &a, &b);
		A[a - 64][b - 64] = 1;
		A[b - 64][a - 64] = 1;
	}
	for (i = 1; i <= n; i++) {
		work = 0;
		end=1;
		Q[end][1] =i;
		Q[end][2] = 1;
		check[i] = 1;

		while (1)
		{
			reset();
			if (end == work) break;
			work++;
			BFS(Q[work][1], Q[work][2]);

			if (Q[end][2] < MIN)
				MIN = Q[end][2];
			output = i;

		}
	}
	printf("%c", output + 64);
}
