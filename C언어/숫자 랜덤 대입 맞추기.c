#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	int input;
	int cpu_input;
	int cpu_count = 1;

	srand(time(NULL));

	printf("<CPU ������ ���� ���� ���α׷�>\n");
	printf("0~9������ ���ڸ� �Է��ϼ���.\n >");

	main:
	scanf("%d", &input);

	while (1)
	{
		if (input < 0 || input >= 10)
		{
			printf("�߸��� ���� ���� �Է��߽��ϴ�. �ٽ� �Է��Ͻÿ�.\n >");
			goto main;
		}
		else
			break;
	}

	printf("�Է��Ͻ� �� : %d \n\n", input);
	cpu_input = rand() % 10;

	while (1)
	{
		if (input == cpu_input)
		{
			printf("\nCPU ���� �� : %d \t ���� �Է� �� : %d \n\n", input, cpu_input);
			printf("��� : �� ��ġ (CPU ���� ���� Ƚ�� : %d) \n", cpu_count);
			printf("���� ���� ���α׷� ����\n");
			break;
		}

		else
		{
			printf("CPU ���� �� : %d  ��ġ���� ����  \n", cpu_input);
			cpu_input = rand() % 10;
			cpu_count++;

		}
		
		
	}

	

}