#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the entire alphabet in lower case
 * using while to be constantly printing unless it gets to z
 * and then ends the loop and prints z.
 *
 * Return: Always return zero.
 */
int main (void)
{
char lowerletter = 'a';

while (lowerletter != 'z')
{
putchar(lowerletter);
lowerletter = lowerletter + 1;
}
putchar(lowerletter);
return (0);
}
