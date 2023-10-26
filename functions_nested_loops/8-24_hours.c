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
char printed1 = (hours / 10) + '0';
char printed2 = (hours % 10) + '0';
char printed3 = (minutes / 10) + '0';
char printed4 = (minutes % 10) + '0';
write(1, printed1, 1);
write(1, printed2, 1);
write(1, ":", 1);
write(1, printed3, 1);
write(1, printed4, 1);
write(1, "\n", 1);
}
}
return;
}
