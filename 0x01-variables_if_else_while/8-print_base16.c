#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	int d;

	c = 'a';
	d = 0;
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	while
		(d < '10') {
			putchar(d + '0');
			d++;
		}
	putchar('\n');
	return (0);
}
