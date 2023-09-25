#include "main.h"

/**
 * main - a function that prints alphabets in lowercase
 * but since we can only use two _putchar  in order to prints
 * we will be using a loop
 */

void print_alphabet(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
