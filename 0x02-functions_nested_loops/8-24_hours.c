#include "main.h"
/**
 * jack_bauer - print 24 hour  moment in life of jack bauer life
 * @a: The first number to be computed
 * @b: The second number to be computed
 * @c: The third number to be computed
 * @d: The fourth number to be computed
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
	{
		for (c = 0; c <= 5; c++)
		{
		for (d = 0; d <= 9; d++)
		{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');
		}
		}
	}
	}
	}
}
