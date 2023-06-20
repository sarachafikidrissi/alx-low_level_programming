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
int b = a + 1;
while (b <= 59)
{
	_putchar(a + 48);
	_putchar(':');
	_putchar(b + 48);
	_putchar('\n');
	b++;
}
a++;
}
}
