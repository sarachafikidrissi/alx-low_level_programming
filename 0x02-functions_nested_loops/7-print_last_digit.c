#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 *@n: the number that contains the last digit
 *Return: 0
 */
int print_last_digit(int n)
{
int m;
m = n % 10;

if (m < 0)
{
	m = m * -1;
}
_putchar(m);
return (m);
}
