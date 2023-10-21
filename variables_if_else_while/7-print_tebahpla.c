#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints the alphabet in reverse and lowercase and ends
 * with a new line.
 *
 * Return: Always zero.
 */
int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter = letter - 1;
}
putchar('\n');
return (0);
}
