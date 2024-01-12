#include <unistd.h>

/*
 * _putchar - writes the character to print
 *
 * Return: on success 1
 * on err0r, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
