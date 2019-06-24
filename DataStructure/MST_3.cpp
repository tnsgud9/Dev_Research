


#include <stdio.h>
#include <algorithm>
#define N 15


using namespace std;
int U[N];
int R[N][N];
int n, k;
struct abc
{
	char start;
	char end;
	int v;

}A[N];


void input()
{
	scanf("%d %d", &n, &k); // 노드의 수 , 간선의 수
	for (int i = 1; i <= k; i++)
		scanf("\n%c %c %d", &A[i].start, &A[i].end, &A[i].v);  //시작 노드 , 끝 노드 , 간선의 데이터
}

bool compare(abc &i, abc &j) //비교후 값 반환
{
	return i.v < j.v;
}
void main()
{
	input();

}







/*

#include <stdio.h>
#include <algorithm>
#define N 15



using namespace std;
int U[N];
int R[N][N];
int n, k;
struct abc
{
	char start;
	char end;
	int v;

}A[N];

int Union(int w)
{
	if (w == U[w])
		return w;
	else
		return U[w] = Union(U[w]);
}

void input()
{
	scanf("%d %d", &n, &k); // 노드의 수 , 간선의 수
	for (int i = 1; i <= k; i++)
		scanf("\n%c %c %d", &A[i].start, &A[i].end, &A[i].v);  //시작 노드 , 끝 노드 , 간선의 데이터
}

bool compare(abc &i, abc &j)
{
	return i.v < j.v;
}
void main()
{
	int i,j, temp1, temp2, sum = 0, count = 0;
	input();
	sort(A + 1, A + k + 1, compare);
	for (int i = 1; i <= n; i++) U[i] = i;
	for (int i = 1; i <= n; i++)
	{
		//조상 가져옴
		temp1 = Union(A[i].start);
		temp2 = Union(A[i].end);

		if (temp1 == temp2)
			continue;
		R[A[i].start - 64][A[i].end - 64] = A[i].v;
		R[A[i].end - 64][A[i].start - 64] = A[i].v;
		U[temp1] = temp2; //가족
		if (n - 1 == ++count)break;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			sum += R[i][j];
			printf("%3d", R[i][j]);
		}
		printf("n");
	}
	printf("n신장트리 값 : %d", sum / 2);
}
*/