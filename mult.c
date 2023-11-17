#include <stdio.h>
float mult(float num1,float num2)
{
	// Calculating product
	float product;
   product = num1 * num2;
	return product;

}
int main() {
    float a, b, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);  
 	result=mult(a,b);
    

    // result 
    printf("result = %.2lf", result);
    
    return 0;
}
