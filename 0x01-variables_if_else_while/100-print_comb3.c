#include <stdio.h>
/**
 *main - Entry
 *
 *Return: returns 0 (Success)
 */
int main(void)
{
int a;
int b;
int c;
a = 0;
while (a < 100)
{
b = a / 10;
c = a % 10;
if (b < c)
{
putchar(b + '0');
putchar(c + '0');
if (a < 89)
{
putchar(',');
putchar(' ');
}
}
a++;
}
putchar('\n');
return (0);
}
