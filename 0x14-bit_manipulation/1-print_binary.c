#include "main.h"
/**
 * a function that prints the binary
 * representation of a number
 * @n: number to be converted to binary 
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask = sizeof(n) * 8;

    if (n == 0)
        _putchar('0');
    else if (n == 1)
        _putchar('1');
	
	else
    {
		mask = 1 << (bits - 1);
		
		while (mask > 0)
		{
			if (n & mask)
				_putchar('1');
			else
				_putchar('0');
			mask >>= 1;
		}
	}
}
