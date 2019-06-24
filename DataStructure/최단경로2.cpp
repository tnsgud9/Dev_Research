#include <stdio.h>

#define N 100
int A[N + 10][N + 10], check[N + 10]; 
int n, k;
int S, E;
int R[N + 10];

//엔진 트리를 사용
void DFS(int s) //s 시작 지점
{
	check[s] = 1; //한번 왔을 때 흔적을 남겨둠
	
	for (int i = 1; i <= n; i++) //노드의 수만큼 반복
	{
		if (A[s][i] && !check[i]) //현재 갈 지점이 && 한번도 방문하지 않을때 
		{
			DFS(i); //노드의 갯수만큼 DFS(재귀함수)를 생성시킨다.
		}
	}

	check[s] = 0; //더이상 갈대가 없으면 0으로 흔적을 없앰;
}



void input() {
	int a, b, c;
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= k; i++) {
		scanf("%d%d%d", &a, &b, &c);
		A[a][b] = c;
		A[b][a] = c;
	}
	scanf("%d%d", &S, &E); //a는 시작노드,b 끝
}
void main()
{
	input();
}