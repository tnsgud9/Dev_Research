#include <stdio.h>
#include <vector>
struct abc
{
	int m;
	int f;
};

using namespace std;
void main()
{
	vector<abc> st(4);
	int stMax;
	scanf("%d", &stMax);

	for (int i = 1; i <= 3; i++)
	{
		scanf("%d", &st[i].m, &st[i].f);
	}

	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			if (i == j) continue;
			
		}
	}

}