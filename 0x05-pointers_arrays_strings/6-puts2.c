#include "main.h"
/**
 * puts2 - function that print ervery other character
 * @str : a pointer that point to a variable to be updated
 * return nothig
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar ('\n');
}
