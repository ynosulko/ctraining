/* Упражнение 1.13. Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко 
рисовать горизонтальными полосами. Рисование вертикальными полосами — более трудная задача. */

#include "stdafx.h"
#include <stdio.h>
#define IN 1 // inside the word 
#define OUT 0 // outside the word


int main()
{
	int input, state;
	state = OUT;
	const int maxWordLength = 20;
	int wordLength[maxWordLength];
	int currWordLength = 0;

	printf("Enter several words with different lengths bu no longer that 20 symbols and press Enter:\n");

	for (int i = 0; i < maxWordLength; i++)
		wordLength[i] = 0;

	while ((input = getchar()) != '\n') {
		if (input == ' ' || input == '\n' || input == '\t') {
			if (state == IN) {
				if (wordLength != 0)
					wordLength[currWordLength - 1]++;
				currWordLength = 0;
				state = OUT;
			}
		}
		else {
			state = IN;
			currWordLength++;
		}
	}

	for (int i = 0; i < maxWordLength; i++)
	{
		printf("%d ", i + 1);
		for (int j = 0; j < wordLength[i]; j++)
			printf("-");
		printf("\n");
	}
}