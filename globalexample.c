#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
int Add(int val);
int num = 1;

int main()
{

	int num = 5;
	printf("num: %d\n", Add(3)); // 여기서의 경우 일단 num이 5로 초기화가 되어 있으므로로 계산을 한다. Add(3)이므로 밑의 Add 함수로 넘어가서 계산 한 값을 이곳에 반환 한다.
	printf("num: %d\n", num + 9); // 여기서는 평범하게 num =5으로 계산을 한다
	return 0;
}

int Add(int val)
{
	int num = 9; // 여기서는 num이 지역 변수를 사용하므로 num = 9로 계산한다. 즉 위에 어떤 방식으로 num이 선언 되었던 간에 상관 없이 초기화 된 num을 사용한다. 
	num += val;
	return num;

}

// 프로그래밍 언어론 첫 강의 떄 했던 내용이다. 기억 하자.
// 또한 많은 양의 전역 변수를 사용 할 경우 컴파일러가 어느 변수를 참조해야 할 지 모르게 되어 데이터가 혼잡 되어 버린다. == 이것을 spagatii 코드라고 한다. 기억!