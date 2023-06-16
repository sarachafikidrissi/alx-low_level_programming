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
	putchar(',');
	putchar(' ');
	n++;
if (n == 57)
{
	putchar('\n');
}
}
return (0);
}
