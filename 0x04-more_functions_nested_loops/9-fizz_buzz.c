#include <stdio.h>
#include "main.h"
/**
 * main - fizz and buzz
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%a", a);
		if (a < 100)
			printf(' ');
	}
	printf('\n');
	return (0);
}