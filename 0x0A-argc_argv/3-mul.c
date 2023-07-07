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
	if (argc >= 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
