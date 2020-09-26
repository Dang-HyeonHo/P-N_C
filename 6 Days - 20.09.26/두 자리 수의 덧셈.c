#include <stdio.h>

// 문제
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

// 출력
// 첫째 줄에 A+B를 출력한다.

main()
{
	int first_num, second_num;

	scanf_s("%d%d", &first_num, &second_num);

	if (0 < first_num && second_num < 10)
		printf("%d", first_num + second_num);

	return 0;
}