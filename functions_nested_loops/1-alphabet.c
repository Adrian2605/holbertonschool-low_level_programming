#include <unistd.h>
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
write(1, &letter, 1);
letter = letter + 1;
}
write(1, "\n", 1);
return (0);
}
