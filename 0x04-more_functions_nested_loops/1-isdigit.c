#include "main.h"
/**
 * _isdigit - check if the number are 0 - 9
 * @c: char to be check
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
