#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 10
int A[N][N], n;
int end, work;

struct abc
{
	int h, w, l;
}Q[N*N]; //


void E(int h, int w, int L) {
	//4방향 탐색후 지금 레벨에 +1씩 더해서 표시
	if (A[h + 1][w] == 0 && h + 1 <= n) {
		A[h + 1][w] = L + 1;
		end++;
		Q[end].h =h + 1;
	}
	if (A[h][w + 1] == 0 && w + 1 <= n)A[h][w + 1] = L + 1;
	if (A[h - 1][w] == 0 && h - 1 > 0)A[h - 1][w] = L + 1;
	if (A[h][w - 1] == 0 && w - 1 > 0)A[h][w - 1] = L + 1;
}
int main() {
	freopen("input.txt", "r", stdin);
	int h = 1, w = 1, L = 0, i, j, flag = 1;


	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &A[i][j]);
		}
	}


	//초기 시작 지점 설정
	A[1][1] = 1;
	Q[1].h = 1;
	Q[1].w = 1;
	Q[1].l = 1;



	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}