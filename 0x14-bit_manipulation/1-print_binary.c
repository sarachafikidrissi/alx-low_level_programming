#include "main.h"
/**
 * a function that prints the binary
 * representation of a number
 * @n: number to be converted to binary 
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned int mask;
	int bits;

    if (n == 0)
        _putchar('0');
    else if (n == 1)
        _putchar('1');

    else
    {
        if (n < 100)
            bits = 7;
        else if (n >= 100)
            bits = 11;

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
