#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
int absoCompare(int num1, int num2); // ���� ���� ū ���� ��ȯ
int GetAbsoValue(int num); // ���� ������ ���� �� ��ȯ
int main()
{
	int num1, num2;
	printf("Insert two number: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d�� %d�� ���� ���� ū ���� : %d\n", num1, num2, absoCompare(num1, num2));
	
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