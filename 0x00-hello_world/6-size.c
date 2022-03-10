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
  long int l;
  long long int la;
  float f;

  printf("Size of a char: %ld byte(s)", sizeof(c));
  printf("Size of an int: %ld byte(s)", sizeof(i));
  printf("Size of a long int: %ld byte(s)", sizeof(l));
  printf("Size of a long long int: %ld byte(s)", sizeof(la));
  printf("Size of a float: %ld byte(s)", sizeof(f));
  return (0);
}
