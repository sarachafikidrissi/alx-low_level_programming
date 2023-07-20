#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(print, char *);

		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
		}

		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(print);
	printf("\n");
}
