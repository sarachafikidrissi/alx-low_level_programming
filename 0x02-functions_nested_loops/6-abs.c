#include "main.h"
/**
 * _abs - A fucntion that computes the absolute value of a number
 * @abs: the absolute value
 * Return: 0
 */
int _abs(int)
{
int n;
int abs;

if (n > 0)
{
	abs = n * 1;
	_putchar(abs);
}
else if (n < 0)
{
	abs = n * -1;
	_putchar(abs);
}
else
{
	_putchar('0');
}
}
