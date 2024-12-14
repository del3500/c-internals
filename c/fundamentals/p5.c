#include <math.h>
#include <stdio.h>

// 3x5 + 2x4 – 5x3 – x2 + 7x – 6

int main(void) {
  char buffer[100];
  double x;
  double result;

  fgets(buffer, sizeof(buffer), stdin);

  if (sscanf(buffer, "%lf", &x) == 1) {
    result = (3 * pow(x, 5)) + (2 * pow(x, 4)) - (5 * pow(x, 3)) - pow(x, 2) +
             (7 * x) - 6;
    printf("polynomial: 3x5 + 2x4 – 5x3– x2 + 7x – 6\nResult: %.3lf\n", result);
  } else {
    printf("invalid input");
  }
  return 0;
}
