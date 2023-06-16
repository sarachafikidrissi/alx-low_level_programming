#include <stdio.h>
/**
 * main - A program that prints cominations of digits
 * Return: nummbers
 */
int main(void)
{
int n = 0;
while (n <= 9)
{
	putchar(n);
	putchar(',');
	putchar(' ');
	n++;
}
putchar('\n');
return (0);
