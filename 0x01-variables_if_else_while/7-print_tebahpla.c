#include <stdio.h>
/**
 * main - A program that prints alphabets in reverse
 * Return: alphabets in reverse
 */
int main(void)
{
char c;
c = 'z';
while (c <= 'a')
{
	putchar(c);
	c--;
}
putchar('\n');
return (0);
}
