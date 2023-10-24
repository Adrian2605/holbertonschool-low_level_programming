#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times and prits a new line
 * at the end.
 *
 * @c: Tha character to be printed.
 *
 * Return: Always void.
 */
int _putchar(char c);

void print_alphabet_x10(void)
{
int i = 1;
while (i <= 10)
{
char letter = 'a';
int counter = 0;

while (counter < 1)
{
if (letter == '{' || letter == '\v')
{
letter = '\n';
counter = counter + 1;
}
_putchar(letter);
letter = letter + 1;
}
++i;
}
return;
}
