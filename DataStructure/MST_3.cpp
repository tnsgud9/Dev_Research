


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
	scanf("%d %d", &n, &k); // ����� �� , ������ ��
	for (int i = 1; i <= k; i++)
		scanf("\n%c %c %d", &A[i].start, &A[i].end, &A[i].v);  //���� ��� , �� ��� , ������ ������
}

bool compare(abc &i, abc &j) //���� �� ��ȯ
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
	scanf("%d %d", &n, &k); // ����� �� , ������ ��
	for (int i = 1; i <= k; i++)
		scanf("\n%c %c %d", &A[i].start, &A[i].end, &A[i].v);  //���� ��� , �� ��� , ������ ������
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
		//���� ������
		temp1 = Union(A[i].start);
		temp2 = Union(A[i].end);

		if (temp1 == temp2)
			continue;
		R[A[i].start - 64][A[i].end - 64] = A[i].v;
		R[A[i].end - 64][A[i].start - 64] = A[i].v;
		U[temp1] = temp2; //����
		if (n - 1 == ++count)break;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			sum += R[i][j];
			printf("%3d", R[i][j]);
		}
		printf("n");
	}
	printf("n����Ʈ�� �� : %d", sum / 2);
}
*/