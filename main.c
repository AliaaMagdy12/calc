#include <stdio.h>
#include<math.h>

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
float Mod(float x, float y)
{
	return fmod(x,y);
}
int main() {
/*----------------------division--------------------*/
    float num1, num2;
    char ch;
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);
    
    printf("enter the operation ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case('+'):
            printf("%f",add(num1,num2));
            break;
        case('-'):
            printf("%f",subtract(num1,num2));
            break;
        case('/'):
            printf("%f",divide(num1,num2));
            break;
        case('*'):
            printf("%f",MUL(num1,num2));
            break;
        case('%'):
            printf("%f",Mod(num1,num2));
            break;
    }
    
    return 0;
}