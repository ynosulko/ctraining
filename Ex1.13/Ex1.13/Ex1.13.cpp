/* Упражнение 1.13. Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко 
рисовать горизонтальными полосами. Рисование вертикальными полосами — более трудная задача. */

#include "stdafx.h"
#include <stdio.h>
#define IN 1 /* внутри слова */ 
#define OUT 0 /* вне слова */


int main()
{
	int input, state;

	state = OUT;

	while ((input = getchar()) != EOF) {
		if (input == ' ' || input == '\n' || input == '\t') {
			if (state == IN) {
				putchar('\n');
				state = OUT;
			}
		}
		else {
			state = IN;
			putchar('-');
		}
	}
}