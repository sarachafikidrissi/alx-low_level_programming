#include <stdio.h>
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is succesful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
