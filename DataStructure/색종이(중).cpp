
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define N 31



using namespace std;


int n;
int A[N];

int MAX = 0,MMAX=0;
void input()
{
	int i,j;
	int x, y;
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> x >> y;

	for (j = x + 1; j <= y; j++) {
		A[j] += 1;
		if (A[j] > MAX) MAX = A[j];
	}
}

int main()
{
	input();
	int count = 1;
	int i, j;
	for (i = 1; i <= 29; i++)
	{
		
		if (A[i] == MAX && A[i + 1] == MAX) count++;
		else {
			if (MMAX < count)MMAX = count;
			count = 1;
		}
	}
	cout << MAX;
}