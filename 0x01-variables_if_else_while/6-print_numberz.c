#include <stdio.h>
/**
 * main - A program that prints numbers using putchar function
 * Return: nummbers
 */
int main(void)
{
int n = 48;
while (n <= 48)
{
	putchar("%d", n);
	n++;
}
putchar('\n');
return (0);
}
