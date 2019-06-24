#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 100
int A[N + 10][N + 10], n, k, S, E, check[N + 10];
int R[N + 10];


void DFS(int s, int old, int L) {
	R[L] = A[old][s];
	check[s] = 1;

	for (int i = 1; i <= n; i++) {
		if (A[s][i] && !check[i]) {
			DFS(i, s, L + 1);
		}
	}
	check[s] = 0;
}


void input() {
	int a, b, c;
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= k; i++) {
		scanf("%d%d%d", &a, &b, &c);
		A[a][b] = c;
		A[b][a] = c;
	}
	scanf("%d%d", &S, &E); //a�� ���۳��,b ��
}
int main() {
	freopen("input.txt", "r", stdin);
	scanf("%d%d", &n, &k);


	return 0;
}


















/*
//�׷����� �־������� �ִ� ��θ� ���ϴ� �˰���

#include <stdio.h>
#include <algorithm>
#define N 110

int i, j, n, k;
int S, E;
int A[N][N];
int check[N];
int R[N];

void DFS(int s, int old , int L)
{
	R[L] = A[old][s]; //������ �Դ� ����� ���� R�� ������.			 ����
	check[s] = 1;													//ó��
	//
	for (int i = 1; i <= n; i++) {
		if (A[s][i] && !check[i]) //������ ��忡 �̹� ���� ���� �ʾ��� ���
		{
			DFS(i,s,L+1);
		}
	}
	check[s] = 0;
}
void input()
{
	int a, b, c;
	scanf("%d %d", &n, &k);

	for (int i = 1; i <= k; i++)
	{
		A[a][b] = c;
		A[b][a] = c;
	}

	scanf("%d %d ", &S, &E);
}

int main()
{
	freopen("input.txt", "r", stdin);

	input();



	return 0;
}

*/