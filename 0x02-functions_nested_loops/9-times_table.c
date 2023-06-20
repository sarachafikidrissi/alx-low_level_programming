#include "main.h"
/**
 * times_table - a function that prints the 9 times table
 * Return: 9 times table
 */
void times_table(void)
{
int x, y, z, u, d;
x = 0;
while (x <= 9)
{
	y = 0;
	while (y <= 9)
	{
		z = x * y
		if (z > 9)
		{
		u = z % 10;
		d = (z - u) / 10;
		_putchar(44);
		_putchar(32);
		}
		else
		{
		if (y != 0)
		{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		}
		_putchar(z + '0');
		}
		_putchar('\n');
	y++;
	}
x++;
}
}
