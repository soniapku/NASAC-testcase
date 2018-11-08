#include <stdio.h>
#define MAXNUMBER 10

/* print powers of 2 and -3 table
 * for exp = 0, 1, 2, ..., 9 */

typedef int ET;  // bad ET is abbreviation

int power(int,int);

void main()
{
  ET exponent;  

  for (exponent = 0; exponent < MAXNUMBER; ++exponent)
    printf("%d %d %d\n", exponent, power(2, exponent), power(-3, exponent));
}

int power(int base,int number)
{
  int exponent, product;

  product = 1;
  for (exponent = 1; exponent <= number; ++exponent)
    product = product * base;
  return product;
}
