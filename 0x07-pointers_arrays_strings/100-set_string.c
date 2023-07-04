#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: double pointer to a string
 * @to: pointer to the string to set s to
 * Return: 0 is successful
 */
void set_string(char **s, char *to)
{
	*s = to;
}
