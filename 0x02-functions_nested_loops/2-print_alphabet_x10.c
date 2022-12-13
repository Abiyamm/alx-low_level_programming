#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int ten;

	char n;

	for (ten = 0; ten <= 9; ten++)

	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
