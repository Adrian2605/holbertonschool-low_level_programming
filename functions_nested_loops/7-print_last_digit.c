#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */

int _putchar(char c);

int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = -n;
}
else
{
}
_putchar(n + '0');
return (n);
}
