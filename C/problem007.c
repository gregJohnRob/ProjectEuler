// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see
// that the 6th prime is 13.

// What is the 10,001st prime number?

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void) {
  int counter = 5; // marks the place of the current largest prime found
  int counter2; //
  long squareRoot; // the square root of the current number
  long current; // the current number

  long primes[10001]; // list of all the primes up to the one we need
  primes[0] = 2;
  primes[1] = 3;
  primes[2] = 5;
  primes[3] = 7;
  primes[4] = 11;
  primes[5] = 13;

  for (current = 15; counter < 10001; current+=2) {
    int isPrime = 0;
    squareRoot = sqrt((long double) current);
    for (counter2 = 1; primes[counter2] <= squareRoot && counter2 < counter + 1; counter2++) {
      if (current % primes[counter2] == 0) {
        isPrime = 1;
        break;
      }
    }
    if (isPrime == 0) {
      primes[++counter] = current;
    }
  }
  printf("%ld\n", primes[10000]);
  return 0;
}
