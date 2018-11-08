#include <stdio.h>
#define MAXNUMBER 10

/* print powers of 2 and -3 table
 * for exp = 0, 1, 2, ..., 9 */

typedef int ExponentType; 

int p(int,int); // bad: p is abbreviation

void main()
{
  ExponentType exponent; 

  for (exponent = 0; exponent < MAXNUMBER; ++exponent)
    printf("%d %d %d\n", exponent, p(2, exponent), p(-3, exponent));
}

int p(int base,int number)
{
  int exponent, product;

  product = 1;
  for (exponent = 1; exponent <= number; ++exponent)
    product = product * base;
  return product;
}
