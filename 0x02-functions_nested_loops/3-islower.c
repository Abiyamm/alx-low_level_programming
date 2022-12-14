#include "main.h"
/**
 * _islower - checks if a character is lowercase
 *
 * Return: 1 if latter is lowercase, 0 if not
 */
int _islower(int n)
{
	if (n >= 'a' && n <= 'z')
		return (1);
	else
		return (0);
}
