#include "main.h"
#include <stdio.h>

/**
 *reverse_array -> reversing an array
 *@a: an array of integer
 *@n: the number of element swap
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
