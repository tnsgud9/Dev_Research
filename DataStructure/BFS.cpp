#include <stdio.h>
#define N 10

int A[N][N], n;

void E(int h,int w, int L) //���� ��ġ ���� �Է�
{
	//4���� �Է�
	if (A[h + 1][w] == 0 && h+1<=n) A[h + 1][w] = L + 1;// ������ġ�� �Ʒ� ����
	if (A[h - 1][w] == 0 && h - 1 > 0) A[h - 1][w] = L + 1;// ������ġ�� �� ����
	if (A[h][w + 1] == 0 && w + 1 <= n) A[h][w + 1] = L + 1;// ������ġ�� ������ ����
	if (A[h][w - 1] == 0 && h - 1 > 0) A[h][w - 1] = L + 1;// ������ġ�� ���� ����


}



int main()
{
	freopen("input.txt", "r", stdin);
	int i, j, L, flag = 1;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			scanf("%d",&A[i][j]);
	}
	A[1][1] = 1; //����� 
	
	while (flag) {
		flag = 0; //������ 0
		L = L + 1;
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (A[i][j] == L)
				{
					flag = 1;
					E(i, j, L);
				}
			}
		}
	}
}
