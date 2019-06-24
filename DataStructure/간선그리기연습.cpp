#include <stdio.h>
#define N 10

int n, k; 
int DATA[N][N];
int check[N][N];
int P[N];

void print() {
	int i;
	for (i = 1; i <= k; i++)
	{
		printf("%3c", P[i] + 64); //�ٽ� �빮�ڷ�
	}
	printf("\n");
	return;
}
// q�� ����� �� (6�� ��ŭ) �۵�.
void q(int start, int old, int L) // ���� ��� , �����ϴ� ���
{
	int i;
	check[old][start] = 1;
	check[start][old] = 1;
	//����� ������ �ѹ� �̵��ߴٴ� ������ ����;
	P[L] = start;
	//������ ���� ���� ���� �湮�� ������ ����� ���ý�Ŵ.
	if (L == k)
	{ //������ ���� ���� ������
		print();
		check[old][start] = 0;
		check[start][old] = 0;
	}

	for (i = 1; i <= n; i++) { //���� ������ �ݺ�
		if (DATA[start][i] && !check[start][i]) q(i, start,L+1);
		//�� ������ �ѹ��� �� ������ �ƴϸ� True -> q()�� �̵�. 
	}


	check[old][start] = 0;
	check[start][old] = 0;


}





void main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char a, b; //���ĺ� �Է� ����

	int i;
	scanf("%d %d",&n,&k); // ���� ������ �� �Է�
	for (i = 1; i <= b; i++) {
		scanf("%c %c", &a, &b);
		DATA[a - 64][b - 64] = 1;
		//�ƽ�Ű�ڵ� ���� -64�� ���ĺ��� ����ȭ
	}


}