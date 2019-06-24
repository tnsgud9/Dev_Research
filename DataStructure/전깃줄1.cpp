#define _CRT_SECURE_NO_WARNING
#include <iostream>
#include <algorithm>
#define N 20


using namespace std;

struct abc {
	int s, e;
}A[N];
int R[N];
int n;
bool compare(const abc &i, const abc &j){
	return i.s < j.s;
}
void input()
{

	cin >> n;

	int i, j;
	for (i = 1; i <= n; i++)
		cin >> A[i].s >> A[i].e;

	sort(A + 1,A+n+1,compare);
}
void run()
{
	int g, i, MAX=0;
	for (i = 1; i <= n; i++) {
		MAX = 0;
		for (g = 1; g <= i - 1; g++)
			if (A[i].e > A[g].e && MAX < R[g])
				MAX = R[g];
		R[i] = MAX + 1;
	}
}

void print()
{
	int i;
	for (i = 1; i <= n; i++)
	{
		printf("%3d", R[i]);
	}
}
int main()
{

	input();
	run();
	print();

	return 0;
}
