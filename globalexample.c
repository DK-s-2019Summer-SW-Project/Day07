#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
int Add(int val);
int num = 1;

int main()
{

	int num = 5;
	printf("num: %d\n", Add(3)); // ���⼭�� ��� �ϴ� num�� 5�� �ʱ�ȭ�� �Ǿ� �����Ƿη� ����� �Ѵ�. Add(3)�̹Ƿ� ���� Add �Լ��� �Ѿ�� ��� �� ���� �̰��� ��ȯ �Ѵ�.
	printf("num: %d\n", num + 9); // ���⼭�� ����ϰ� num =5���� ����� �Ѵ�
	return 0;
}

int Add(int val)
{
	int num = 9; // ���⼭�� num�� ���� ������ ����ϹǷ� num = 9�� ����Ѵ�. �� ���� � ������� num�� ���� �Ǿ��� ���� ��� ���� �ʱ�ȭ �� num�� ����Ѵ�. 
	num += val;
	return num;

}

// ���α׷��� ���� ù ���� �� �ߴ� �����̴�. ��� ����.
// ���� ���� ���� ���� ������ ��� �� ��� �����Ϸ��� ��� ������ �����ؾ� �� �� �𸣰� �Ǿ� �����Ͱ� ȥ�� �Ǿ� ������. == �̰��� spagatii �ڵ��� �Ѵ�. ���!