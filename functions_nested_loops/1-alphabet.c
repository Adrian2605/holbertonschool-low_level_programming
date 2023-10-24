#include <unistd.h>
#include <stdio.h>

int _putchar(char c);

/**
 * print_alphabet_lc - Prints the alphabet in lowercase.
 *
 * Return: Always zero.
 */
void print_alphabet(void)
{
  char letter = 'a';
  while (letter <= 'z')
    {
      _putchar(letter);
      ++letter;
    }
  _putchar('\n');
}
