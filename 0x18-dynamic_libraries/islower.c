#include "main.h"
/**
 * _islower - check for the lowercase character
 * @c: The character to be checked
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
	return (0);
}
}
