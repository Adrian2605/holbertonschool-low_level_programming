#include <unistd.h>

/**
 * swap_int - Swaps the values inside two integers.
 * @a: First value to swap.
 * @: Second value to swap.
 *
 * Return: Always void.
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;

return;
}
