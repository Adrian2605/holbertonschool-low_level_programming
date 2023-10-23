#include <unistd.h>
/**
 * main - Entry point.
 *
 * Return: Always zero.
 *
 */
int print_alphabet()
{
char letter = 'a';
while (letter <= 'z')
{
write(1, &letter,1);
letter = letter + 1;
}
return (0);
}

int main(void)
{
print_alphabet();
return (0);
}
