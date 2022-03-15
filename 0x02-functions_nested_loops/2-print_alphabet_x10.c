#include "main.h"
/**
 *print_alphabet_x10 - Entry
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++){
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
}
_putchar('\n');
}
