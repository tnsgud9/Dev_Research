#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<float> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}


	sort(arr.begin(), arr.end());
	cout.precision(3);
	for (int i = 0; i < 7; i++)
		cout<<fixed << arr[i] << endl;
}