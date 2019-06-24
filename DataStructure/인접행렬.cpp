#include <stdio.h>
#define N 10


int A[N][N];

void input()
{
	int n,k;
	scanf("%d %d", &n, &k);
	int i, a, b;
	for (i = 1; i <= k; i++)
	{
		scanf("%d %d", &a, &b);
		A[a][b] = 1;

	}

}




int main()
{
	freopen("input.txt", "r", stdin);


	input();




}