/*

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 32 + 42 = 9 + 16 = 25 = 5.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include <stdio.h>
#include <math.h>


int main(void) {

  double a;
  double b;
  double c;
  double total;


  for(a = 1; a < 500; a++) {
    total = 0;
    for(b = 2; total < 1000; b++) {
      c = sqrt((a * a) + (b * b));
      total = a + b + c;
      if(total == 1000) {
        break;
      }
    }
    if (total == 1000 && ceilf(c)== c) {
      break;
    }
  }

  printf("%f\n", a*b*c);
}
