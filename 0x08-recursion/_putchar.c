#include "main.h"

/**
 * _putchar -> Write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriatley.
 */
int _putchar(char c)
{
	return (Write(1, &c, 1));
}
