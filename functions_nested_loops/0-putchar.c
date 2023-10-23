#include <unistd.h>

/**
 * main - Entry point.
 *
 * Description: Prints _putchar followed by a new line.
 *
 * Return: Always zero.
 */
int main(void)
{
char text[] = "_putchar\n";
write(1, text, sizeof(text) - 1);

return (0);
}
