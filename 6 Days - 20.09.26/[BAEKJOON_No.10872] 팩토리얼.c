#include <stdio.h>

// ����
// 0���� ũ�ų� ���� ���� N�� �־�����. �̶�, N!�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// ù° �ٿ� ���� N(0 �� N �� 12)�� �־�����.

// ���
// ù° �ٿ� N!�� ����Ѵ�.

main()
{
	int number, result = 1;

	scanf_s("%d", &number);

	if (0 <= number && number <= 12)
	{
		for (number; number >= 1; number--)
		{
			result *= number;
		}
	}

	printf("%d", result);

	return 0;
}