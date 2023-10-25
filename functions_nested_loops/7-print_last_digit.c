#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @c: The character to print.
 * @n: The number to extract the last digit from.
 * @i: The number to get the absolute value from.
 *
 * Return: The value of the last digit.
 */

int _putchar(char c);

int _abs(int i)
{
int absolute_value;
if (i < 0)
{
absolute_value = -i;
return (absolute_value);
}
else
{
absolute_value = i;
return (absolute_value);
}
}

int print_last_digit(int n)
{
n = _abs(n);
int last_d;
last_d = n % 10;
_putchar(last_d + '0');
return (last_d);
}
