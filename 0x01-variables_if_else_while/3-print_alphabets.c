#include <stdio.h>
/**
 * main - a program that prints alphabets in lowercase and upercase
 * Return: alphapets in lowercase and upercase
 */
int main(void)
{
char c = 'a';
char C = 'A';
while (c <= 'z' && C <= 'Z')
{
	putchar(c);
	c++;
}
while (C <= 'Z')
{
	putchar(C);
	C++;
}
putchar('\n');
return (0);
}
