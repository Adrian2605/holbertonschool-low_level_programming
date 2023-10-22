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
while (t <= 15)
{
if (t < 10)
{
putchar(t + '0');
}
else
{
putchar(t + 'a');
}
t = t + 1;
}
putchar('\n');
return (0);
}
