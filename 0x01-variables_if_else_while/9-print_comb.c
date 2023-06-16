#include <stdio.h>
/**
 * main - A program that prints cominations of digits
 * Return: nummbers
 */
int main(void)
{
int n = 48;
while (n <= 57)
{
	putchar(n);
	if (n ==57)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
	n++;
}
return (0);
}
