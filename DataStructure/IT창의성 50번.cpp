#include <stdio.h>

int g(int n)
{
	return ((n*n) + 1) % 9;
}

int f(int x, int y)
{
	int a, b;
	a = g(x);
	b = g(g(y));
	if (a == b)
		return 1;
	return 1 + f(a, b);
}

int main()
{
	int i, s = 0;
	for (i = 0; i < 9; i++)
	{
		s += f(i, i);

	}

	printf("%d\n", s);
	return 0;
}