// 지역 변수에 대해 알아보자
// 지역변수란 중괄호에 형성되는 영역을 뜻한다. 따라서 {}안에 선언되는 변수는 모두 지역 변수이다.
// 지역 변수는 해당 지역을 벗어나면 자동으로 그 값이 소멸이 된다
// 지역변수는 선언된 지역 내에서만 유효하기 때문에 선언된 지역이 다르면 이름이 같아도 문제가 되지 않는다.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int SimpleFunceOne(void)
{

	int num = 10; // 여기 이후부터는 num1이 유효하다
	num++;
	printf("SimpleFunceOne num: %d\n", num); // num이 유효한 마지막 문장이다
	return 0;

}

int SimpleFuncTwo(void)
{
	int num1 = 20; // 여기서 부터 num1 유효
	int num2 = 30;  // 여기서 부터 num2 유효
	num1++, num2--;
	printf("num1 &num2: %d %d\n", num1, num2); // num1, num2가 유효한 마지막 문장
	return 0;
}


int main()
{
	int num = 17;
	SimpleFunceOne(); // 여기서의 num은 위에서 선언이 되고 실행되고 저장이 되었으므로 10에서 ++ 한 결과인 11이 저장 된다
	SimpleFuncTwo(); // 여기서의 num 또한 마찬가지로 위에서 선언이 되고 반환 되어 왔으므로 위에서 계산 한 결과물이 출력 된다.
	printf("main num: %d\n", num); // 여기의 num의 경우 main함수의 num이기 때문에 17을 출력한다.
	return 0;
}
// 프로그래밍 언어 시간에 배웠던 내용이다. 복습을 해보자.
// 지역 변수는 stack에 할당이 된다
// 지역 변수는 해당 선언문이 실행 될때 메모리 공간에 할당 되었다가, 선언문이 전재하는 함수가 반환을 하면 / 종료를 하면 메모리 공간에서 소멸 된다.
// 지역 변수는 반복문이나 조건문에도 선언이 가능하다. 
// 매개 변수는 지역 변수이다! 그러나 지역변수는 매개 변수가 아니다. 왜냐하면 모든 지역 변수는 매개 변수가 아니기 때문이다. --> 프로그래밍 언어론 시간에 배운 내용이다.

// 프로그래밍 언어와 병행한 복습 코드 예제

int main()
{
	int num = 1;// 1
	
	if (num == 1)
	{
		int num = 7;//2
		num += 10;
		printf("if문 내 지역변수 num: %d\n", num); // 조건문안의 지역 변수인 2를 반환하기 때문에 if문 안의 지역 변수를 가지고 계산을 한다.
	}

	printf("main 함수 내 지역 변수 num: %d", num);// 1번의 값을 반환하는 출력이기 때문에 1번을 사용


	return 0;
}

//일반 적인 출력 값 : if문 내의 지역 변수 = 17  main함수 내의 지역 변수 = 11
// int num을 주석처리하여 출력하는 경우 if문 내의 지역 변수 = 11 main 함수 내의 지역 변수 = 11
