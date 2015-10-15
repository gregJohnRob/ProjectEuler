/*
 * A palindromic number reads the same both ways. The largest palindrome made
 * from the product of two 2-digit numbers is 9009 = 91 × 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindromic(int possible) {
  char temp[6];
  sprintf(temp, "%d", possible);
  int i = 0;
  int j = strlen(temp) - 1;
  while (i < j) {
    if (temp[i] != temp[j]) {
      return 0;
    }
    i++;
    j--;
  }
  return 1;
}

int largestPalindrom() {
  int i = 999;
  int iTarget = 100;
  int j = 999;
  int jTarget = 100;
  int output = 0;
  while (i > iTarget) {
    j = 999;
    while (j > jTarget) {
      if (isPalindromic(i * j) == 1) {
        if (output < i*j) {
          output = i * j;
        }

        if (j < i) {
          jTarget = iTarget = j;
        } else {
          jTarget = iTarget = i;
        }
      }
      j--;
    }
    i--;
  }
  return output;
}

int main(int argc, char **argv) {
  printf("%d\n", largestPalindrom());
  return 0;
}
