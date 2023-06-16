#include <stdio.h>
/**
 * main - a program that prints print alphabet except e and q
 * Return: alphabets without e and q
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
	if (c == 'e' || c == 'q')
	{
	c++;
	continue;
	}


	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
