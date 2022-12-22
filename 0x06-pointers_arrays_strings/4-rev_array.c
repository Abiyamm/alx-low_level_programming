#include "main.h"
#include <string.h>

/**
 *reverse_array -> reversing an array
 *@a: array a
 *@n: an element of an array
 */
void reverse_array(int *a, int n)
{
	int i;

	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

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
	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}

