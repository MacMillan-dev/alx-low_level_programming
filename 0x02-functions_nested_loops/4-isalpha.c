#include "main.h"
/**
 *_isalpha - checks alphabet case. Returns 1 if true and 0 if false
 *@c: integer parameter
 *Return: returns value
 */
int _isalpha(int c)
{
int value;
if ((c >= 'A' || c >= 'a') && (c <= 'Z' || c <= 'z'))
{
value = 1;
}
else
{
value = 0;
}
return (value);
}
