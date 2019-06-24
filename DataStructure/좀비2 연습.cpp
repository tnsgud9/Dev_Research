#include <stdio.h>
#include <algorithm>
#define N 22

using namespace std;
int n, A[N],L[N];
void input() {
	int i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &A[i]);
}

void run()
{
	int i, p;
	for (i = 1; i <= n; i++)
	{
		p = upper_bound(L + 1, L + n + 1, A[i]) - L;
	}
}
int main()
{
	input();
	run();
}