#include "main.h"
#include <unistd.h>
/**
 * print_sign - Prints the sign of a number.
 * @n: The integer whose sign is gonna be printed.
 *
 * Return: Return 0 if n is 0, return 1 is n is postive
 * return -1 if n is negative.
 */

int print_sign(int n)
{
char sign = '+';

if (n < 0)
{
sign = '-';
write(1, &sign, 1);
return (-1);
}
else if (n == 0)
{
sign = '0';
write(1, &sign, 1);
return (0);
}
else
{
write(1, &sign, 1);
return (1);
}
}
