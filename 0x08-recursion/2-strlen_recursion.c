#include "main.h"

/**
*_strlen_recursion - calculate the lenght of a string
*@s: the string to count
*
* Return: nothing.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
