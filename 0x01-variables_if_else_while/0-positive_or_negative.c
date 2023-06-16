#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints thre different values using if statements
 * Return (0) Successful
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX : 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	print("%d is 0\n", n);
}
else if (n < 0)
{
	print("%d is negative\n", n);
}
return (0);
}
