#include <stdio.h>

/**
*main - Prints the add of the even-valued
*fibonacci numbers.
*
*Return: Always 0.
*/
int main(void)
{
	long int num1, num2, fnum, afnum;

	num1 = 1;
	num2 = 2;
	fnum = afnum = 0;
	while (fnum <= 4000000)
	{
		fnum = num1 + num2;
		num1 = num2;
		num2 = fnum;
		if ((num1 % 2) == 0)
		{
			afnum += num1;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
