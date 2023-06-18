#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 successful
 */
int main(void)
{
int a = '0';
int b;
while (a <= '8')
{
b = a + '1';
while (b <= '9')
{
	putchar(a);
	putchar(b);
	if (a != '8')
	putchar(',');
	putchar(' ');
b++;
}
a++;
}
putchar('\n');
Return: (0);
}

