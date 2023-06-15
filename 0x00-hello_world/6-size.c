#include <stdio.h>
/**
 * main - A program that prints the size of types
 * Return: Always 0 (Success)
 */
int main(void)
{
	char A;
	int B;
	long int C;
	long long int D;
	float E;

printf("Size of a char: %lu byte(s)",(unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)",(unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s)",(unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)",(unsigned long)sizeof(long long int));
printf("Size of a float: %lu byte(s)",(unsigned long)sizeof(float));
return (0);
}
