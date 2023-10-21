#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lower case followed by the alphabet in
 * uppercase and then a new line.
 *
 * Return: Always zero.
 *
 */
int main(void)
{
char lowerletter = 'a';
char upperletter = 'A';

while (lowerletter <= 'z')
{
putchar(lowerletter);
lowerletter = lowerletter + 1;
}
lowerletter = 'z';

if (lowerletter == 'z')
{
while (upperletter <= 'Z')
{
putchar(upperletter);
upperletter = upperletter + 1;
}
}
putchar('\n');

return (0);
}
