#include <unistd.h>

/**
 * times_table - Print the 9 times table
 *
 * Return: Always void.
 */

void times_table(void)
{
int ntable, nfile, product;
char p_product;
char p1_product;
char p2_product;

for (ntable = 0; ntable < 10; ++ntable)
{
for (nfile = 0; nfile < 10; ++nfile)
{
product = (ntable * nfile);
p_product = product + '0';

if (nfile == 0)
{
write(1, &p_product, 1);
write(1, ",", 1);
write(1, " ", 1);
}
else if ((nfile < 9) && (nfile > 0))
{
if (product > 9)
{
p1_product = (product / 10) + '0';
p2_product = (product % 10) + '0';

write(1, &p1_product, 1);
write(1, &p2_product, 1);
write(1, ",", 1);
write(1, " ", 1);
}
else
	      {
write(1, " ", 1);
write(1, &p_product, 1);
write(1, ",", 1);
write(1, " ", 1);
}
}
else
{
if (product > 9)
{
p1_product = (product / 10) + '0';
p2_product = (product % 10) + '0';

write(1, &p1_product, 1);
write(1, &p2_product, 1);
}
else
{
write(1, &p_product, 1);
}
}
}
write(1, "\n", 1);
}
}
