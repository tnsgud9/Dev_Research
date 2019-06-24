#include <stdio.h>
#define N 30

int n, k, A[N][N];
char a, b;
int check[N];

void BFS(int start)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		if (A[start][i] == 1 && check[i] == 0)
		{

		}
	}

}


void main()
{
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= k; i++)
	{
		scanf("\n%c %c", &a, &b);
		A[a - 64][b - 64] = 1;
		//문자를 숫자화
	}

	BFS(1,1)

}