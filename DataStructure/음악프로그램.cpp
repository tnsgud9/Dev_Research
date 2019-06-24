#include <iostream>
#include <string>
#define N 1000


using namespace std;

int arr[N][N];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string tmp;
		cin >> tmp;
		for (int j = 1; j < n; j++)
		{
			if(j = 1)
			arr[j - 1][j] = 1;

		}
	}
}