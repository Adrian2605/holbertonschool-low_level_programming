#include <unistd.h>
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
char *dest_start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return dest_start;
}
int main(void)
{
char s1[98];
char *ptr;
ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
printf("%s", s1);
printf("%s", ptr);
return (0);
}
