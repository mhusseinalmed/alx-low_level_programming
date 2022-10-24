#include "main.h"
/**
 * _puts - a function the print a string
 * @str: a pointer the point to a variable to be updated
 *
 * return nothing
 */

void _puts(char *str)
{
	int length = 0;

	while (str[length])
	{
		_putchar (str[length]);
		length++;
	}
	_putchar('\n');
}
