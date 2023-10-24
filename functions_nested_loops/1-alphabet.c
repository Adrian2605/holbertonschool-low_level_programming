#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - Writes the character c to the stdout.
 * @c: tha character to print.
 *
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}


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
_putchar(letter);
letter = letter + 1;
}
_putchar('\n');
return (0);
}
