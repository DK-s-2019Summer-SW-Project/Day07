#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
int absoCompare(int num1, int num2); // 절대 값이 큰 정수 반환
int GetAbsoValue(int num); // 전달 인자의 절대 값 반환
int main()
{
	int num1, num2;
	printf("Insert two number: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d와 %d중 절대 값이 큰 정수 : %d\n", num1, num2, absoCompare(num1, num2));
	
	return 0;
}

int absocompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2))

	{
		return num1;
	}
	else
		return num2;
}

int GetAbsoValue(int num)
{

	if (num < 0)
		return num*(-1);
	else
		return num;
}