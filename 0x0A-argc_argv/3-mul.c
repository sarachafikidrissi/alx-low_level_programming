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
	int i = 0;
	int mul = 1;

	if (i == 0)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
