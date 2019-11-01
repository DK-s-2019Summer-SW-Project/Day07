// 피보나치 수열의 정의

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

void ShowFiboserise(int num)
{
	if (num == 1)
	{
		int f1 = 0, f2 = 1, f3 = 2, i = 0;
		if (num == 1)
			printf("%d", f1);
		else
			printf("%d %d", f1, f2);
		for (i = 0; i < num - 2; i++)
		
			f3 = f1 + f2;
		    printf(" %d\n", f3);
			f1 = f2;
			f2 = f3;
			
	}

}


int main()
{
	int n;
	printf("insert the Fibo number that you want: ");
	scanf_s("%d", &n);
	if (n < 1)
	{
		printf("insert the number that is bigger than 1\n");
		return -1;
	}
	
	ShowFiboserise(n);
	return 0;
}