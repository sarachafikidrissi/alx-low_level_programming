#include "main.h"
/**
 * more_numbers - A function that prints 10 times numbers
 * Return: 0 is successful
 */
void more_numbers(void)
{
	int i = 0;
	int n;

	for (i = 0; i <= 9; i++)
	{
		n = 0;
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
		}
		_putchar('\n');
	}
}

