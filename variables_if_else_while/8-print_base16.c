#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers of base 16 in lower case
 *
 * Return: Always zero.
 */
int main(void)
{
int t = 0;
for (t; t<= 15; t++)
{
putchar(t + '0');
}
putchar('\n');
return (0);
}
