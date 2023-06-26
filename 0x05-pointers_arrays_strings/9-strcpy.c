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
	int y = 0;
	int i = 0;

	while (*(src + 1) !=  '\0')
	{
		y++;
	}
	for ( ; i < y; i++)
	{
		dest[i] = src[i];
	}
	dest[y] = '\0';
	return (dest);
}
