#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @b: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int b)
{
	if (b >= 97 && b <= 122)
	{
		return (1);
	}
	return (0);
}
