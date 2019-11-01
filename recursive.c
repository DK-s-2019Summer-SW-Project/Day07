// recursive function --> 자기 자신을 다시 호출하는 함수이다!!

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

void Recursive(int num)
{
	if (num <= 0)
		return;
	printf("Recursive call!%d", num);
	Recursive(num - 1);
}

int main()
{
	Recursive(3);

	return 0;
}
// 재귀 함수의 경우 완료 되지 않은 함수를 재 호출 할 수 있다.
// 위의 말을 풀어서 설명을 한다면 Recursive 함수를 실행하는 중간에 다시 recursive 함수가 호출이 된다면 recursive 함수의 복사본을 하나 더 만들어서 복사본을 실행하게 된다. 
// 재귀적으로 호출이 이루어지고 이뤄지고 있는 Recursive 함수에 0이 전달 되면서 '재귀의 탈출 조건'이 성립 되어 함수가 반환하기 시작한다. 
// 재귀 함수에는 탈출조건이 매우 중요하다.