#include "main.h"
/**
 *print_alphabet_x10 - Entry
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
for (int i = 0; i < 10; i++)
{
_putchar(ch);
}
}
_putchar('\n');
return (0);
}
