#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char p;
	int i = 0;

	while (i < 10)
	{
	for (p = 'a'; p <= 'z'; p++)
	{
	_putchar(p);
	}
	_putchar('\n');
	i++;
	}
}

