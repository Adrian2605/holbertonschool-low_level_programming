#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random value to n, and then prints which is the
 * last digit and tells if is greater than 5, 0 or less than 6 and not 0.
 *
 *
 * Return: Always return zero.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_d = n % 10

if (last_d > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
}
else
{
if (last_d == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_d);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
}
}
return (0);
}
