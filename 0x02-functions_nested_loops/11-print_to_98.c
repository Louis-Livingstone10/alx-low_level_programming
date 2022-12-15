#include "main.h"
/**
 * print_to_98 - prints all natural numbers from input t 98, in order.
 *
 * @n: the number to begin the counting
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

