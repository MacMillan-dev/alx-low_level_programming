#include "main.h"
/**
 *print_alphabet - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
return (0);
}
