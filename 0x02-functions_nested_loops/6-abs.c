#include "main.h"
/**
 * _abs - A fucntion that computes the absolute value of a number
 * @c: the number to be computed
 * Return: the absolute value of nomber otherwise 0
 */
int _abs(int c)
{
if (c < 0)
{
	int abs;

	abs = c * -1;
	return (abs);
}
return (c);
}
