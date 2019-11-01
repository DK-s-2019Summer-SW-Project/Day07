// 섭씨 화씨 변환 프로그램
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

double CelTOFah(double c) // 인자전달 o 반환 값o
{
	return 1.8*c + 32;
}

double FahToCel(double f) // 인자 전달 o 반환 값o
{
	return(f - 32) / 1.8;
}

int main()
{
	int sel;
	double num;
	printf("insert 1= Cel to Fah\n insert 2 =Fah to sel\n ");
	printf("select>>");
	scanf_s("%d", &sel);

	// 여기까지는 평범하게 어떤 입력을 통해서 어떻게 값을 계산 할 것인지 파악

	if (sel == 1) // sel이 1일 경우에 실행 할 문장
	{
		printf("insert the cel: ");
		scanf_s("%lf", &num);
		printf("CelToFah is %f", CelTOFah(num)); // CelToFah에 num을 반환시키기 위해 ()안에 num을 넣어서 반환을 실행함.
	}
	else if (sel == 2)
	{
		printf("Insert the Fah: ");
		scanf_s("%lf", &num);
		printf("FahTOCel is %lf", FahToCel(num));
	}
	else
		printf("the number error please try again\n");
		return 0; 
}

// 함수를 선언을 하고 사용하는 법을 어느정도 이해함.