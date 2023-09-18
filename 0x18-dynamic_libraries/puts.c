#include "main.h"
/**
 * _puts - a function that prints a string followed by a new line
 * @str: the string to be printed
 * Return: 0 is successful
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
