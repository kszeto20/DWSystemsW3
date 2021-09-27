#include "euler.h"

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

int sumOfSq() {
  int sumOf2 = 0;
  int sumOfNum = 0;
  //sum of squares
  int i = 1;
  for (i; i <= 100; i++) {
    sumOf2 += (i * i);
  }

  // square of sums
  int j = 1;
  for (j; j <= 100; j++) {
    sumOfNum += j;
  }

  int sqOfSum = sumOfNum * sumOfNum;

  return (sqOfSum - sumOf2);
}
