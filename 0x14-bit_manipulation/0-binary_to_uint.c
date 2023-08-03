#include "main.h"
#include "stdlib.h"
/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if  b that is not 0 or 1
 * or b is NULL
*/
unsigned int calc_exp(unsigned int a, unsigned int exp)
{
	unsigned int result = 1;
	
	if (exp == 0)
		result = 1;
	else
	{
		while (exp != 0)
		{
			result *= 2;
			--exp;
		}
	}
	return (result);
}

unsigned int binary_to_uint(const char *b)
{
	unsigned int length, exp, sum = 0, i = 0;

	if (b == NULL)
		return (0);

	length = strlen(b);

	exp = length - 1;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * calc_exp(2, exp--);
		i++;
	}

	return (sum);
}
