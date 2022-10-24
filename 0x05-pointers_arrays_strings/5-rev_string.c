#include "main.h"
/**
 * rev_string - function that revrs aa string
 * @s : a pointer that point to a variable to be updated
 * return nothing
 */
void rev_string(char *s)
{
	int i = 0;

	int j = 0;

	while (s[i])
		i++;
	while (i--)
	{
		s[i] = s[j];
		j++;
	}
}
