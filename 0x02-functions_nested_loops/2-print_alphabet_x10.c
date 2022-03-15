#include "main.h"
/**
 *print_alphabet_x10 - Entry
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i = 0;
while (int i < 10){ 
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch = ch + 10;
}
}
_putchar('\n');
}
