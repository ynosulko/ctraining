/* ���������� 1.2. ��������, ��� ����������, ���� � ��������� ��������� ��������� printf �������� \�, ��� � 
� ������, �� �������� � �������������� ���� ������. */

#include "stdafx.h"
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Hello, World!\c");
	while (!_kbhit());
}