#include <stdio.h>
/**
 * main - A program that prints alphabets using putchar function
 * Return: an Alphabet character
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
	putchar(c);
	c++;
}
return (0);
}
