#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: an input strin to be revesred
 * Return: s in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
