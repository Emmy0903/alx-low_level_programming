#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: starting adress of memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 * Return: cganged array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
