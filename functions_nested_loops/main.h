#include <unistd.h>

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
