#include <stdio.h>

int main(void) {
  char buffer[100];
  int amount;
  int twenty = 0, ten = 0, five = 0, one = 0;

  printf("Enter the amount: $");
  fgets(buffer, sizeof(buffer), stdin);
  if (sscanf(buffer, "%d", &amount) != 1) {
    printf("Invalid input\n");
    return 0;
  }

  while (amount > 0) {
    if (amount >= 20) {
      amount -= 20;
      twenty++;
    } else if (amount >= 10) {
      amount -= 10;
      ten++;
    } else if (amount >= 5) {
      amount -= 5;
      five++;
    } else {
      amount -= 1;
      one++;
    }
  }

  printf("$20 bills: %d\n", twenty);
  printf("$10 bills: %d\n", ten);
  printf("$5 bills: %d\n", five);
  printf("$1 bills: %d\n", one);

  return 0;
}
