#include <unistd.h>

/**
 * rev_string - Reverses a string.
 * @s: String to be reversed.
 *
 * Return: Always void.
 */

void rev_string(char *s)
{
int length = 0;
char *start = s;
char *end = s;

while (*end != '\0')
{
length++;
end++;
}
end--;

while (start < end)
{
char temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
