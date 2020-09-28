#include <stdio.h>

main()
{
	int num;
	int result = 0;

	printf("정수를 입력해주세요\n");
	scanf_s("%d", &num);

	if (num < 10000)
	{
		while (num)
		{
			result += num % 10;	// % [나머지 연산자를 통해서 해당 자리의 수를 알아낸다]
			num = num / 10;		// 한 자리씩 날릴 수 있게 10씩 나누어 준다 ※ 자릿수를 추가하려면 0을 붙혀야한다. 즉, 자릿수 추가는 * 10, 자릿수 날리는거는 / 10
		}
		printf("자릿수들의 합은 %d입니다.", result);
	}
}