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
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1 && argc <= 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	
	return (0);
}
