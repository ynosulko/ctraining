/* Упражнение 1.3. Усовершенствуйте программу преобразования температур таким образом, чтобы над 
таблицей она печатала заголовок. */

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("fahr celsius\n"); /* Table header */

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	while (!_kbhit());
}
