#include <stdio.h>
/**
 * main - a program that prints number ofarguments passed to
 * @argc: contains number of arguments
 * @argv: contains arguments
 * Return: 0 is successful
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc-1);
	return (0);
}
