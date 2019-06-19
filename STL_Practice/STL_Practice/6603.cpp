#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v = { 1,2,3,4,5,6 };

	while (1) {
		int k;
		cin >> k;
		if (k == 0) break;
		vector<int> v(k);
		for (int i = 0; i < k; i++)
			cin >> v[i];
		vector<int> check(k , 1);
		for (int i = 0; i < 6; i++) check[i] = 0;
	}
}