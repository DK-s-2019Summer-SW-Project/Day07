// recursive function --> �ڱ� �ڽ��� �ٽ� ȣ���ϴ� �Լ��̴�!!

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
// ��� �Լ��� ��� �Ϸ� ���� ���� �Լ��� �� ȣ�� �� �� �ִ�.
// ���� ���� Ǯ� ������ �Ѵٸ� Recursive �Լ��� �����ϴ� �߰��� �ٽ� recursive �Լ��� ȣ���� �ȴٸ� recursive �Լ��� ���纻�� �ϳ� �� ���� ���纻�� �����ϰ� �ȴ�. 
// ��������� ȣ���� �̷������ �̷����� �ִ� Recursive �Լ��� 0�� ���� �Ǹ鼭 '����� Ż�� ����'�� ���� �Ǿ� �Լ��� ��ȯ�ϱ� �����Ѵ�. 
// ��� �Լ����� Ż�������� �ſ� �߿��ϴ�.