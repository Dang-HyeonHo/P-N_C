#include <stdio.h>

// ����
// n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.

// ���
// 1���� n���� ���� ����Ѵ�.

main()
{
	int num, sum = 0;

	scanf_s("%d", &num);

	if (1 <= num && num <= 10000)
	{
		for (int number = 1; number <= num; number++)
			sum += number;
		printf("%d", sum);
	}

	return 0;
}