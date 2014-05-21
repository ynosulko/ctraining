/* ”пражнение 1.2. ¬ы€сните, что произойдет, если в строковую константу аргумента printf вставить \с, где с 
Ч символ, не вход€щий в представленный выше список. */

#include "stdafx.h"
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Hello, World!\c");
	while (!_kbhit());
}