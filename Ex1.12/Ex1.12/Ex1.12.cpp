/* Упражнение 1.12. Напишите программу, которая печатает содержимое своего ввода, помещая по одному 
слову на каждой строке. */

#include "stdafx.h"
#include <stdio.h>
int main()
{
	int curr, prev = 0;

	while ((curr = getchar()) != EOF)
	{
		if (curr == ' ' || curr == '\n' || curr == '\t')
		{
			if (prev != ' ' || prev != '\n' || prev != '\t')
			{
				printf("%c\n", curr);
			}
		}
		else
			putchar(curr);
		prev = curr;
	}
}