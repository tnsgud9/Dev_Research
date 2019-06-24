/*
점화식
dp[0] = stair[0];
dp[1] = Max(stair[0]+stair[1],stair[1]);
dp[2] = Max(stair[0]+stair[2],stair[1]+stair[2]);


사용방식 점화식
뒤에서 시작

stair[i]
*/

#include <iostream>
#include <vector>
#define N 30
using namespace std;

int G[N];
int A[N];

int max(int a,int b)
{
	return a < b ? a : b;
}
void main()
{
	int n;
	cin >> n;

	int i;
	for (i = 1+3; i <= n+3; i++)
	{
		cin >> A[i];
	}

	for (i = 1+3; i <= n+3; i++)
	{
		G[i] = max(A[i] + G[i - 2], A[i] + A[i - 1] + G[i - 3]);
	}


	cout << G[n + 3];


	
}