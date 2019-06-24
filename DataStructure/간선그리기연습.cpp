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
		printf("%3c", P[i] + 64); //다시 대문자로
	}
	printf("\n");
	return;
}
// q는 노드의 수 (6개 만큼) 작동.
void q(int start, int old, int L) // 현재 노드 , 도착하는 노드
{
	int i;
	check[old][start] = 1;
	check[start][old] = 1;
	//양방향 간선에 한번 이동했다는 흔적을 남김;
	P[L] = start;
	//레벨을 증가 시켜 다음 방문할 간선의 대상을 선택시킴.
	if (L == k)
	{ //레벨의 수가 노드와 같을때
		print();
		check[old][start] = 0;
		check[start][old] = 0;
	}

	for (i = 1; i <= n; i++) { //다음 노드까지 반복
		if (DATA[start][i] && !check[start][i]) q(i, start,L+1);
		//이 간선이 한번도 간 간선이 아니면 True -> q()로 이동. 
	}


	check[old][start] = 0;
	check[start][old] = 0;


}





void main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char a, b; //알파벳 입력 변수

	int i;
	scanf("%d %d",&n,&k); // 노드와 간선의 수 입력
	for (i = 1; i <= b; i++) {
		scanf("%c %c", &a, &b);
		DATA[a - 64][b - 64] = 1;
		//아스키코드 기준 -64로 알파벳을 숫자화
	}


}