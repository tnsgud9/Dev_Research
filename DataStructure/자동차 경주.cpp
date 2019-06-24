//https://boj.kr/2611
//자동차 경주 (위상정렬)

/*
위상정렬
BFS 방문을 1조건 하나로 변형하면 바로 된다.

queue에는 반드시 출발하는 것들을 넣는다.
queue = 출발 노드
check = 도착횟수

*위상정렬의 문제점
싸이클을 할수 없다.


핵심 소스

q[work] .v + A[q[work].node] [i];

if(check[i][v] < sum)
check[i].count--;
if(check[i].count == 0) bun++; 번호
Q[bun].node =i;
Q[bun].v= check[i].v;
*/

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>


#define N 1010

//node == queue
// conut == check

int max;

int A[N][N], n, k;
struct abc
{
	int count, v;
}check[N];
struct def
{
	int node, v;
}Q[N];
void input() {
	int a, b, c, i,j,cnt;
	scanf("%d %d", &n,&k);
	for (i = 1; i <= k; i++)
	{
		scanf("%d%d%d", &a, &b, &c);
		A[a][b] = c;

		//A[발송노드][도착노드] = 가중치;

	}
	for (i = 1; i <= n; i++)
	{
		cnt = 0;
		for (j = 1; j <= n; j++)
		{
			if (A[i][j]) cnt++;
		}
		check[i].count = cnt;
		max = max > check[i].count ? max : check[i].count;
	}

}

void run()
{
	int i,work=0, bun=1 ,sv,snode;
	//출발
	while (1)
	{
		if (work == bun)break;
		work++;
		snode = Q[work].node;
		sv = Q[work].v;
		for (i = 1; i <= n; i++)
		{
			if (A[snode][i]) //길이 있으면
			{
				if (check[i].v < sv + A[snode][i])
				{
					check[i].v = sv + A[snode][i];
				}
				check[i].count -= 1;

				if (check[i].count == 0)
				{
					bun++;
					Q[bun].node = i; 
					Q[bun].v = check[i].v;
				}

			}

			
		}
	}
}

int main()
{

	freopen("input.txt", "r", stdin);
	input();
	run();


	printf("%d", max);


}
