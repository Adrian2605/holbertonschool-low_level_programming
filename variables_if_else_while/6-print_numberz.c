#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints the one digit numbers base 10 and ends with a
 * new line.
 *
 * Return: Always zero.
 */
int main(void)
{
int number = 0;

while (number < 10)
{
putchar(number + '0');
number = number + 1;
}
putchar('\n');
return (0);
}
