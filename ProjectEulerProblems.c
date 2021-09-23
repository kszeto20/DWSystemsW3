#include <stdio.h>

int sumOf35 () {
  int sum = 0;
  int f = 1;
  for (f; f < 1000; f++) {
    if ((f % 3 == 0) || (f % 5 == 0)) {
      sum += f;
    }
  }
  return sum;
}

int main() {
  int i = sumOf35();
  printf("Sum of 3 or 5 multiples is %d\n", i);
  printf("Good News Everyone!\n");
  return 0;
}
