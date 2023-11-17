#include <stdio.h>

float add(float num1, float num2) {
    // Calculate the sum
    float sumResult = num1 + num2;

    return sumResult;
}

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


float MUL(float num1, float num2)
{
	return num1*num2;
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
/*---------------------ADD-------------------*/
    printf("Enter the first num: ");
    scanf("%f", &num1);

    printf("Enter the second num: ");
    scanf("%f", &num2);

    float result_sum = add(num1, num2);

    printf("Sum: %f\n", result_sum);
	
/*---------------------MUL-------------------*/
	printf("%d",MUL(num1,num2));

    return 0;
}