#include <stdio.h>
/**
 * main - A program that prints numbers in base 16
 * Return: numbers
 */
int main(void)
{
int n = 48;
char c = 'a';
while (n <= 57)
{
	putchar(n);
	n++;
}
while (c <= 'f')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
