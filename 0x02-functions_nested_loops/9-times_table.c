#include "main.h"
/**
 * times_table - a function that prints the 9 times table
 * Return: 9 times table
 */
void times_table(void)
{
int n = 0;

while (n <= 81)
{
	int count = 0;

	while (count <= 9)
	{
		_putchar(n + '0');
		if (count != 9)
		{
		_putchar(',');
		_putchar(' ');
		}
		count++;
	}
	_putchar('\n');
	if (count == 0)
	{
	n = 0;
	}
	n++;
}
}
