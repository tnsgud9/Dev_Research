#include <stdio.h>
// not working
void main()
{
	int *ptr;
	int input;

	printf("포인터 예제 코딩 \n");
	printf("포인터 값 입력\n >");
	scanf("%d", &input);

	printf("input 변수 값 : %d \n",input);
	printf("input 주소 값 : %d \n", &input);


	ptr = input; //*가 빠진다.
				 //ptr이 input을 가리킨다. ptr 주소값== input 주소값

	printf("ptr 변수 값 : %d \n", ptr);
	printf("ptr 주소 값 : %d \n", &ptr);

}