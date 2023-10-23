#include <unistd.h>
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always zero.
 */

int print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
write(1, &letter,1);
letter = letter + 1;
}
return (0);
}
