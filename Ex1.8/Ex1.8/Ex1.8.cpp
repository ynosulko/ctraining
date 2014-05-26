/* Упражнение 1.8. Напишите программу для подсчета пробелов, табуляций и новых строк. */

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int a, spaces, tabs, newLines;
	spaces = tabs = newLines = 0;
	
	while ((a = getchar()) != EOF) {
		if (a == ' ')
			++spaces;
		else if (a == '\t')
			++tabs;
		else if (a == '\n')
			++newLines;
	}
	printf("%d %d %d\n", spaces, tabs, newLines);
}