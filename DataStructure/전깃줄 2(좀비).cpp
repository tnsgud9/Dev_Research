#include <stdio.h>
#include <algorithm>
#define N 25

using namespace std;


int n , R[N], G[N], MMAX, P[N], start;
void input()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &R[i]);
}

void run()
{
	int i, j, MAX;
	MAX = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i - 1; j++)
		{
			if (R[j] < R[i] && G[j] > MAX)
			{
				MAX = G[j];
				P[i] = j;
			}
		}

		G[i] = MAX + 1;
		if (MMAX < G[i]){
			MMAX = G[i];
			start = i;
		}
	}
}

void print()
{

	for (int i = 1; i <= n; i++)
		printf("%3d",i);
	for (int i = 1; i <= n; i++)
		printf("%3d", R[i]);
}

int main()
{


	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdin);



	input();
	run();
	print();
	printf("\n\n\n");
	while (1)
	{
		printf("%d\n", start);
		start = P[start];
		if (start == 0) break;
	}

	return 0; //exit

}