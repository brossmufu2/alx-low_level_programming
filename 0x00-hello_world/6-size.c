#include <stdio.h>
/**
* main - A program that print a line using the printF function
* Return: on success 0.Return: is to signify that the
* block of code run successfully
* on error, -1 is returned and error is set appropriately
*/
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
