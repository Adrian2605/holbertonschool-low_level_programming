#include "main.h"

/**
 * _islower - Identifies if the input character is lowercase or
 * non-lowercase.
 *
 * Return: If the character input is lowercase, returns 1; for non-lowercase
 * characters, returns 0.
 */

int _islower(int c)
{
  if (c >= 97  && c <= 122)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
