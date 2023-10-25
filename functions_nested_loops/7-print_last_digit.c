#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */

int _putchar(char c);

int print_last_digit(int n)
{
  int last_d = n % 10;
  _putchar(last_d + '0');
  return (last_d);
}
