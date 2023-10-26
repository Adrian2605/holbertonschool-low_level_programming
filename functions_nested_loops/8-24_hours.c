#include <unistd.h>

/**
 * jack_bauer - Prints all the minutes in the day of jack bauer.
 *
 * Return: Always void.
 */


void jack_bauer(void)
{
int hours, minutes;
for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
write(1, (hours / 10) + '0', 1);
write(1, (hours % 10) + '0', 1);
write(1, ":", 1);
write(1, (minutes / 10) + '0', 1);
write(1, (minutes % 10) + '0', 1);
write(1, "\n", 1);
}
}
return;
}
