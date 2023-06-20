#include <main.h>
/**
 * print_last_digit - a function that prints the last digit of a number
 *@n: the number that contains the last digit
 *Return: 0
 */
int print_last_digit(int n)
{
int last_dig = n % 10;
putchar("%d", last_dig);
return (0);
}
