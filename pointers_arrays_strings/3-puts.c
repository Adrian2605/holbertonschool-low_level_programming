#include <unistd.h>

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: String that is gonna be printed.
 *
 * Return: Always void.
 */

void _puts(char *str)
{
while (*str != '\0')
{
write (1, str, 1);
str++;
}
write (1, "\n", 1);
return;
}
