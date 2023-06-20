#include "main.h"
/**
 * print_sign - A function that checks the sign of a number
 * @n: the number checked
 * Return: 1 if positive -1 if negative and 0 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	_putchar(',');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	_putchar(',');
	return (0);
}
else
{
	_putchar('-');
	_putchar(',');
	return (-1);
}
}
