#include <stdio.h>
/**
 *main - returns putchar function  that prints alphabet in
 *lowercase followed by newline
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
