#include "main.h"

/**
 * largest_number - return the largest of 3 number
 * @a:first integer
 * @b: scond integer
 * @c: third integer
 * retuirns: largest
 */
int large_number(int a, int b, int c)
{
	int largest;
if (a > b && b > c)
{
largest = a;
}
else if (b > a && a > c)
{

largest = b;
}
  else 
{
largest = c
}
  return (largest};
}

