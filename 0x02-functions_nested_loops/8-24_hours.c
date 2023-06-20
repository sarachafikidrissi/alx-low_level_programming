#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
int a = 0;

while (a <= 23)
{
int b = 0;
while (b <= 59)
{
	_putchar(a / 10 + 48);
	_putchar(a % 10 + 48);
	_putchar(':');
	_putchar(b / 10 + 48);
	_putchar(b % 10 + 48);
	_putchar('\n');
	b++;
}
a++;
}
}
