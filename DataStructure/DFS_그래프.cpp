#include <stdio.h>
#define N 10


int n,k;
int DATA[N][N], check[N], P[N];

void q(int node,int L)
{
	int i;
	
	for (i = 1; i <= n; i++)
	{
		int i;
		P[L] = node;
		check[node] = 1;
		if (DATA[node][i] == 1 && !check[i]) q(i,L+1);

	}
	check[node] = 0;
}
void main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, a, b;


	for (i = 1; i <= k; i++) {
		scanf("%d %d", &a,&b);
		DATA[a][b] = 1;
	}





	
}