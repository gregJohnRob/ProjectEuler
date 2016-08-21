/**
 * Each new term in the Fibonacci sequence is generated by adding the previous
 * two terms. By starting with 1 and 2, the first 10 terms will be:
 * 	1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 * By considering the terms in the Fibonacci sequence whose values do not
 * exceed four million, find the sum of the even-valued terms.
 *
*/

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n1, int n2, int upTo) {
  int sum = 2;
  int n3  = 0;
  while (1==1) {
    n3 = n1 + n2;
    if (n3 >= upTo) {
      break;
    }
    if (n3 % 2 == 0) {
      sum += n3;
    }
    n1 = n2;
    n2 = n3;
  }
  return sum;
}

int main(int argc, char **argv) {
  printf("%d\n", fibonacci(1, 2, 4000000));
  return 0;
}