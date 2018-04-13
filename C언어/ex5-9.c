#include <stdio.h>

void main()
{
	int in;

	int result = 0;

	scanf("%d", &in);

	for (int a = 1; a < in; a++)
	{
		printf("%d + ", a);
		result += a;
	}
	result += in;
	printf("%d = %d", in, result);

}