/* Упражнение 1.9. Напишите программу, копирующую символы ввода в выходной поток и заменяющую 
стоящие подряд пробелы на один пробел. */

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int curr, prev = 0;

	while ((curr = getchar()) != EOF)
	{
		if (curr == ' ')
		{
			if (prev != ' ')
				putchar(curr);
		}
		else
			putchar(curr);
		prev = curr;
	}
}