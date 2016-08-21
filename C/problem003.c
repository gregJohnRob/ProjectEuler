/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct node{
  unsigned long number;
  struct node * next;
} node;

node * createNode(unsigned long number, node * previous) {
  node * newNode = calloc(1, sizeof(node));
  newNode->number = number;
  newNode->next = NULL;
  if (previous) {
    previous->next = newNode;
  }
  return newNode;
}

unsigned long maxPrimeFactor(unsigned long number) {
  node * firstPrime = createNode(2, NULL);
  node * largestPrime = firstPrime;
  unsigned long i = 3;
  while (number > 1) {
    node * tempNode = firstPrime;
    unsigned long sqrtI = (unsigned long) sqrt(i);
    int check = 1;
    while (tempNode && check==1) {
      if (i % tempNode->number == 0 ) {
        check = 0;
      }
      tempNode = tempNode->next;
    }
    if (check == 1) {
      largestPrime = createNode(i, largestPrime);
      while (number % largestPrime->number == 0) {
        number = number / largestPrime->number;
      }
    }
    i += 2;
  }
  return largestPrime->number;
}

int main(int argc, char **argv) {}
  unsigned long target = 600851475143;
  printf("%lu\n", maxPrimeFactor(target));
  return 0;
}
