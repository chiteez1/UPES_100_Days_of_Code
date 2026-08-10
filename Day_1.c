#include <stdio.h>

int main(){
    // Question 1: Input numbers and display sum
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The sum is: %d", a + b);

    // Question 2: Input two numbers and display sum, difference, product, and quotient
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %.2f\n", (float) a / b);
    return 0;
}
