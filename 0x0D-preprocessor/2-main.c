#include <stdio.h>
/**
 * main - a program that prints the name of file it was compiled from
 * Return: 0 if successful
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
