#include <stdio.h>
#define N 20
int n;
int DATA[N][N];
int count;
void print()
{
	int i, j;
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%3d", DATA[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	count++;
}
void q(int h, int w, int L)
{
	if (h > n || h == 0 || w > n || w == 0)return;

	if (DATA[h][w] != 0) return;
	DATA[h][w] = L; //현재 위치의 1이라는 발자국을 남긴다.
	if (h == n&&w == n) {
		print();
		DATA[h][w] = 0;
		return;
	}
	

	q(h + 1, w,L+1);
	q(h, w + 1,L+1);
	q(h - 1, w,L+1);
	q(h, w - 1,L+1);



	DATA[h][w] = 0; //더 갈곳이 없을때 왔던길을 1이라는 발자국을 Reset 한다.
	
}	//이것이 트리

void main()
{
	int i, j;
	freopen("input.txt", "r", stdin);


	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			scanf("%d", &DATA[i][j]);
		}
	}
	q(1, 1, 1);

	printf("\n\n경우의 수는 %d 입니다.\n", count);
}