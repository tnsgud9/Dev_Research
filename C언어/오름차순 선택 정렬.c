//���� �������� ����
#include <stdio.h>

void main()
{
	int start;

	int data[100];

	printf("���� �������� ���� \n�� ���� ������ �Է� �������� �Է��ϼ���.-> ");
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

	printf("\n\n<���>\n");
	for (int a = 0; a < start; a++)
		printf("%d�� : %d\n", a + 1, data[a]);

}