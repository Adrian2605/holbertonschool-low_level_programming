#include <unistd.h>

/**
 * times_table - Print the 9 times table
 *
 * Return: Always void.*
 */

void times_table(void)
{
  int ntable, nfile, product;
  int product = (ntable * nfile);
  char p_product = product + '0';

  for (ntable = 0; ntable < 10; ++ntable)
    {
      for (nfile = 0; nfile < 10; ++nfile)
	{
	  if (nfile == 0)
	    {
	      write(1, p_product, 1);
	      write(1, ",", 1);
	      write(1, " ", 1);
	    }
	  else if ((nfile < 9) && (nfile > 0))
	    {
	      write(1, " ", 1);
	      write(1, p_product, 2);
	      write(1, ",", 1);
	      write(1, " ", 1);
	    }
	  else
	    {
	      write (1, product, 2)
	    }
	}
      write(1, "\n", 1)
    }
}
