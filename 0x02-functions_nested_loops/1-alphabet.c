#include <stdio.h>
#include "main.h"
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
putchar(ch);
}
putchar('\n');
return (0);
}
