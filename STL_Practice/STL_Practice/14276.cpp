#include <stdio.h>
#include <vector>

using namespace std;
void main()
{
	int in;
	scanf("%d", &in);
	string a;
	for (int i = 0; i < in; i++)
	{
		scanf("%s", a);

		for (int j = a.size(); j >= 0; j--)
		{
			if (j % 2 == 0 && a[j]*2>=10) //���ǰ� �Ҿ���
			{
				a[j] = a[j] * 2;

			}
		}


	}
}