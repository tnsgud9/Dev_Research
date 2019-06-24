#include <stdio.h>
#define N 10
int n;
int check[N][N];
void q(int L, int X)
{
	int i, j;

	check[L][X] = 1; //초기에 1 씩 박음
	for (i = 1; i <= n; i++) q(L + 1, i); //반복

	for (i = 1;; i++)
	{
		if (check[L][i] == 1)
	}

	for(x=1;;i++)
	/*
	int i,j;

	check[L][X] = 1;
	for (i = 1; i <= n; i++) q(L + 1, i);
	check[L][X] = 0;

	for (i = 1;; i++)
	{
		if()
	}
	*/
}

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
	}
	return 0;
}
