#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercasse
 *
 * Retern: Always 0
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
