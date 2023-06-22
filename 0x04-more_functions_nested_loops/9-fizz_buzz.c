#include <stdio.h>
/**
 * main - Entry point
 * Return : 0 is successful
 */
int main(void)
{
	int n = 1;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fuzz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if ((n % 3 == 0) && (n % 5 == 0))
			printf("FuzzBuzz ");
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
