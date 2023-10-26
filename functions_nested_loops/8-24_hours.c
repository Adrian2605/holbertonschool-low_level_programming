#include <unistd.h>

/**
 * jack_bauer - Prints all the minutes in the day of Jack Bauer.
 *
 * Return: Always void.
 */

void jack_bauer(void)
{
int hours, minutes;
char printed[5];

for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
printed[0] = (hours / 10) + '0';
printed[1] = (hours % 10) + '0';
printed[2] = ':';
printed[3] = (minutes / 10) + '0';
printed[4] = (minutes % 10) + '0';

write(1, printed, 5);
write(1, "\n", 1);
}
}
}
