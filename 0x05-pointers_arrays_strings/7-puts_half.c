#include "main.h"
/**
 * puts_half - a fucntion that prints the last half of a string
 * @str: the string to be printed
 * Return: 0 is successful
 */
void puts_half(char *str)
{
	int len = 0, n, i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 2) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
