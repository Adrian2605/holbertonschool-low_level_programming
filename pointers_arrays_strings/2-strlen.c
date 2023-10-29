#include <unistd.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Variable that contains the string.
 *
 * Return: The length of a string.
 */

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
++length;
s++;
}

return (length);
}
