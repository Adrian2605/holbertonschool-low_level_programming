#include <unistd.h>

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
while(i < n)
{
write(1, &a[i], 1);
i++;
}
write(1, "\n", 1);
return;
}
