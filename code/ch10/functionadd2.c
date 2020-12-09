//file: functionadd2.c

#include <stdio.h>

//int add2(int a, int b) // 이 위치에도 가능

int main(void)
{
	int a = 3, b = 5;
	int add2(int a, int b); // = int add2(int, int)

	//위 함수원형이 없으면 함수호출 시 오류
	int sum = add2(a, b);

	printf("합 : %d\n", sum);


	return 0;
}

//함수 add2의 함수구현 또는 함수정의 부분
int add2(int a, int b)
{
	int sum = a + b;

	return (sum);
}

//위 main() 함수에서 호출이 없으므로 실행되지 않음
int findMin2(int x, int y)
{
	int min = x > y ? x : y;

	return (min);
}