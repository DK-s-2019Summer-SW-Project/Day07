// 팩토리얼을 재귀 함수를 이용하여 선언을 해보자.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int Factroial(int n)
{
	if (n == 0)
		return 1;
	else
		return n*Factroial(n - 1); // 여기서 재귀적인 함수 사용
}


int main()
{
	printf("1! = %d", Factroial(1));

	return 0;
}