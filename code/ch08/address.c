//file : address.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input; 

	printf("���� �Է�: ");
	scanf("%d", &input);
	printf("�Է°�: %d\n", input);
	printf("�ּҰ�: %u(10����), %p(16����)\n", (unsigned)&input, &input);
	printf("�ּҰ�: %d(10����), %#X(16����)\n", (int)&input, (int)&input);
	printf("�ּҰ� ũ��: %d\n", sizeof(&input));

	//printf("�ּ� �� ũ�� : %d\n", sizeof(char*));
	//printf("�ּ� �� ũ�� : %d\n", sizeof(int*));

	return 0;
}