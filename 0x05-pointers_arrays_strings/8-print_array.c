#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints elements of array
 * @a: the name of array
 * @n: the number of elments in a
 * Return: 0 is successful
 */
void print_array(int *a, int n)
{
	int i;

	for ( i = 0; i < n; i++)
	{
		if ( i != (n - 1))
		printf("%d, ", a[i]);

		else
			printf("%d\n", a[i]);
	}
}
