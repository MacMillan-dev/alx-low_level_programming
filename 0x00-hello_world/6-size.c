#include <stdio.h>

/**
 *main - prints the strings in printf funtion
 *
 *Description: using the main function
 *this program prints the size of various types on the computer
 *it is compiled and run on
 *Return: 0
 */
int main(void)
{
  char c;
  int i;
  long l;
  long long la;
  float f;

  printf("Size of a char: %ld byte(s)\n", sizeof(c));
  printf("Size of an int: %ld byte(s)\n", sizeof(i));
  printf("Size of a long: %ld byte(s)\n", sizeof(l));
  printf("Size of a long long: %ld byte(s)\n", sizeof(la));
  printf("Size of a float: %ld byte(s)\n", sizeof(f));
  return (0);
}
