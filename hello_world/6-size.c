#include <stdio.h>

/**
 * main - Punto de entrada del programa
 *
 * Description: Imprime el tama;o de distintons tipos
 * de data.
 *
 * Return: Siempre retorna 0
 */
int main(void)
{

size_t charSize = sizeof(char);
size_t intSize = sizeof(int);
size_t longintSize = sizeof(long int);
size_t longlongintSize = sizeof(long long int);
size_t floatSize = sizeof(float);

printf("Size of a char: %lu byte(s)\n", charSize);
printf("Size of an int: %lu byte(s)\n", intSize);
printf("Size of a long int: %lu byte(s)\n", longintSize);
printf("Size of a long long int; %lu byte(s)\n", longlongintSize);
printf("Size of a float: %lu byte(s)\n", floatSize);

return (0);

}
