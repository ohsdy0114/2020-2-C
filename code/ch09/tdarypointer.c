//file: tdarypointer.c

#include <stdio.h>

int main(void)
{
	int a[] = { 8, 2, 8, 1, 3 };
	int* p = a;

	printf("%2d, %2d\n", *(p + 1), *(p + 4)); //�迭 ���� a[1], a[4] ����
	printf("%2d, %2d\n", p[1], p[4]); //�迭 ���� a[1], a[4] ����
	printf("sizeof(a) = %d, sizeof(p) = %d\n", sizeof(a), sizeof(p));
	printf("%2d\n", *++p); //�迭�� �� ��° ���� ����
	//printf("%2d\n", *++a); //���� �߻�

	int ary[][4] = { 5, 7, 6, 2, 7, 8, 1, 3 }; //2�� 4�� �迭
	int(*ptr)[4] = ary; //���� 4�� �迭�� ����Ű�� ������
	//int *ptr[4] = ary; ������ �迭

	printf("%2d, %2d\n", **ary, **ptr++); 
	printf("%2d, %2d\n", **(ary + 1), **(ptr++));

	ptr = ary; //�ٽ� ptr�� �迭 ary�� ó���� ����Ű����
	printf("%2d, %2d\n", *(ary[1] + 1), *(ptr[1] + 1));
	printf("%2d, %2d\n", *(*(ary + 1) + 3), *(*(ptr + 1) + 3));
	printf("sizeof(ary) = %d, sizeof(ptr) = %d\n", sizeof(ary), sizeof(ptr));




	return 0;
}