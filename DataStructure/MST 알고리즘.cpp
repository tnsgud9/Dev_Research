#include <stdio.h>
#define N 110


int A[N][N], check[N];
int n, k; //노드 , 간선 변수
int MIN ,end;

int E(int start)
{

	int i;
	for(i=0;i<n;i++)
	if (A[start][i] && !check[i])
	{
		if (MIN < A[start][i])
		{
			MIN = A[start][i];
			end = i;
		}
	}


	return end;
}



void input()
{

	int i;
	int a, b, c; // temp 변수

	//INPUT 
	scanf("%d %d", &n, &k);

	for (i = 1; i <= k; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		A[a][b] = c;
		A[b][a] = c;
	}
}

void main()
{
	freopen("input.txt", "r", stdin);
	
	input();

	int i;

	for (int j = 1; j <= n - 1; j++)
	{
		MIN = 987654321;
		for (i = 0; i < n; i++)
		{
			if (!check[i])
				continue;
			end = E(i);
		}
	}


}
