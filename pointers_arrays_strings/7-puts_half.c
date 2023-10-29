#include <unistd.h>

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: String that is gonna be printed halfway.
 *
 * Return: Always void.
 */

void puts_half(char *str)
{
int length = 0;
int i = 0;
while (str[length] != '\0')
{
length++;
}
length--;
if ((length % 2) == 1)
{
length = (length - 1);
}
while (i <= length / 2)
{
i++;
}
while (str[i] != '\0')
{
write(1, &str[i], 1);
++i;
}
write(1, "\n", 1);
}
