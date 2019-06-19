#include <iostream>
#include <vector>
using namespace std;

void main()
{
	int n;
	cin >> n;
	vector<int> score(n);

	int maxScore=0, minScore=1001;

	for (int i = 0; i < n; i++)
	{
		int s;
		cin >> s;
		if (maxScore < s)
			maxScore = s;
		if (minScore < s)
			minScore = s;



	}

	cout << maxScore - minScore;
}