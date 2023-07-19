#include "main.h"
/**
 * main -Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	long a = 0, b = 1, c = b;

	while (b + a < 4000000)
	{
		b += a;

		if (b % 2 == 0)
			c += b;

		a = b - a;

		++i;
	}
	printf("%ld\n", c);
	return (0);
}
