#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main()
{


	int N;
	int i;
	cin >> N;
	vector<int> in(N + 2);
	vector <int > arr(N + 2);

	for (int i = 1; i <= N; i++)
		cin >> in[i];

	arr = sort(in);




}