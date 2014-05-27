﻿/* Упражнение 1.11.Как протестировать программу подсчета слов ? Какой ввод вероятнее всего обнаружит
ошибки, если они были допущены ? */

#include "stdafx.h"
#include <stdio.h> 

#define IN 1 /* внутри слова */ 
#define OUT 0 /* вне слова */ 

/* подсчет строк, слов и символов */
int main()
{
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
		printf("%d %d %d\n", nl, nw, nc);
	}
}