#include <stdio.h>
/**
 *main - Entry
 *
 *Return: returns 0 (Success)
 */
int main(void)
{
int a, b, c, d;
for (a = 0; a < 1000; a++)
{
b = a / 100; /* hundreds */
c = (a / 10) % 10; /* tens */
d = a % 10; /* unit */
if (b < c && c < a)
{
putchar(b + '0');
putchar(c + '0');
putchar(d + '0');
if (a < 700)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
