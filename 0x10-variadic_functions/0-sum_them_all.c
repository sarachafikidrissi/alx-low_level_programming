#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: sum of all parameters, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int count = 0;

	va_list sum;

	va_start(sum, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		count += va_arg(sum, unsigned int);
	}
	return (count);
}
