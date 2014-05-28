/* Упражнение 1.6. Убедитесь в том, что выражение getchar() != EOF получает значение 0 или 1 . */

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int a;
	int b;

	printf("Verifying \"getchar() != EOF\" returns \"1\" or \"0\".\nTo get \"1\" enter some character or digit and press Enter.\nTo get \"0\" press Ctrl+C.\n");

	a = getchar();
	b = a != EOF;

	if (b)
	{
		printf("%d\t%c\n", b, a);
	}
	else printf("%d\n", b);
}
