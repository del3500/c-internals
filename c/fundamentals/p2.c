#include <math.h>
#include <stdio.h>

int main(void) {
  char buffer[100];
  double radius;
  printf("enter the radius: ");

  if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
    if (sscanf(buffer, "%lf", &radius) != 1) {
      printf("Invalid radius input");
    } else {
      double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
      printf("%lf", volume);
    }
  } else {
    printf("Error reading input\n");
  }
  return 0;
}
