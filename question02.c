// ���� ȭ�� ��ȯ ���α׷�
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

double CelTOFah(double c) // �������� o ��ȯ ��o
{
	return 1.8*c + 32;
}

double FahToCel(double f) // ���� ���� o ��ȯ ��o
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

	// ��������� ����ϰ� � �Է��� ���ؼ� ��� ���� ��� �� ������ �ľ�

	if (sel == 1) // sel�� 1�� ��쿡 ���� �� ����
	{
		printf("insert the cel: ");
		scanf_s("%lf", &num);
		printf("CelToFah is %f", CelTOFah(num)); // CelToFah�� num�� ��ȯ��Ű�� ���� ()�ȿ� num�� �־ ��ȯ�� ������.
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

// �Լ��� ������ �ϰ� ����ϴ� ���� ������� ������.