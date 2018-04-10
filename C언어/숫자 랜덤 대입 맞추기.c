#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	int input;
	int cpu_input;
	int cpu_count = 1;

	srand(time(NULL));

	printf("<CPU 무작위 숫자 대입 프로그램>\n");
	printf("0~9사이의 숫자를 입력하세요.\n >");

	main:
	scanf("%d", &input);

	while (1)
	{
		if (input < 0 || input >= 10)
		{
			printf("잘못된 범위 값을 입력했습니다. 다시 입력하시오.\n >");
			goto main;
		}
		else
			break;
	}

	printf("입력하신 값 : %d \n\n", input);
	cpu_input = rand() % 10;

	while (1)
	{
		if (input == cpu_input)
		{
			printf("\nCPU 랜덤 값 : %d \t 유저 입력 값 : %d \n\n", input, cpu_input);
			printf("결과 : 값 일치 (CPU 랜덤 대입 횟수 : %d) \n", cpu_count);
			printf("랜덤 대입 프로그램 종료\n");
			break;
		}

		else
		{
			printf("CPU 랜덤 값 : %d  일치하지 않음  \n", cpu_input);
			cpu_input = rand() % 10;
			cpu_count++;

		}
		
		
	}

	

}