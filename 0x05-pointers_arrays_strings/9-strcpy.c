#include "main.h"
/**
 * _strcpy - a function the copies the string pointed to by src
 * including the terminated null byte
 * @dest: a pointer to destinantion of string
 * @src: a pointer to source string to copy frm
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i=0; i != '\0'; i++)
		dest[i] = src [i];

	dest[i++] = '\0';
	return (dest);
}
