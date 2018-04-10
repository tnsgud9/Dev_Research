//선택 오름차순 정렬
#include <stdio.h>

void main()
{
	int start;

	int data[100];

	printf("선택 오름차순 정렬 \n몇 개의 정수를 입력 받을건지 입력하세요.-> ");
	scanf("%d", &start);

	for (int a = 0; a < start; a++)
	{
		printf("-> ");
		scanf("%d", &data[a]);

	}
	for(int a=0;a<start;a++)
		for(int b=0;b<start;b++)
			if (data[a] < data[b])
			{
				int temp = data[a];
				data[a] = data[b];
				data[b] = temp;
			}

	printf("\n\n<결과>\n");
	for (int a = 0; a < start; a++)
		printf("%d번 : %d\n", a + 1, data[a]);

}