#include "main.h"
#include <unistd.h>
/**
 * print_sign - Prints the sign of a number.
 * @n: The integer whose sign is gonna be printed.
 *
 * Return: Return 0 if n is 0, return 1 is n is postive
 * return -1 if n is negative.
 */

int print_sign(int n)
{
  char sign = '+';

  if (n < 0)
    {
      sign = '-';
      return (-1);
    }
  else if (n == 0)
    {
      sign = '0';
      return (0);
    }
  else
    {
      return (1);
    }

  write(1, &sign, 1);
}
