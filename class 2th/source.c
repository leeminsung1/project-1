#include <stdio.h>

void main()
{
#pragma region ���
	//// ���α׷��� ����Ǵ� ���� �� �̻� ���� ������
	//// �� ���� �޸� �����Դϴ�.
	//
	//const int data = 100;
	//
	//// ����� �޸� ������ �����ϴ� ���ÿ� �ʱ�ȭ�ؾ� �ϸ�,
	////�� �� ����� ���� �� �̻� ������ �� �����ϴ�.
	//
	//// ex) data = 999;
	//
	//// ����� ��� �޸� ������ ������ ���� ���� �����
	//// ���ͷ� ������ �ϸ�, �޸� ������ ������ �ִ� �����
	//// �ɺ��� ������ �մϴ�.
	//
	//const float pi = 3.14f;
	//
	//printf("pi�� ���� : %f\n", pi);
	//
	//// "%f" : �Ǽ��� ǥ���ϴ� ���� ������
	//
	//// ������ ���ͷ� ����� �����ϴ� ���� ������ ũ�� ������
	//// int �ڷ������� ����Ǹ�, �Ǽ��� ���ͷ� ����� double
	//// �ڷ������� ����˴ϴ�.
	//
	//float value = 3.1415926535;
	//
	//printf("value�� �� : %.10lf\n", value);
	//
	//// "%lf" : �Ǽ�(double)�� ǥ���ϴ� ���� ������
	//
	//// printf( ) �Լ��� �Ҽ��� ����� �� 4 byte ũ���� �Ǽ���
	//// �ڷ����� �Ҽ��� ���� 6�ڸ������� ǥ���ϸ�, 8 byte ũ����
	//// �Ǽ��� �ڷ����� �Ҽ��� ���� 15�ڸ������� ǥ���մϴ�.

#pragma endregion

#pragma region ��Ʈ
	// �����͸� ��Ÿ���� �ּ��� �����̸�, 0�Ǵ� 1�� ��������
	// ���� ����� �����ϴ� �����Դϴ�.

	/*char character = 10;*/

	// 10 ������ 2������ ��ȯ�ϴ� ����

	// 10������ 1�� �� ������ 2�� ��� ������ �� ����
	// ���� ��ġ�� ������ ���� �Ʒ����� ���� �������
	// �������ݴϴ�.

	// �޸��� ����
	// 10 ----> [0] [0] [0] [0] [1] [0] [1] [0]

	// �޸𸮴� ��Ʈ ������ �����͸� ������ �� ������,
	// 1���� ��Ʈ���� 0�Ǵ� 1�� ���� ������ �� �ֽ��ϴ�.

	// <2 ������ 10 ������ ��ȯ�ϴ� ����>
	// 1 byte�� 2 ������ ����� ���� 2�� �������� ��Ÿ���ϴ�.

	// ������ ��Ʈ�� 1�� �ִٸ� 1�� 2�� ������ ��ġ�� ����� ����
	// ������ ��Ʈ�� ��� ���Ͽ� 10 ������ ��Ÿ���ϴ�.

#pragma endregion

#pragma region ��Ʈ ������
	// ��Ʈ ������ ���� ������ �����ϱ� ����
	// ����ϴ� �������Դϴ�.

	// <AND ������>
	// �� ���� �ǿ����ڰ� ��� 1�̸� 1�� ��ȯ�ϴ� �������Դϴ�.
	//char x = 10;  // 0000 1010
	//char y = 6;  // 0000 0110

	//printf("x�� y�� AND ������ ��� : %d\n", x & y); // 2

	//// <OR ������>
	//// �� ���� �ǿ����� �߿� �ϳ��� 1�� �ִٸ� 1�� ��ȯ�ϴ� �������Դϴ�.
	//printf("x�� y�� OR ������ ��� : %d\n", x | y); // 14


	//// <XOR ������>
	//// �� ���� �ǿ����ڰ� ���� ������ 0�� ��ȯ�ϰ�, ���δٸ���
	//// 1�� ��ȯ�ϴ� �������Դϴ�.
	//printf("x�� y�� XOr ����ȯ ��� : %d\n", x ^ y); // 12

	//// <NOT ������>
	//// �� ���� ��Ʈ�� �����ϴ� �������Դϴ�.
	//printf("x ������ NOT ������ ��� : %d\n", ~x); // 1111 0101

	//// ù ��° ��Ʈ�� ��ȣ�� ��Ÿ����, ù ��° ��Ʈ�� 1�� �ִٸ� ����
	//// ������ �˴ϴ�.

#pragma endregion
}