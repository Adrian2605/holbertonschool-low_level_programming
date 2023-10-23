#include <stdio.h>
/**
 * print_alphabet_lc - Prints the alphabet in lowercase.
 *
 * Return: Always zero.
 */
int print_alphabet_lc(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter = letter + 1;
}
putchar('\n');
return (0);
}
