/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1
 *  to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all of the
 * numbers from 1 to 20?
*/



#include <stdio.h>
#include <stdlib.h>

int smallestNumberDivisibleByRange(int from, int upTo)
{
  int incrementor = 1;
  int i = from;
  while (i <= upTo)
  {
    if (i % 10 == 0)
    {
      incrementor = i;
    }
    i++;
  }
  i = incrementor;
  while (1==1)
  {
    int j = from;
    int check = 1;
    while (j <= upTo && check==1)
    {
      if (i % j != 0)
      {
        check = 0;
      }
      j++;
    }
    if (check==1)
    {
      return i;
    }
    i += incrementor;
  }
  return 0;
}

int main(int argc, char **argv) {
  printf("%d\n", smallestNumberDivisibleByRange(1, 20));
  return 0;
}
