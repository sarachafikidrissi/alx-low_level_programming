#include "main.h"
/**
 * print_most_numbers - A function that print most numbers
 * Return: 0 is successful
 */
void print_most_numbers(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;

		_putchar(n + 48);
	}
	_putchar('\n');
}

