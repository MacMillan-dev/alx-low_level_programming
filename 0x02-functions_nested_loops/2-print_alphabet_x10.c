#include "main.h"
0;276;0c/**
 *print_alphabet_x10 - Entry
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10){ 
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
i++;
}
_putchar('\n');
}
