#include "main.h"
/**
 * print_rev - function that reverse a string
 * @s: a pointer the point to a variable to be updated
 * return nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
