#include "main.h"
/**
 * _isalpha - Checks if the input value is a letter no matter if it is
 * lowercase or uppercase.
 * @c: Character that is gonna ve evaluated in the function.
 *
 * Return: If the character is a letter lowercase or uppercase the return
 * value is 1, if it is a non-letter return value is 0.
 */

int _isalpha(int c)
{
  if (c >= 65 && c <= 90)
    {
      return (1);
    }
  else if (c >= 97 && c <= 122)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
