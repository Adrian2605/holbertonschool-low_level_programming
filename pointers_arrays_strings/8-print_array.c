#include <unistd.h>
#include <stdio.h>
/**
 * print_array - Function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: Array of integers that is taken as input.
 * @n: Number of integers that are gonna be printed.
 *
 * Return: Always void.
 */

void print_array(int *a, int n)
{
int i = 0;
if (n != 1 && n > 0)
{
while (i < n - 1)
{
printf("%d, ", a[i]);
i++;
}
printf("%d\n", a[i]);
}
else if (n == 1)
{
printf("%d\n", a[i]);
}
else
{
}
return;
}
