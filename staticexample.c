// static변수의 활용
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
//int total = 0;

int Addtotal(int num)
{
	static int total = 0;
	total += num;
	return total;
}

int main()
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("insert the number%d\n", i + 1);
		scanf_s("%d", &num);
		printf("누적: %d\n", Addtotal(num));
	}


	return 0;
}