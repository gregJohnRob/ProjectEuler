/* The sum of the squares of the first ten natural numbers is 385
 *
 * The square of the sum of the first ten natural numbers is 3025
 *
 * Hence the difference between the sum of the squares of the first ten natural
 * numbers and the square of the sum is 3025 − 385 = 2640.
 *
 * Find the difference between the sum of the squares of the first one hundred
 * natural numbers and the square of the sum.
*/

#include <stdio.h>
#include <stdlib.h>


unsigned long difference(int upTo)
{
  int i = 1;
  unsigned long squareTotal = 0;
  unsigned long sumTotal = 0;
  while (i <= upTo)
  {
    squareTotal += (i * i);
    sumTotal += i;
    i++;
  }
  sumTotal = sumTotal * sumTotal;
  return sumTotal - squareTotal;
}

int main(int argc, char **argv)
{
  printf("%lu\n", difference(100));
  return 0;
}
