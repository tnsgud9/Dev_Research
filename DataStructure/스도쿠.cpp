#include <stdio.h>
#define N 10

int A[N][N];

void q(int num, int h, int w)
{
	int i,j;

	for (i = 1; i < w; i++)
		if (A[h][i])return;
	for (i = 1; i < h; i++)
		if (A[i][w])return;

	for(int a=1;a<=9;a++){
	for (i = 1; i <= 3 ; i++)
	{
		for (j = 1; j <= 3 ; j++)
			if (A[i][j]==i) return;
	}


	A[h][w] = num;
	for (i = 1; i <= 9; i++) {
		if (w != 9) q(i, h, w + 1);
		else q(i, h + 1, 1);

	}
	A[h][w] = 0;

}


int main()
{
	

}