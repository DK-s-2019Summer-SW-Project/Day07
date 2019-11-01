// 전역 변수, static변수, register변수
// 전역 변수란 이르 그대로 어디에서든지 접근이 가능한 변수이다. 지역변수와는 달리 {}안에 범위가 한정이 되어 있지가 않다.

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

void Add(int val);
int num; // 전역 변수는 기본 0으로 초기화 한다.

int main()
{
	printf("num: %d\n", num);
	Add(3);
	printf("num: %d\n", num);
	num++; // 전역 변수의 값이 1 증가 한다.
	printf("num: %d\n", num);
	return 0;
}

void Add(int val)
{
	num += val; // 전역 변수 num의 값 val만큼 증가 한다.
}


// 전역 변수의 특징
// 프로그램의 시작과 동시에 메모리 공간에 할당되어 종료 시까지 존재한다
// 별도의 값으로 초기화하지 않으면 0으로 초기화된다.
// 프로그램 전체 영역 어디서든 접근이 가능하다.