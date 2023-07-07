#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point to program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is successful
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
