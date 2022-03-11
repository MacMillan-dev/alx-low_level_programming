#include <stdio.h>
/**
 *main - returns the alphabet in lowercase
 *followed by a new line
 *return: Always 0(success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar ('\n');
return (0);
}
