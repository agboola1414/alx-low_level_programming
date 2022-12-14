#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int 10;
	char letter;
	
	for (10 = 0; 10 <= 9; ten++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
