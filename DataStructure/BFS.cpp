#include <stdio.h>
#define N 10

int A[N][N], n;

void E(int h,int w, int L) //현재 위치 부터 입력
{
	//4방향 입력
	if (A[h + 1][w] == 0 && h+1<=n) A[h + 1][w] = L + 1;// 현재위치의 아래 방향
	if (A[h - 1][w] == 0 && h - 1 > 0) A[h - 1][w] = L + 1;// 현재위치의 윗 방향
	if (A[h][w + 1] == 0 && w + 1 <= n) A[h][w + 1] = L + 1;// 현재위치의 오른쪽 방향
	if (A[h][w - 1] == 0 && h - 1 > 0) A[h][w - 1] = L + 1;// 현재위치의 왼쪽 방향


}



int main()
{
	freopen("input.txt", "r", stdin);
	int i, j, L, flag = 1;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			scanf("%d",&A[i][j]);
	}
	A[1][1] = 1; //출발점 
	
	while (flag) {
		flag = 0; //시작은 0
		L = L + 1;
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (A[i][j] == L)
				{
					flag = 1;
					E(i, j, L);
				}
			}
		}
	}
}
