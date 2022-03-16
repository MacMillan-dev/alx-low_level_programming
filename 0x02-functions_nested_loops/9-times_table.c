#include "main.h"
/**
 *times_table - print the 9 times table starting with 0
 */
void times_table(void)
{
int x, y, mul;
for (a = 0; a <=9; a++)
{
for (b = 0; b <= 9; b++)
{
mul = a * b;
if (b != 0)
{
_putchar(',');
_putchar(' ');
}
if (b == 0)
{
_putchar('0');
}
else if (mul >= 10)
{
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
}
else if ((mul < 10) && (j != 0))
{
_putchar(' ');
_putchar((mul % 10) + '0');
}
}
_putchar('\n');
}
}
