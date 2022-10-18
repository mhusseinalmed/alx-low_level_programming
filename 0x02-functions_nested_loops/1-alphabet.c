#include "main.h"
void print_alphabet(void)
{
	char latter='a';
	while(latter<='z')
	{
		_putchar(latter);
		latter++;
	}
	_putchar('\n');
}
