#include "main.h"
/**
 * _isupper - check the upper case
 * @c: print int
 *
 * Return: give 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
