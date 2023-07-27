#include <stdio.h>
/* Define a constructor function using GCC attribute */
void print_before(void) __attribute__((constructor));

/**
 * print_before - a constructer function that prints a message
 * before main is executed
 * Return: nothing
 */

void print_before(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
