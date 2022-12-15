#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 * main - main entry point
 * Return: 0
 *
 */

void print_alphabet_x10(void)
{
	int x = 1;
	char letter;
	
	for (x = 0; x <= 9; x++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
