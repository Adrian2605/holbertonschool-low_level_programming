#include "main.h"

/**
 * _abs - Function to compute the absolute value of an integer.
 * @i: The integer to process the absolute value.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int i)
{
int absolute_value;
if (i < 0)
{
absolute_value = -i;
return (absolute_value);
}
else
{
absolute_value = i;
return (absolute_value);
}
}
