#include <unistd.h>
#include <stdio.h>

int _putchar(char c);

/**
 * print_alphabet_lc - Prints the alphabet in lowercase.
 *
 * Return: Always zero.
 */
int print_alphabet_lc(void)
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
return (0);
}
