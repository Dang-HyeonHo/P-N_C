#include <stdio.h>

// ����
// N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��� ���Ŀ� ���缭 ����ϸ� �ȴ�.

// �Է�
// ù° �ٿ� N�� �־�����. N�� 1���� ũ�ų� ����, 9���� �۰ų� ����.

// ���
// ������İ� ���� N*1���� N*9���� ����Ѵ�.

main()
{
	int input;

	scanf_s("%d", &input);

	if (1 <= input && input <= 9)
	{
		for (int num = 1; num <= 9; num++)
		{
			int result = input * num;
			printf("%d * %d = %d\n", input, num, result);
		}
	}

	return 0;
}