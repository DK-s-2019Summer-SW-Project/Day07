// ���丮���� ��� �Լ��� �̿��Ͽ� ������ �غ���.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int Factroial(int n)
{
	if (n == 0)
		return 1;
	else
		return n*Factroial(n - 1); // ���⼭ ������� �Լ� ���
}


int main()
{
	printf("1! = %d", Factroial(1));

	return 0;
}