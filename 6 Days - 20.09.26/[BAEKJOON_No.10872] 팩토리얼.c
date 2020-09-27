#include <stdio.h>

// 문제
// 0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 정수 N(0 ≤ N ≤ 12)가 주어진다.

// 출력
// 첫째 줄에 N!을 출력한다.

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