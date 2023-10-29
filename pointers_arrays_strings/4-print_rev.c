#include <unistd.h>

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: String to be printed.
 *
 * Return: Always void.
 */

void print_rev(char *s)
{
int lenght = 0;
while (*s != '\0')
{
s++;
lenght++;
}
s--;
while (lenght > 0)
{
write(1, s, 1);
lenght--;
s--;
}
write(1, "\n", 1);   
return;
}
