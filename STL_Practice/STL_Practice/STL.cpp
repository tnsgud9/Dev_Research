#include <iostream>
#include <vector>

using namespace std;


int main()
{
	freopen("input.txt", "r", stdin);
	vector<int> in(10);
	int count = 0;

	for (int i = 0; i < 8; i++)
		cin >> in[i];

	for (int i = 1; i < 8; i++)
	{
		if (in[i - 1] < in[i])
		{
			count++;
		}
		else if (in[i - 1] > in[i])
		{
			count--;
		}
	}

	if (count == 7)
		printf("ascending");
	else if (count == -7)
	{

		printf("descending");
	}
	else
		printf("mixed");


	return 0;

}


