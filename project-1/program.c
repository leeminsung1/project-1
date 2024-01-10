#include <stdio.h>


enum Unit
{
	// �������� ���� ���� �������� ������ ���� ���� �ִ� ����
	// 0�̶�� ������ �����˴ϴ�.
	SKELETON,
	SLIME = 15,
	GOBLIN

	// ���������� �߰��� �ִ� ���� �����ϰ� �Ǹ� �״����� �ִ�
	// ������ �ִ� ������ +1�� �˴ϴ�.
};

void CreateUnit(enum Unit unit)
{
	switch (unit)
	{
	case SKELETON: printf("Create Skeleton\n");
		break;
	case SLIME: printf("Create Slime\n");
		break;
	case GOBLIN: printf("Create Goblin\n");
		break;
	default:
		break;

	}
}

int main()
{
#pragma region ������ �迭

	//const char* string[3];

	//// 8byte 8 byte 8 byte
	//// [   ] [   ] [   ]

	//// " Blue" "Black" "Green"

	//string[0] = "Blue";
	//string[1] = "Black";
	//string[2] = "Green";

	//for (int i = 0; i < 3; i++)
	//{
	//	// printf("string[%d] : %p\n", i, string[i]);
	//	printf("string[%d] : %s\n", i, string[i]);
	//}

#pragma endregion

#pragma region ������

	CreateUnit(SKELETON);
	CreateUnit(SLIME);

#pragma endregion

#pragma region ��� ������
	// �̹� ������ �޸� ������ ����Ű�� �������Դϴ�.

	//int * ptr = malloc(sizeof(4));

	//*ptr = 999;

	//printf("*ptr�� �� : %d\n" , *ptr);

	//free(ptr);

	//printf("*ptr�� �� : %d\n" , *ptr);

	//ptr = NULL;

	//if (ptr == NULL)
	//{
	//	int * ptr = malloc(sizeof(4));
	//}

	//*ptr = 235;

	//printf("*ptr�� ��  %d\n" , *ptr);

	//free(ptr);



#pragma endregion


	return 0;
}