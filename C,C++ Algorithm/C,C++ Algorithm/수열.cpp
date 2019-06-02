#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;
int main()
{

	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	vector<int> arr(n);
	vector<int> dp(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i=0;i<n;i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (arr[i] <= arr[j])
			{
				if (dp[i] == arr[i])
				{
					dp[i] = arr[i];
				}
				for (int k = i - 1; k >= 0; k--)
				{
					if (dp[k] > arr[i])
						dp[k] = arr[i];
				}

			}
		}

	}

	for (int i = 0; i < dp.size(); i++)
		cout << dp[i];

	return 0;
}