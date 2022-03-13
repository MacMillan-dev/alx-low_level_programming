#include <stdio.h>
/**
 *main - Entry
 *
 *Return: returns 0 (Success)
 */
int main(void)
{
int y;
for (y = 0; y < 10; y++)
{
putchar(y + '0');
if (y < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
