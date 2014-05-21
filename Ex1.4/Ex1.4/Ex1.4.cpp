/* Упражнение 1.4. Напишите программу, которая будет печатать таблицу соответствия температур по Цельсию 
температурам по Фаренгейту. */

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("celsius fahr\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = 9/5 * celsius + 32;  // T = 9/5C+32
		printf("%d\t%d\n", celsius, fahr);
		celsius = celsius + step;
	}

	while (!_kbhit());
}
