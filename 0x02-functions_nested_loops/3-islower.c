#include "main.h"
/**
 *_islower - checks lowercase. Returns 0 if false and 1 if false
 *@c: integer parameter c
 *Return: returns value
 */
int _islower(int c)
{
int value;
if (c >= 'a' && c <= 'z')
{
value = 1;
}
else
{
value = 0;
}
return (value);
}
