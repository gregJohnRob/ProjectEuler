/**
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we
 * get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>
#include <stdlib.h>

int multiples(int n1, int n2, int upTo) {
  int i = 0;
  int sum = 0;
  while (i < upTo) {
    if ( i % n1 == 0 || i % n2 == 0) {
      sum += i;
    }
    i++;
  }
  return sum;
}

int main(int argc, char **argv) {
  printf("%d\n", multiples(3, 5, 1000));
  return 0;
}
