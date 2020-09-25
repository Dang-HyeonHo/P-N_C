#include <stdio.h>

main()
{
	// 4년에 한 번씩 윤년이다
	// 100년째 되는 해는 윤년이 아니다 = input % 100 != 0
	// 400년쨰 되는 해는 윤년이다 = input % 400 == 0

	int years;

	printf("연도를 입력하여주세요");

	scanf_s("%d", &years);

	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)	// 윤년일 경우 출력
		printf("입력한 년도는 윤년입니다.");
	else
		printf("입력한 년도는 윤년이 아닙니다.");				// 윤년이 아닐 경우 출력
}