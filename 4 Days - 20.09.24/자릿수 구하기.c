#include <stdio.h>

main()
{
	int num;

	int count = 0;

	printf("숫자를 입력하여주세요\n");

	scanf_s("%d", &num);

	// while문 = 끝을 모르는 반복을 할 경우 사용한다.
	// 끝을 모르는 이유는 입력받는 숫자의 길이를 모르기 때문이다

	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	printf("\n자릿수: %d\n", count);
}