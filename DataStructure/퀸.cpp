#include <stdio.h>
#define N 10
int n;
int A[N][N];

void q(int x,int L)
{
	int i;
	if () return;
	A[L][x] = 1; // 퀸이 들어간 위치
	for (i = 1; i <= n; i++)
	{
		q(i,L+1);
	}
}

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	scanf("%d", &n);
	for(int i=1;i<=n;i++) q(1, i);
		
}
