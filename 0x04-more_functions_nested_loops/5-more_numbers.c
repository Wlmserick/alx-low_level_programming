#include "main.h"

/**
 * more_numbers - number factor
 * Return: no return
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 14; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b > 9)
			_putchar((b / 10) + 0);
			_putchar((b %1)0 + 0);
		}
	}
	_putchar('\n');
}
