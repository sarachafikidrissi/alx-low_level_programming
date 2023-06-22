#include "main.h"
/**
 * print_times_table - prints times table for numbers from 0-14
 * @n: an input integer value
 * Return: void
 */
void print_times_table(int n)
{
int i, j, result;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
	for (j = 0; j <= n; j++)
	{
		result = i * j;
		if (j == 0)
			_putchar('0');
		else if (result < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(result + 48);
		}
		else if (result < 100)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(result / 10 + 48);
			_putchar(result % 10 + 48);
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(result / 100 + 48);
			_putchar((result / 100) % 10 + 48);
			_putchar(result % 10 + 48);
		}
	}
	_putchar('\n');
}
}
}
