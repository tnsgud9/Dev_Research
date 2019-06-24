#include <stdio.h>

#define N 100
int A[N + 10][N + 10], check[N + 10]; 
int n, k;
int S, E;
int R[N + 10];

//���� Ʈ���� ���
void DFS(int s) //s ���� ����
{
	check[s] = 1; //�ѹ� ���� �� ������ ���ܵ�
	
	for (int i = 1; i <= n; i++) //����� ����ŭ �ݺ�
	{
		if (A[s][i] && !check[i]) //���� �� ������ && �ѹ��� �湮���� ������ 
		{
			DFS(i); //����� ������ŭ DFS(����Լ�)�� ������Ų��.
		}
	}

	check[s] = 0; //���̻� ���밡 ������ 0���� ������ ����;
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
void main()
{
	input();
}