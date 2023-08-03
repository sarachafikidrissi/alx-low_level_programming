#include "main.h"

/**
 * calc_exp - a function that calcuates the exp of number
 * @a: Enput integer
 * @exp: an exponotionel
 * Return: the exponontiel of number a
 */
unsigned int calc_exp(unsigned int exp)
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
