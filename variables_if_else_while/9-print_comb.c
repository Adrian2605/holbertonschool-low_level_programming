#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints all possible combinations for one single digit numbers.
 *
 * Return: Always zero.
 */
int main(void)
{
int number = 0;

while (number <= 9)
{
putchar(number + '0');
if (number < 9)
{
putchar(',');
putchar(' ');
}
number = number + 1;
}
putchar('\n');
return (0);
}
