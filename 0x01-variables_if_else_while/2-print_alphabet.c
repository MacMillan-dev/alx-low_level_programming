#include <stdio.h>
/**
 *main - Entry point
 *returns alphabets in lowercase followed by newline
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
