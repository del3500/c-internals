#include <stdio.h>

int main(void) {
    char buf[100];
    double amount;
    printf("Enter an amount: ");

    fgets(buf, sizeof(buf), stdin);
    
    if(sscanf(buf, "%lf", &amount) != 1) {
        printf("Error reading input");
    } else {
        double tax = amount * 0.05;
        amount += tax; 
        printf("With tax added: $%0.2lf", amount);
    }
    return 0;
}
