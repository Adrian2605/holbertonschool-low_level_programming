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
while (letter != '\v')
{
if (letter == '{')
{
letter = '\n'
}
_putchar(letter);
letter = letter + 1;
}
return (0);
}
