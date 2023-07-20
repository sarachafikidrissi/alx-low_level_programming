#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator:  the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, value;

	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(print, unsigned int);

		printf("%d", value);

		if (i < n - 1)
		{
			if (separator == NULL)
				separator = "";

			printf("%s", separator);
		}
	}
	printf("\n");
}
