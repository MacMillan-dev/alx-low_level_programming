#include "main.h"
/**
 *print_alphabet_x10 - Entry
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch = ch + 10;
}
_putchar('\n');
}
