#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (b = a; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
