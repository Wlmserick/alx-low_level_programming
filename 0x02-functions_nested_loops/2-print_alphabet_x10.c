#include "main.h"
/**
*print_alphabet_x10 - print all alphabets ten times
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i  <= 10; i++)
	{
		for (i = 97; i <= 122; i++)
			_putchar(i);
	}
	_putchar('\n');
}

