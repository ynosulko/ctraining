/* ”пражнение 1.3. ”совершенствуйте программу преобразовани€ температур таким образом, чтобы над 
таблицей она печатала заголовок. */

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* нижн€€ граница таблицы температур */
	upper = 300; /* верхн€€ граница */
	step = 20; /* шаг */

	printf("fahr celsius\n"); /* заголовки таблицы */

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	while (!_kbhit());
}