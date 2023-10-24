#include <unistd.h>

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always zero.
 */

int _putchar(char c);

void print_alphabet(void)
{
char letter = 'a';
int counter = 0;

while (counter < 2)
{
if (letter == '{' || letter == '\v')
{
letter = '\n';
counter = counter + 1;
}
_putchar(letter);
letter = letter + 1;
}
return (void);
}
