#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints the last digit
 * Return: the last digit is
 */
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
else if (m == 0)
{
printf("Last digit of %d is %d and is 0\n", n, m);
}
else if (m < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
}
return (0);
}

