#include <stdio.h>
#define N 10


int n, k;
int DATA[N][N], check[N], P[N];

void main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, a, b;

	scanf("%d %d", &a, &b);
	for (i = 1; i <= k; i++) {
		scanf("%d %d", &a, &b);
		DATA[a-64][b-64] = 1;
	}
		
}