#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array -> print array
 * @a: input array
 * @n: input n elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
