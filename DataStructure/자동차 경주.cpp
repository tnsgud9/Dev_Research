//https://boj.kr/2611
//�ڵ��� ���� (��������)

/*
��������
BFS �湮�� 1���� �ϳ��� �����ϸ� �ٷ� �ȴ�.

queue���� �ݵ�� ����ϴ� �͵��� �ִ´�.
queue = ��� ���
check = ����Ƚ��

*���������� ������
����Ŭ�� �Ҽ� ����.


�ٽ� �ҽ�

q[work] .v + A[q[work].node] [i];

if(check[i][v] < sum)
check[i].count--;
if(check[i].count == 0) bun++; ��ȣ
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

		//A[�߼۳��][�������] = ����ġ;

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
	//���
	while (1)
	{
		if (work == bun)break;
		work++;
		snode = Q[work].node;
		sv = Q[work].v;
		for (i = 1; i <= n; i++)
		{
			if (A[snode][i]) //���� ������
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
