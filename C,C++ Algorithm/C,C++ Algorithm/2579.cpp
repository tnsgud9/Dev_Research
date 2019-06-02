//http://boj.kr/2579
//��� ������
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n; //��� �Է� ������
	cin >> n;
	vector<int> stair(n+6); // vector�� ���� �迭 ����
	vector<int> dp(n+6);
	for (int i = 1; i <= n; i++) cin >> stair[i];

	for (int i = 1+3; i <= n+3; i++)
	{
		dp[i] = max(stair[i] + stair[i - 1] + dp[n - 3], stair[i] + dp[n - 2]);
	}
	cout << dp[n+3];
}