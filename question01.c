// 3개의 정수를 정수를 인자로 전달 받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를 정의해보자. 그리고 이 함수들은 호출하는 적절한 main함수도 작성해 보자.
// 삼항 연산자의 개념에 대해 공부 , 함수를 사용하여 프로그램을 만드는 것을 공부
// ?d는 삼항 연산자 이다. 삼항연산자란 참이면 원래 조건을 출력하고 거짓이면 두번째 조건을 출력, 두번째 조건도 참이 아닐 경우 마지막 조건을 출력!
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
int MaxNum(int n1, int n2, int n3)// Max number를 판별하는 프로그램이다. --> 여기서는 (void)를 사용하지 않았으므로 인자를 전달하지 않는다.
{
	if (n1 > n2)// 만약 n1>n2일 때
		return(n1 > n3) ? n1 : n3; // n1>n3이 참이면 n1을 출력하고 아니면 n3를 출력하는 값으로 리턴 해라.
	else // n1>n2가 아닐 경우 
		return (n2 > n3) ? n2 : n3; // n2>n3가 참이면 n2를 출력하고 n2>n3가 거짓일 경우 n3를 출력 해라!
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