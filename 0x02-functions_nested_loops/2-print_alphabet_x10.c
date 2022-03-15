#include <stdio.h>
/**
 *main - Entry
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
for (int i = 0; i < 10; i++)
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
