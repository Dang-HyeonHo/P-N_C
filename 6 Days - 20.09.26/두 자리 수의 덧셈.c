#include <stdio.h>

// ����
// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// ù° �ٿ� A�� B�� �־�����. (0 < A, B < 10)

// ���
// ù° �ٿ� A+B�� ����Ѵ�.

main()
{
	int first_num, second_num;

	scanf_s("%d%d", &first_num, &second_num);

	if (0 < first_num && second_num < 10)
		printf("%d", first_num + second_num);

	return 0;
}