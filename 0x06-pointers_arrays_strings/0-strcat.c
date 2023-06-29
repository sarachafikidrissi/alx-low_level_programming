#include "main.h"
/**
 * _strcat - a funtion that concatenate 2 strings
 * @dest: the destination string
 * @src: the source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int len1 = 0;
int  len2 = 0;

while (dest[i] != '\0')
{       
        len1++;
        i++;
}       
while (src[i] != '\0')
{
        len2++;
        i++;
}       
for (i=0; i <= len2; i++)
{
        des[len1 + i] = src[i];
}       
return (dest);
}
