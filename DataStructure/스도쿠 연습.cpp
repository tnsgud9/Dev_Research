#include <stdio.h>
#define N 10

int A[N][N];

void print()
{
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++)
			printf("%3d", A[i][j]);
		printf("\n");
	}
	printf("\n\n");
}

void q(int num, int h, int w)
{
	int i,j;
	for (i = 1; i < h; i++) //h-1
		if (A[i][w] == num) return;
	for (i = 1; i < w; i++)
		if (A[h][i] == num) return;
	for (i = h - ((h - 1) % 3); i <= h; i++)
		for (j = w - ((w - 1) % 3); j <= w - ((w - 1) % 3) + 2; j++)
			if (i == h && j == w)break;
			else if (A[i][j] == num) return;

		A[h][w] = num; // 숫자 저장
	if (h == 9 && w == 9) //끝 자릿수 일때
		print();
	for (i = 1; i <= 9; i++)
	{

		if (w == 9) //x(w)축이 9일때 줄넘김
			q(i, h + 1, 1);
		else
			q(i, h, w + 1);
	}

}


void main()
{
	for(int i=1;i<=9;i++)
		q(i, 1, 1);
}