#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabets in lowercase
 * Return Always 0
 */
void print_alphabet_x10(void)
{
	int line = 0;

	while (line < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	line++;
	}
}
