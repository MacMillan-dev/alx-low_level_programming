#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0(Success)
 */
int main(void)
{
int a;
do {
putchar(a + '0');
a++;
} while (a <= 9);
putchar('\n');
return (0);
}
