#include <stdio.h>
/**
 *main - Entry
 *
 *Return: returns 0 (Success)
 */
int main(void)
{
char ch;
ch = 'z';
do {putchar(ch);
ch--;
} while (ch >= 'a');
putchar('\n');
return (0);
}
