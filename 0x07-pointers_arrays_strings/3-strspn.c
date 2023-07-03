#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s:an input strin
 * @accept: an input character with to locate into s
 * Return: pointer to position
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int flag;
	char *ptr = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = ptr;
		if (flag == 0)
			break;
	}
	return (count);
}
