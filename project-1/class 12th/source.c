#include <stdio.h>

void Instantiate()
{
	printf("Instantiate\n");
}

int Factorial(int x)
{
	if (x == 0 || x == 1)
	{
		return 1;
	}
	else
	{
		return x * Factorial(x - 1);
	}
}

int main()
{
#pragma region �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� ������ �����Դϴ�.

	// ��ȯ���� �Ű� ������ ���� �Լ� �����͸� �����մϴ�.
	// void (*ptr) ();
	// int  (*iptr) (int);

	//// ptr ������ Instantiate �Լ��� �ּҸ� �����մϴ�.
	//// ptr = Instantiate;

	//// �Լ� �����͸� ȣ���մϴ�.
	//// ptr();

	//iptr = Factorial;

	//int number = 0;

	//scanf_s("%d", &number);

	//printf("%d�� Factorial : %d\n", number ,iptr(number));

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ���� ��ġ�ؾ� �ϸ�,
	// �Լ� �����͸� ����Ͽ� �������� �޸𸮸� �Ҵ��� �� �����ϴ�.
#pragma endregion

#pragma region ���� ������

	/*
	int data = 100;

	int * sptr = &data;

	int ** dptr = &sptr;

	printf("*sptr�� �� : %d\n", *sptr);
	printf("*dptr�� �� : %p\n", *dptr);

	**dptr = 999;

	printf("data�� �� : %d\n", data);
	*/

#pragma endregion

	return 0;
}