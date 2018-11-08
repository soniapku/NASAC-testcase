#include <stdio.h>
#define MAXNUMBER 10

/* print powers of 2 and -3 table
 * for exp = 0, 1, 2, ..., 9 */

int power(int,int);

void main()
{
  int zhishu; //bad: zhishu is chinese Pinyin 
  for (zhishu = 0; zhishu < MAXNUMBER; ++zhishu)
    printf("%d %d %d\n", zhishu, power(2, zhishu), power(-3, zhishu));
}

int power(int base,int number)
{
  int exponent, product;

  product = 1;
  for (exponent = 1; exponent <= number; ++exponent)
    product = product * base;
  return product;
}
