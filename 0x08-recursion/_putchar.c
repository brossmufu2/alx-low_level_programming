#include <unistd.h>

/**
*This is _putchar.c
*/

int _putchar(char c)
{
	return write(STDOUT_FILENO, &C, 1);
}
