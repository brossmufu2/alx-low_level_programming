#include <stdio.h>
#include "main.h"
void times_table(void)
{
	int i = 0;
    	for ( i = 0; i <= 10; i++)
    {
        int result = i * 9;
        if (result < 10)
        {
            _putchar('0');
            _putchar(result + '0');
        }
        else
        {
            _putchar(result / 10 + '0');
            _putchar(result % 10 + '0');
        }
        _putchar('\n');
    }
}
