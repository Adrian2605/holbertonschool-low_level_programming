#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers base 10.
 *
 * Return: Always zero.
 */
int main(void)
{
int number = 0;

while (number < 10)
{
printf("%d", number);
number = number + 1;
}
putchar('\n');

return (0);
}
