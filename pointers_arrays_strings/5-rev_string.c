#include <unistd.h>

/**
 * rev_string - Reverses a string.
 * @s: String to be reversed
 *
 * Return: Always void.
 */

void rev_string(char *s)
{
int length = 0;
int i = 0;

while (*s != '\0')
{
length++;
s++;
}

s--;

while (i < length / 2)
{
char temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
i++;
}
return;
}
