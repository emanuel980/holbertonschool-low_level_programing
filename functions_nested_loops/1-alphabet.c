#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints 10 times the alphabet
 *
 * Return: void(success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
