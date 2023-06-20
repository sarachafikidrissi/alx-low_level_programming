#include "main.h"
/**
 * _isalpha - Check for alphabetic characters
 * @c: the checked character
 * Return: 1 if c is character otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
	return (0);
}
}
