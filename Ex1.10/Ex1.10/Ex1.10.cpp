/* Упражнение 1.10. Напишите программу, копирующую вводимые символы в выходной поток с заменой
символа табуляции на \t, символа забоя на \b и каждой обратной наклонной черты на \\. Это сделает
видимыми все символы табуляции и забоя. */

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int input = 0;

	while ((input = getchar()) != EOF)
	if (input == '\t')
		printf("\\t");
	else if (input == '\b')
		printf("\\b");
	else if (input == '\\')
		printf("\\\\");
	else putchar(input);
}