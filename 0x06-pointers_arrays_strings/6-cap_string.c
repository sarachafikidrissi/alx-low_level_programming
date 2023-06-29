#include "main.h"
/**
 * cap_string - a function that capitilize letters
 * @s: the string to be capitilize
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

		if (s[i - 1] == ' ' ||
		s[i - 1] == '\t' ||
		s[i - 1] == '\n' ||
		s[i - 1] == ',' ||
		s[i - 1] == ';' ||
		s[i - 1] == '.' ||
		s[i - 1] == '!' ||
		s[i - 1] == '?' ||
		s[i - 1] == '"' ||
		s[i - 1] == '(' ||
		s[i - 1] == ')' ||
		s[i - 1] == '{' ||
		s[i - 1] == '}' ||
		i == 0)
			s[i] = s[i] - 32;
		i++;
	}
return (s);
}
