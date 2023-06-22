#include "main.h"
/**
 * print_numbers - A function that prints numbers from 0 to 9
 * Return: 0 is successful
 */
void print_numbers(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
