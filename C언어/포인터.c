#include <stdio.h>
// not working
void main()
{
	int *ptr;
	int input;

	printf("������ ���� �ڵ� \n");
	printf("������ �� �Է�\n >");
	scanf("%d", &input);

	printf("input ���� �� : %d \n",input);
	printf("input �ּ� �� : %d \n", &input);


	ptr = input; //*�� ������.
				 //ptr�� input�� ����Ų��. ptr �ּҰ�== input �ּҰ�

	printf("ptr ���� �� : %d \n", ptr);
	printf("ptr �ּ� �� : %d \n", &ptr);

}