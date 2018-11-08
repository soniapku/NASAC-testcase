#include <stdio.h>
#define MAXN 10 // bad: MAXN is abbreviation

/* print powers of 2 and -3 table
 * for exp = 0, 1, 2, ..., 9 */

typedef int ExponentType; 

int power(int,int);

void main()
{
  ExponentType exponent; 
  
  for (exponent = 0; exponent < MAXN; ++exponent)
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
