#include <stdio.h>

// 문제
// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

// 출력
// 1부터 n까지 합을 출력한다.

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