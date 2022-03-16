#include "main.h"
 /**
 *print_sign - prints the sign of a number n
 *@n: function parameter of type int
 *_putchar: takes sign of a number
 *Return: 1 if n is positive, 0 if n is 0, -1 if n is negative
 */
int print_sign(int n)
{
int value;
if (n > 0)
{
value = 1;
_putchar('+');
}
else if (n == 0)
{
value = 0;
_putchar('0');
}
else
{
value = -1;
_putchar('-');
}
return (value);
}
