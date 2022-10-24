#include "main.h"
/**
*swap_int - this a function that swap two numbers
*@a: a variable point to a value to be updated
*@b: a variable point to a value to be updated
*/
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
