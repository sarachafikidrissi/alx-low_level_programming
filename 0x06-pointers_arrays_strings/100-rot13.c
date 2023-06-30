#include <stdio.h>
/**
 * rot13 - a function that encode a string to rot13
 * @s: the string should be encoded
 * Return: s
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			{	
				s[i] = s[i] + 13;
			}
			else
			{
				s[i] = s[i] - 13;
			}
			i++;
		}
		i++;
	}
	return (s);
}
