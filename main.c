 #include "euler.h"

int main() {
  int a = sumOf35();
  printf("Problem 1: Sum of all the multiples of 3 or 5 below 1000 is %d\n", a);
  int b = sumOfSq();
  printf("Problem 6: Diff between sum of squares and square of sums is %d\n", b);
  printf("Good News Everyone!\n");
  return 0;
}
