#include <stdio.h>
#include <stdlib.h>

#define UPTO 2000000

int main(void) {
  long i;
  long j;
  long current;
  long sum=0;
  long array[UPTO];
  for(i=2; i<UPTO; i++) {
    array[i-2] = i;
  }
  for(i = 0; i < UPTO; i++) {
    current = array[i];
    for(j=i+1; j < UPTO; j++) {
      if(current == 0) {
        break;
      }
      if(array[j] % current == 0) {
        array[j] = 0;
      }
    }
    sum += current;
  }
  printf("%lu\n", sum);
  return 0;
}
