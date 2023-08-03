#include "main.h"
/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: number to be converted to binary
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned int flag = 0;
	unsigned int max = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (flag == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		max >>= 1;
	}
}
