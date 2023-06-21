#include "main.h"
/**
 * print_times_table - prints times table for numbers from 0-14
 * @n: an input integer value
 * Return: void
 */
void print_times_table(int n)

int prod, mult, num;

if (n > 0 && n < 15)
{
num = 0;
while (num <= n)
{
_putchar(48);
mult = 1;
while (mult <= n)
{
_putchar(',');
_putchar(' ');

prod = num * multi;

if (prod <= 9)
{
	_putchar(' ');
}
if (prod <= 99)
{
	_putchar(' ');
}
if (prod >= 100)
{
	_putchar((prod / 100) + 49);
	_putchar((prod / 10) % 10 + 48);
}
else if (prod <= 98 && prod >= 10)
{
	_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
}
mult++;
}
_putchar('\n');
num++;
}
}
