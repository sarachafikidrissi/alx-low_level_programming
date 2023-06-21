#include "main.h"
/**
 * times_table - a function that prints the 9 times table
 * Return: 9 times table
 */
void times_table(void)
{
int x, y, z;

for (x = 0; x <= 9; x++)
{
for (y = 0; x <= 9; y++)
{
z = x * y;
if (y == 9)
{
z = x * y
if (y == 0)
{
_putchar(z + '0');
}
if (z < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
else if (z >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
}
_putchar('\n');
}
}
