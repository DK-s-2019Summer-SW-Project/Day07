// 3���� ������ ������ ���ڷ� ���� �޾Ƽ� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� ���� ���� ���� ��ȯ�ϴ� �Լ��� �����غ���. �׸��� �� �Լ����� ȣ���ϴ� ������ main�Լ��� �ۼ��� ����.
// ���� �������� ���信 ���� ���� , �Լ��� ����Ͽ� ���α׷��� ����� ���� ����
// ?d�� ���� ������ �̴�. ���׿����ڶ� ���̸� ���� ������ ����ϰ� �����̸� �ι�° ������ ���, �ι�° ���ǵ� ���� �ƴ� ��� ������ ������ ���!
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
int MaxNum(int n1, int n2, int n3)// Max number�� �Ǻ��ϴ� ���α׷��̴�. --> ���⼭�� (void)�� ������� �ʾ����Ƿ� ���ڸ� �������� �ʴ´�.
{
	if (n1 > n2)// ���� n1>n2�� ��
		return(n1 > n3) ? n1 : n3; // n1>n3�� ���̸� n1�� ����ϰ� �ƴϸ� n3�� ����ϴ� ������ ���� �ض�.
	else // n1>n2�� �ƴ� ��� 
		return (n2 > n3) ? n2 : n3; // n2>n3�� ���̸� n2�� ����ϰ� n2>n3�� ������ ��� n3�� ��� �ض�!
}

int Minnum(int n1, int n2, int n3)
{
	if (n1 < n2)
	{
		return (n1 < n3) ? n1 : n3;
	}
	else
		return (n2 < n3) ? n2 : n3;
}

int main()
{
	int num1, num2, num3;
	printf("Insert the number: ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("The Biggest number is : %d\n",MaxNum(num1,num2,num3));
	printf("The smallest number is : %d\n", Minnum(num1, num2,num3));
	return 0;
}