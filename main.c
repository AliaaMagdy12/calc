#include <stdio.h>

// Function to calculate the sum of two integers
float addTwoIntegers(float num1, float num2) {
    // Calculate the sum
    float sumResult = num1 + num2;

    return sumResult;
}

int main() {

    float num1, num2;

    printf("Enter the first num: ");
    scanf("%f", &num1);

    printf("Enter the second num: ");
    scanf("%f", &num2);

    int result_sum = addTwoIntegers(num1, num2);

    printf("Sum: %d\n", result_sum);

    return 0;
}