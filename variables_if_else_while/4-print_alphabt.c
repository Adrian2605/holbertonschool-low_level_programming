#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints the alphabet except by the letters e and q.
 *
 * Return: Always zero.
 */
int main(void)
{
char lowerletter = 'a';

while (lowerletter <= 'z')
{
putchar(lowerletter);
lowerletter = lowerletter + 1;
if (lowerletter == 'e')
{
lowerletter = lowerletter + 1;
}
else
{
if (lowerletter == 'q')
{
lowerletter = lowerletter + 1;
}
}
}

putchar('\n');

return (0);
}
