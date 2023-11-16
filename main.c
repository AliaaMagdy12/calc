#include <stdio.h>

float divide(float dividend, float divisor) {
    if (divisor != 0) {
        return dividend / divisor;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

float subtract(float minuend, float subtrahend) {
    return minuend - subtrahend;
}

int main() {
/*----------------------division--------------------*/
    float num1, num2;

    printf("Enter the dividend: ");
    scanf("%f", &num1);

    printf("Enter the divisor: ");
    scanf("%f", &num2);

    float result = divide(num1, num2);
    printf("Result: %.2f\n", result);

/*---------------------Subtraction-------------------*/

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    float subtractionResult = subtract(num1, num2);
    printf("Subtraction Result: %.2f\n", subtractionResult);


    return 0;
}