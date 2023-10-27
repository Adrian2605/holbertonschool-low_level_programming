#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * followed by a new line.
 * @n: Starting point to print numbers.
 *
 * Return: Always void.
 */

void print_to_98(int n)
{
if (n > 98)
{
for (n = n; n > 98; --n)
{
printf("%d, ", n);
}
}
else
{
for (n = n; n < 98; ++n)
{
printf("%d, ", n);
}
}
printf("%d\n", n);
return;
}
