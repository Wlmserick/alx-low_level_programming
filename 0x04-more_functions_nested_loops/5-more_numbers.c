#include "main.h"

/**
 * more_numbers - number factor
 * Return: no return
 */

void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 14; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			if (b >= 10)
			_putchar('1');
			_putchar(b %10 + '0');
		}
	}
	_putchar('\n');
}
