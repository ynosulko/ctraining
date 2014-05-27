/* Упражнение 1.12. Напишите программу, которая печатает содержимое своего ввода, помещая по одному 
слову на каждой строке. */

#include "stdafx.h"
#include <stdio.h>
#define IN 1 // inside the word 
#define OUT 0 // outside the word


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
			putchar(input);
		}
	}
}