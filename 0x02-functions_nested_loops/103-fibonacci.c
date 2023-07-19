#include "main.h"
/**
 * main -Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	long a = 0, b = 1, c;
	float total_sum;

	while (1)
	{
		c = a + b;

		if (c < 4000000)
		{
			break;
		}
		if ((c % 2) == 0)
		{
			total_sum += c;
		}
		a = b;
		b = c;
	}
	printf("%.0f\n". total_sum);
	return (0);
}
