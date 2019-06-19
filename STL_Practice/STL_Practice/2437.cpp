#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int check[10000];
int main()
{

	freopen("input.txt", "r", stdin);
	int N;
	scanf("%d", &N);
	vector<int> arr(N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	sort(arr.begin(), arr.end());
	int i, j;
	int min = 987654321;
	for (int i = 0; i < N; i++)
	{
		int sum = 0;
		for (int j = 0; j < N; j++)
		{
			//if (i == j) continue;
			sum += arr[j];
			check[arr[j]]++;
			check[sum]++;

		}
	}

	for(int t=1;t<10000;t++)
		if (check[t] == 0) {
			printf("%d",t);
			break;
		}
}