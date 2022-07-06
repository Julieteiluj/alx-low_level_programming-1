#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i == 0 && j == 0) || (j == 0))
			{
				_putchar('0');
			}
			else if (i * j > n)
			{
				_putchar(' ');
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + i * j);
			}
			j == n ? _putchar('\n') : _putchar(',');
		}
	}
}
