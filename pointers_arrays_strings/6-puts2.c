#include <unistd.h>

/**
 * puts2 - Prints every other character of a string, starting with
 * the first character, followed by a new line.
 * @str: String to be evaluated.
 *
 * Return: Always void.
 */

void puts2(char *str)
{
int length = 0;
int i;

while (str[length] != '\0')
{
length++;
}
for (i = 0; i < length; i += 2)
{
write(1, &str[i], 1);
}
write(1, "\n", 1);
return;
}
