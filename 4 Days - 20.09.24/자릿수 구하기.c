#include <stdio.h>

main()
{
	int num;

	int count = 0;

	printf("���ڸ� �Է��Ͽ��ּ���\n");

	scanf_s("%d", &num);

	// while�� = ���� �𸣴� �ݺ��� �� ��� ����Ѵ�.
	// ���� �𸣴� ������ �Է¹޴� ������ ���̸� �𸣱� �����̴�

	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	printf("\n�ڸ���: %d\n", count);
}